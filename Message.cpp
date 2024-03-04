//
// Created by tomma on 04/03/2024.
//

#include "Message.h"


Message::Message(const string &object, const string &text, const shared_ptr<User> &sender, const shared_ptr<User> &receiver) : object(object), text(text), sender(sender), receiver(receiver) {
}

Message::~Message() {
}


const string &Message::getObject() const {

    return object;

}

const string &Message::getText() const {

    return text;

}

const shared_ptr<User> &Message::getSender() const {

    return sender;

}

const shared_ptr<User> &Message::getReceiver() const {

    return receiver;

}

void Message::setText() {

    cout << "Insert the text of the message: ";
    cin >> text;

}