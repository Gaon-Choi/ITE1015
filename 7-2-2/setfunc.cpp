#include "setfunc.h"

std::set<int> getIntersection(const std::set<int>& set0, const std::set<int>& set1) {
	std::set<int> set_1 = getDifference(set0, set1);
	std::set<int> set_2 = getDifference(set1, set0);
	std::set<int> setinter = getUnion(set0, set1);
	for (int i : set_1) {
		setinter.erase(i);
	}
	for (int i : set_2) {
		setinter.erase(i);
	}
	return setinter;
}

std::set<int> getUnion(const std::set<int>& set0, const std::set<int>& set1) {
	std::set<int> setunion = set0;
	for (int i:set0) {
		setunion.emplace(i);
	}
	for (int i : set1) {
		setunion.emplace(i);
	}
	return setunion;
}

std::set<int> getDifference(const std::set<int>& set0, const std::set<int>& set1) {
	std::set<int> setdiff = set0;
	for (int i : set1) {
		setdiff.erase(i);
	}
	return setdiff;
}

std::set<int> parseSet(const std::string& str) {
	std::set<int> result;
	std::set<int> error;
	std::stringstream ss(str);
	std::string given;
	ss >> given;
	if (given != "{")
		return error;
	while (true) {
		int num = 0;
		ss >> num;
		if (ss.fail())
			break;
		result.emplace(num);
	}
	ss.clear();
	ss >> given;
	if (given != "}") {
		return error;
	}
	return result;
}

void printSet(const std::set<int>&set) {
	std::cout << "{ ";
	for (int i : set)
		std::cout << i << " ";
	std::cout << "}" << std::endl;
}
