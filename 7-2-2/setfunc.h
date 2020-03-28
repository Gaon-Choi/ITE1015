#ifndef __SETFUNC_H__
#define __SETFUNC_H__
#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include <map>

std::set<int> getIntersection(const std::set<int>& set0, const std::set<int>& set1);
std::set<int> getUnion(const std::set<int>& set0, const std::set<int>& set1);
std::set<int> getDifference(const std::set<int>& set0, const std::set<int>& set1);
std::set<int> parseSet(const std::string& str);
void printSet(const std::set<int>&);

#endif
