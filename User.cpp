//
// Created by tomma on 04/03/2024.
//

#include "User.h"
#include "ChatLog.h"
#include "Chat.h"
#include "Message.h"


vector<string> User::nicknames;


User::User(const string &nickname, const string &name, const string &surname) : nickname(nickname), name(name), surname(surname){

    if (nicknameIsUsed(nickname)) {

        cout << "Nickname already taken!" << endl;

    } else {

        nicknames.push_back(nickname);
        cout << "User created!" << endl;

    }

}

User::~User() {

    deleteNickname(nickname);

    cout << "User deleted!" << endl;

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



void User::addChat(const shared_ptr<Chat> &chat) {

    chats.push_back(chat);

}

void User::sendMessage(const shared_ptr<Message> &message, const shared_ptr<User> &receiver) {

    message->setSender(shared_from_this());
    message->setReceiver(receiver);

    if (findChatWith(receiver)) {

        for (const auto& chat : chats) {

            if (chat->getUser1() == receiver || chat->getUser2() == receiver) {

                chat->addMessage(message);

            }

        }

    } else {

        shared_ptr<Chat> chat = CreateChatWith(receiver);
        chat->addMessage(message);

    }

    cout << "Message sent!" << endl;

}

bool User::findChatWith(const shared_ptr<User> &user) {

    for (const auto& chat : chats) {

        if (chat->getUser1() == user || chat->getUser2() == user) {

            return true;

        }

    }

    return false;

}

shared_ptr<Chat> User::CreateChatWith(const shared_ptr<User> &user) {

    shared_ptr<Chat> chat = make_shared<Chat>();

    chat->setUser1(shared_from_this());
    chat->setUser2(user);

    ChatLog::getInstance()->addChat(chat);

    addChat(chat);
    user->addChat(chat);

    cout << "Chat created with " << user->getName() << endl;

    return chat;

}

bool User::nicknameIsUsed(const string &nickname) {

    for (const auto& n : nicknames) {

        if (n == nickname) {

            return true;

        }

    }

    return false;

}

void User::deleteNickname(const string &nickname) {

    for (auto it = nicknames.begin(); it != nicknames.end(); it++) {

        if (*it == nickname) {

            nicknames.erase(it);
            break;

        }

    }

}


