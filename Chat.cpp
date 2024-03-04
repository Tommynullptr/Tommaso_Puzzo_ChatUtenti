//
// Created by tomma on 03/03/2024.
//

#include "Chat.h"


Chat::Chat(const shared_ptr<User> &user1, const shared_ptr<User> &user2) : user1(user1), user2(user2) {
}

Chat::~Chat() {
}


const shared_ptr<User> &Chat::getUser1() const {

    return user1;

}

const shared_ptr<User> &Chat::getUser2() const {

    return user2;

}


void Chat::addMessage(const shared_ptr<Message> &message) {

    messages.push_back(message);

}

void Chat::displayChat() const {

    cout << "Chat between " << user1->getName() << " and " << user2->getName() << endl;

    for (const auto& message : messages) {
        cout << "Object: " << message->getObject() << endl;
        cout << "Text: " << message->getText() << endl;
        cout << "Sender: " << message->getSender()->getName() << endl;
        cout << "Receiver: " << message->getReceiver()->getName() << endl;
    }

}



