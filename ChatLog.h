//
// Created by tomma on 03/03/2024.
//

#ifndef TOMMASO_PUZZO_CHATUTENTI_CHATLOG_H
#define TOMMASO_PUZZO_CHATUTENTI_CHATLOG_H



#include "Chat.h"


class ChatLog {

private:

    vector<shared_ptr<Chat>> chats;

public:

    ChatLog();

    ~ChatLog();


    void addChat(shared_ptr<Chat> chat);

    void displayChatLog () const;

};



#endif //TOMMASO_PUZZO_CHATUTENTI_CHATLOG_H