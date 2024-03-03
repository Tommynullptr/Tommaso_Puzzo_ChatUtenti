//
// Created by tomma on 03/03/2024.
//

#ifndef TOMMASO_PUZZO_CHATUTENTI_CHATLOG_H
#define TOMMASO_PUZZO_CHATUTENTI_CHATLOG_H

#endif //TOMMASO_PUZZO_CHATUTENTI_CHATLOG_H


#include "Subject.h"
#include "Chat.h"


class ChatLog : public Observer {

private:

    std::vector<std::shared_ptr<Chat>> chats;

public:

    ChatLog();

    ~ChatLog();


    void update() override;  //update dovrà chiamare addChat

    void addChat(const std::string& message);

};

