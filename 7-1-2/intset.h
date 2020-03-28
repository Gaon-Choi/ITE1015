#ifndef __INTSET_H__
#define __INTSET_H__

#include <iostream>
#include <vector>
#include <algorithm>

class IntegerSet {
	public:
		IntegerSet();
		~IntegerSet();

		void AddNumber(int num);
		void DeleteNumber(int num);

		int GetItem(int pos) const;
		std::vector<int> GetAll() const;

	private:
		std::vector<int> numbers_;
};

#endif
