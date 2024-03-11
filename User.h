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

public:

    User(const string &nickname, const string &name, const string &surname);

    ~User();


    const string &getNickname() const;

    const string &getName() const;

    const string &getSurname() const;

    //implement a method to create a new message sendMessage with this user as sender and add it to the chat between this user and another user
    // if the chat doesn't exist create a new chat between this user and the other user

    void sendMessage(const string &object, shared_ptr<User> receiver);

};

#endif //TOMMASO_PUZZO_CHATUTENTI_USER_H
