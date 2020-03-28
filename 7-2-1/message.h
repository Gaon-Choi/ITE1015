#ifndef __MESSAGE_H__
#define __MESSAGE_H__
#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <vector>

class MessageBook {
	public:
		MessageBook();
		~MessageBook();
		void AddMessage(int number, const std::string& message);
		void DeleteMessage(int number);
		std::vector<int> GetNumbers() const;
		const std::string& GetMessage(int number) const;
	private:
		std::map<int, std::string> messages_;
};

#endif
