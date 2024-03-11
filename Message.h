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

    Message (const string &object, const shared_ptr<User> &sender, const shared_ptr<User> &receiver);

    ~Message();


    const string &getObject() const;

    const string &getText() const;

    const shared_ptr<User> &getSender() const;

    const shared_ptr<User> &getReceiver() const;

    void setText();

};

#endif //TOMMASO_PUZZO_CHATUTENTI_MESSAGE_H
