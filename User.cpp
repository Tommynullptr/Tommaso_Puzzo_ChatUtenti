//
// Created by tomma on 04/03/2024.
//

#include "User.h"


User::User(const string &nickname, const string &name, const string &surname) : nickname(nickname), name(name), surname(surname){

}

User::~User() {
}


const string &User::getNickname() const {

    return nickname;

}

const string &User::getName() const {

    return name;

}

const string &User::getSurname() const {

    return surname;

}

//implement sendMessage: it creates a new message with the current user as sender and adds it to the chat between the current user and the receiver, if a chat doesn't exist it creates a new chat between the current user and the receiver and i do this thanks to a method findOrCreateChat

void User::sendMessage(const string &object, shared_ptr<User> receiver) {

    shared_ptr<Message> message(new Message(object, shared_ptr<User>(this), receiver));

    shared_ptr<Chat> chat = findOrCreateChat(shared_from_this(), receiver);

    chat->addMessage(message);

}

//implement findOrCreateChat: it finds the chat between the current user and the receiver, if it doesn't exist it creates a new chat between the current user and the receiver


