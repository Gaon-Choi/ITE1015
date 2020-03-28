#include "message.h"
MessageBook::MessageBook() {
	// Nothing
}

MessageBook::~MessageBook() {
	// Nothing
}

void MessageBook::AddMessage(int number, const std::string& message) {
	messages_[number] = message;
}

void MessageBook::DeleteMessage(int number) {
	auto iter = messages_.find(number);
	if (iter != messages_.end())
		messages_.erase(iter);
}

std::vector<int> MessageBook::GetNumbers() const {
	std::vector<int> key;
	key.reserve(messages_.size());
	for (auto const& map_pair : messages_)
		key.emplace_back(map_pair.first);
	return key;
}

const std::string& MessageBook::GetMessage(int number) const {
	auto iter = messages_.find(number);
	if (iter != messages_.end())
		return (*iter).second;
	return "";
}
