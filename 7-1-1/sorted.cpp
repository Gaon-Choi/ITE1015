#include "sorted.h"

SortedArray::SortedArray() {
	// Nothing
}

SortedArray::~SortedArray() {
	// Nothing
}

void SortedArray::AddNumber(int num) {
	numbers_.push_back(num);
}

std::vector<int> SortedArray::GetSortedAscending() const {
	std::vector<int> copy = numbers_;
	sort(copy.begin(), copy.end());
	return copy;
}

std::vector<int> SortedArray::GetSortedDescending() const {
	std::vector<int> copy = numbers_;
	sort(copy.begin(), copy.end(), [](int a, int b) {return a > b; });
	return copy;
}

int SortedArray::GetMax() const {
	if (numbers_.size() == 0)
		return -1;
	else {
		return *max_element(numbers_.begin(), numbers_.end());
	}
}

int SortedArray::GetMin() const {
	if (numbers_.size() == 0)
		return -1;
	else {
		return *min_element(numbers_.begin(), numbers_.end());
	}
}
