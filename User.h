//
// Created by tomma on 04/03/2024.
//

#ifndef TOMMASO_PUZZO_CHATUTENTI_USER_H
#define TOMMASO_PUZZO_CHATUTENTI_USER_H



#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "Chat.h"
#include "Message.h"


using namespace std;


class User : public enable_shared_from_this<User> {

private:

    string nickname;

    string name;

    string surname;

    vector<shared_ptr<Chat>> chats;

public:

    User(const string &nickname, const string &name, const string &surname);

    ~User();


    const string &getNickname() const;

    const string &getName() const;

    const string &getSurname() const;

// implement sendMessage that takes an object message, set his sender and receiver based on whom user is calling this method and adds it to a chat between the current user and the receiver, if a chat doesn't exist it creates a new chat between the current user and the receiver and i do this thanks to a method findOrCreateChat
    void sendMessage(const shared_ptr<Message> &message, const shared_ptr<User> &receiver);

    void addChat(const shared_ptr<Chat> &chat);

    bool findChat(const shared_ptr<User> &user);

    shared_ptr<Chat> CreateChatWith(const shared_ptr<User> &user);

};

#endif //TOMMASO_PUZZO_CHATUTENTI_USER_H
