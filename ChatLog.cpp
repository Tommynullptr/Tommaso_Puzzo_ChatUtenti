//
// Created by tomma on 03/03/2024.
//

#include "ChatLog.h"


shared_ptr<ChatLog> ChatLog::instance = nullptr;



ChatLog::ChatLog() {
}

ChatLog::~ChatLog() {
}



const vector<shared_ptr<Chat>> &ChatLog::getChats() const {

    return chats;

}



void ChatLog::addChat(shared_ptr<Chat> chat) {

    chats.push_back(chat);

}

void ChatLog::displayChatLog() const {

    for (const auto& chat : chats) {

        chat->displayReadMessages();

    }

}

shared_ptr<ChatLog> ChatLog::getInstance() {

    if (!instance) {

        instance = shared_ptr<ChatLog>(new ChatLog);

    }

    return instance;

}

void ChatLog::destroyInstance() {

    instance.reset();

}