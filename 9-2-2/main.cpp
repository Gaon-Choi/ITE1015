#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	int id;
	char* name;
}student;
typedef struct Node_ {
	student stu;
	struct Node_* next;
}Node;
Node* make_node();
int is_blank(Node* list);
int check_exist(Node* list, int id_);
Node* inserting_point(Node* list, int id_);
void insert_student(Node* list, student stu_);
void insert(Node* list, FILE* input, FILE* output);
void print_students(Node* list, FILE* output);
void print_students_2(Node* list, FILE* output);
Node* make_node() {
	Node* node = malloc(sizeof(Node));
	node->stu.id = 0;
	node->stu.name = NULL;
	node->next = NULL;
	return node;
}
int is_blank(Node* list) {
	return list->next == NULL;
}
int check_exist(Node* list, int id_) {
	if (!is_blank(list)) {
		list = list->next;
		while (list != NULL) {
			if (list->stu.id == id_) return 1;
			list = list->next;
		}
		return 0;
	}
	else return 0;
}
Node* inserting_point(Node* list, int id_) {
	if (list == NULL || list->stu.id > id_)
		return NULL;
	Node* prev = list;
	list = list->next;
	while (list != NULL) {
		if (list->stu.id > id_)
			break;
		prev = list;
		list = list->next;
	}
	return prev;
}
void insert_student(Node* list, student stu_) {
	Node* node_ = make_node();
	node_->stu = stu_;
	node_->next = list->next;
	list->next = node_;
}
void print_students(Node* list, FILE* output) {
	fprintf(output, "-----LIST-----\n");
	while (list != NULL) {
		fprintf(output, "%d %s\n", list->stu.id, list->stu.name);
		list = list->next;
	}
	fprintf(output, "--------------\n");
}
void print_students_2(Node* list, FILE* output) {
	fprintf(output, "Current List > ");
	while (list != NULL) {
		fprintf(output, "%d %s", list->stu.id, list->stu.name);
		if (list->next != NULL)
			fprintf(output, "-");
	} fprintf(output, "\n");
}
void insert(Node* list, FILE* input, FILE* output) {
	int id_;
	char first_[100] = { 0, };
	char second_[100] = { 0, };
	fscanf(input, "%d %s %s", &id_, first_, second_);
	if (check_exist(list->next, id_) == 1) {
		fprintf(output, "Insertion Failed. ID %d already exists.\n", id_);
		return;
	}
	strcat(first_, " ");
	strcat(first_, second_);
	int size = strlen(first_);
	student newbee;
	newbee.id = id_;
	newbee.name = malloc(sizeof(char) * size);
	strcpy(newbee.name, first_);
	Node* position = inserting_point(list->next, id_);
	if (position == NULL)
		insert_student(list, newbee);
	else
		insert_student(position, newbee);
	fprintf(output, "Insertion Success : %d\n", id_);
	print_students_2(list, output);
}
int main(void) {
	char opt;
	FILE* input = fopen("input.txt", "r");
	FILE* output = fopen("output.txt", "w");
	Node* student_list = make_node();
	while (fscanf(input, "%c", &opt)) {
		switch (opt) {
		case 'i':
			insert(student_list, input, output);
			break;
		case 'p':
			print_students(student_list->next, output);
			break;
		default: break;
		}
	}
	// freeing of students / Nodes
	while (student_list != NULL) {
		Node* node = student_list->next;
		free(node);
		student_list = node;
	}
	fclose(input);
	fclose(output);
	return 0;
}