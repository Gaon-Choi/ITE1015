#include <iostream>
#include "setfunc.h"

int main(void) {
	while (true) {
		std::string given;
		std::getline(std::cin, given);
		if (given == "0")
			break;
		int boundary;
		if (given.find('+')!=std::string::npos)
			boundary = given.find('+');
		else if (given.find('-')!=std::string::npos)
			boundary = given.find('-');
		else
			boundary = given.find('*');
		std::string set1 = given.substr(0, boundary - 1);
		std::string oper = given.substr(boundary, 1);
		std::string set2 = given.substr(boundary + 2);
		std::set<int> set_1 = parseSet(set1);
		std::set<int> set_2 = parseSet(set2);
		std::set<int> ans;
		if (oper == "+")
			ans = getUnion(set_1, set_2);
		else if (oper == "*")
			ans = getIntersection(set_1, set_2);
		else if (oper == "-")
			ans = getDifference(set_1, set_2);
		printSet(ans);
	}
	return 0;
}
