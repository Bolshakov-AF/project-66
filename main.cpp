#include "Chat.h"

int main()
{
	Chat chat;

	chat.start();

	while (chat.isChatWorking())
	{
		chat.chatOptions();

		while (chat.getCurrUser())
		{
			chat.userOptions();
		}
	}
	return 0;
}
