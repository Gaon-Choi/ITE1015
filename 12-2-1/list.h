#ifndef __LIST_H__
#define __LIST_H__

#include <iostream>
using namespace std;

template <class T>
class Node
{
public:
	T data;
	Node<T>* next;
};

template <class T>
class List {
private:
	Node<T>* head;
public:
	List() : head(NULL) {};
	~List();//free resources
	List(T* arr, int n_nodes);//create a list with n_nodes
	void insert_at(int idx, const T& data) const;
	void remove_at(int idx);
	void pop_back();
	void push_back(const T& val) const;
	void pop_front();
	void push_front(const T& val);
	template <class U>
	friend ostream& operator<<(ostream& out, List<U>& rhs);//print out nodes
};

template <class T>
List<T>::~List() {
	while (this->head) {
		Node<T>* node = head->next;
		delete head;
		head = node;
	}
}

template <class T>
List<T>::List(T* arr, int n_nodes)
	:head(new Node<T>) {
	Node<T>* node = this->head;
	for (int i = 0; i < n_nodes; i++) {
		node->data = arr[i];
		if (i == n_nodes - 1)
			node->next = NULL;
		else {
			node->next = new Node<T>;
			node = node->next;
		}
	}
}

template <class T>
void List<T>::insert_at(int idx, const T& data) const {
	Node<T>* prevNode = head;
	Node<T>* node = new Node<T>;
	Node<T>* finalNode = head;
	node->data = data;
	for (int i = 0; i < idx - 1; i++) {
		prevNode = prevNode->next;
		finalNode = finalNode->next;
	}
	finalNode = finalNode->next;
	prevNode->next = node;
	node->next = finalNode;
}

template <class T>
void List<T>::remove_at(int idx) {
	Node<T>* tempNode = head;
	Node<T>* deleteNode;
	Node<T>* swapNode;

	if (idx != 0) {
		for (int i = 0; i < idx - 1; i++)
			tempNode = tempNode->next;
		deleteNode = tempNode->next;
		swapNode = deleteNode->next;
		tempNode->next = swapNode;
	}
	else {
		head = tempNode->next;
		deleteNode = tempNode;
	}
	delete deleteNode;
}

template <class T>
void List<T>::pop_back() {
	Node<T>* prevNode = this->head;
	Node<T>* deleteNode = this->head;
	if (prevNode->next == NULL)
		delete this->head;
	else {
		while (deleteNode->next->next) {
			prevNode = prevNode->next;
			deleteNode = deleteNode->next;
		}
		deleteNode = deleteNode->next;
		prevNode->next = NULL;
		delete deleteNode;
	}
}

template <class T>
void List<T>::push_back(const T& val) const {
	Node<T>* new_node = new Node<T>;
	new_node->data = val;
	new_node->next = NULL;
	Node<T>* iter = this->head;
	while (iter->next)
		iter = iter->next;
	iter->next = new_node;
}

template <class T>
void List<T>::pop_front() {
	Node<T>* deleteNode = this->head;
	head = head->next;
	delete deleteNode;
}

template <class T>
void List<T>::push_front(const T& val) {
	Node<T>* new_thing = new Node<T>;
	new_thing->data = val;
	new_thing->next = this->head;
	this->head = new_thing;
}

template <class T>
ostream& operator<<(ostream& out, List<T>& rhs) {
	Node<T>* tmp = rhs.head;
	bool flag = false;
	while (tmp) {
		if (flag)
			out << ", ";
		out << tmp->data;
		flag = true;
		tmp = tmp->next;
	}
	return out;
}

#endif
