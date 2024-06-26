//
// Created by tomma on 04/03/2024.
//

#ifndef TOMMASO_PUZZO_CHATUTENTI_USER_H
#define TOMMASO_PUZZO_CHATUTENTI_USER_H



#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;


class Chat;

class Message;

class ChatLog;


class User : public enable_shared_from_this<User> {

private:

    string nickname;

    string name;

    string surname;

    vector<shared_ptr<Chat>> chats;

    static vector<string> nicknames;

public:

    User(const string &nickname, const string &name, const string &surname);

    ~User();


    const string &getNickname() const;

    const string &getName() const;

    const string &getSurname() const;


    void sendMessage(const shared_ptr<Message> &message, const shared_ptr<User> &receiver);

    void addChat(const shared_ptr<Chat> &chat);

    bool findChatWith(const shared_ptr<User> &user);

    shared_ptr<Chat> CreateChatWith(const shared_ptr<User> &user);

    static bool nicknameIsUsed(const string &nickname);

    static void deleteNickname(const string &nickname);

    static void clearNicknames();

};

#endif //TOMMASO_PUZZO_CHATUTENTI_USER_H
