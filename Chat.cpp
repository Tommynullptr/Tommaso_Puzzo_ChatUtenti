//
// Created by tomma on 03/03/2024.
//

#include "Chat.h"


Chat::Chat() {
}

Chat::~Chat() {
}



const shared_ptr<User> &Chat::getUser1() const {

    return user1;

}

const shared_ptr<User> &Chat::getUser2() const {

    return user2;

}

const vector<shared_ptr<Message>> &Chat::getReadMessages() const {

    return readMessages;

}

const vector<shared_ptr<Message>> &Chat::getUnreadMessages() const {

    return unreadMessages;

}



void Chat::setUser1(const shared_ptr<User> &user1) {

    Chat::user1 = user1;

}

void Chat::setUser2(const shared_ptr<User> &user2) {

    Chat::user2 = user2;

}



void Chat::addMessage(const shared_ptr<Message> &message) {

    unreadMessages.push_back(message);

}

void Chat::displayReadMessages() const {

    cout << "Chat between " << user1->getName() << " and " << user2->getName() << endl;

    displayMessages(readMessages);

}

void Chat::displayUnreadMessages() {

    cout << "Unread messages in chat between " << user1->getName() << " and " << user2->getName() << endl;

    displayMessages(unreadMessages);

    moveMessages();

    cout << "Messages have been read!" << endl;

}

void Chat::displayMessages(const vector<shared_ptr<Message>> &messages) const {

    for (const auto& message : messages) {

        message->display();

    }

}

void Chat::moveMessages() {

    for (const auto& message : unreadMessages) {

        readMessages.push_back(message);

    }

    unreadMessages.clear();

}