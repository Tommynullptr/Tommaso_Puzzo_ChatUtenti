//
// Created by tomma on 03/03/2024.
//

#include "ChatLog.h"


ChatLog::ChatLog() {
}

ChatLog::~ChatLog() {
}


void ChatLog::addChat(shared_ptr<Chat> chat) {

    chats.push_back(chat);

}

void ChatLog::displayChatLog() const {

    for (const auto& chat : chats) {
        chat->displayChat();
    }

}