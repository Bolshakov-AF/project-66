#include "Message.h"
#include <string>
using namespace std;

Message::Message(const string& sender, const string& receiver, const string& message) :
	from_(sender), to_(receiver), message_(message) {}

const string& Message::getSender() const
{
	return from_;
}

const string& Message::getReceiver() const
{
	return to_;
}

const string& Message::getMessage() const
{
	return message_;
}
