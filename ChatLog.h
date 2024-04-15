//
// Created by tomma on 03/03/2024.
//

#ifndef TOMMASO_PUZZO_CHATUTENTI_CHATLOG_H
#define TOMMASO_PUZZO_CHATUTENTI_CHATLOG_H



#include "Chat.h"


class ChatLog {

private:

    static shared_ptr<ChatLog> instance;

    vector<shared_ptr<Chat>> chats;


    ChatLog();

public:

    ~ChatLog();


    const vector<shared_ptr<Chat>> &getChats() const;


    static shared_ptr<ChatLog> getInstance();

    static void destroyInstance();

    //TODO metodo per chiedere se una chat tra 2 user è presente nel chatlog + testare

    //TODO una volta fatte tutte le modifiche richieste mandare mail con link alla repository

    void addChat(shared_ptr<Chat> chat);

    void displayChatLog () const;

};



#endif //TOMMASO_PUZZO_CHATUTENTI_CHATLOG_H