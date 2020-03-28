#include "intset.h"

IntegerSet::IntegerSet() {
	// Nothing
}

IntegerSet::~IntegerSet() {
	// Nothing
}

void IntegerSet::AddNumber(int num) {
	bool check = true;
	for (int i = 0; i < numbers_.size(); i++)
		if (numbers_[i] == num) check = false;
	if (check)
		numbers_.push_back(num);
	sort(numbers_.begin(), numbers_.end());
}

void IntegerSet::DeleteNumber(int num) {
	int idx = -1;
	for (int i = 0; i < numbers_.size(); i++)
		if (numbers_[i] == num) idx = i;
	if (idx != -1) {
		numbers_.erase(numbers_.begin() + idx);
	}
	else return;
}

int IntegerSet::GetItem(int pos) const {
	if (pos >= numbers_.size())
		return -1;
	else
		return numbers_[pos];
}

std::vector<int> IntegerSet::GetAll() const {
	return numbers_;
}
