//
// Created by tomma on 03/03/2024.
//

#ifndef TOMMASO_PUZZO_CHATUTENTI_CHAT_H
#define TOMMASO_PUZZO_CHATUTENTI_CHAT_H



#include "Message.h"


class Chat {

private:

    shared_ptr<User> user1;

    shared_ptr<User> user2;

    vector<shared_ptr<Message>> unreadMessages;

    vector<shared_ptr<Message>> readMessages;

public:

    Chat ();

    ~Chat();


    const shared_ptr<User> &getUser1() const;

    const shared_ptr<User> &getUser2() const;

    const vector<shared_ptr<Message>> &getReadMessages() const;

    const vector<shared_ptr<Message>> &getUnreadMessages() const;


    void setUser1(const shared_ptr<User> &user1);

    void setUser2(const shared_ptr<User> &user2);


    void addMessage(const shared_ptr<Message> &message);

    void displayReadMessages() const;

    //aggiungere messaggi letti e non letti + metodi e fare test

    void displayUnreadMessages();

    void displayMessages(const vector<shared_ptr<Message>> &messages) const;

    void moveMessages();

};



#endif //TOMMASO_PUZZO_CHATUTENTI_CHAT_H