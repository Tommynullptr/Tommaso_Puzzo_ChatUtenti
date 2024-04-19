//
// Created by tomma on 04/03/2024.
//

#ifndef TOMMASO_PUZZO_CHATUTENTI_MESSAGE_H
#define TOMMASO_PUZZO_CHATUTENTI_MESSAGE_H



#include "User.h"


class Message {

private:

    string object;

    string text;

    shared_ptr<User> sender;

    shared_ptr<User> receiver;

public:

    Message (const string &object);

    //costruttore secondario per testing con text come parametro
    Message (const string &object, const string &text);

    ~Message();


    const string &getObject() const;

    const string &getText() const;

    const shared_ptr<User> &getSender() const;

    const shared_ptr<User> &getReceiver() const;


    void setText();

    void setSender(const shared_ptr<User> &sender);

    void setReceiver(const shared_ptr<User> &receiver);


    void display() const;

};

#endif //TOMMASO_PUZZO_CHATUTENTI_MESSAGE_H
