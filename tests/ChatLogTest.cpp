//
// Created by tomma on 24/03/2024.
//

#include <gtest/gtest.h>

#include "ChatLog.h"



class ChatLogTestSuite : public ::testing::Test {

protected:

    shared_ptr<ChatLog> chatLog;

    shared_ptr<Chat> chat;

    shared_ptr<User> user1;
    shared_ptr<User> user2;

    void SetUp() override {

        user1 = make_shared<User>("Nickname1", "Name1", "Surname1");
        user2 = make_shared<User>("Nickname2", "Name2", "Surname2");

        chat = make_shared<Chat>();
        chat->setUser1(user1);
        chat->setUser2(user2);

        chatLog = ChatLog::getInstance();

    }

    void TearDown() override {

        ChatLog::destroyInstance();

        User::clearNicknames();

    }

};



TEST_F(ChatLogTestSuite, AddChatTest) {

    chatLog->addChat(chat);

    EXPECT_EQ(chatLog->getChats().size(), 1);

}


//test per verificare che la chat tra due utenti sia presente nel chatlog

TEST_F(ChatLogTestSuite, GetChatBetweenTest) {

    chatLog->addChat(chat);

    shared_ptr<Chat> foundChat = chatLog->getChatBetween(user1, user2);

    EXPECT_EQ(foundChat, chat);

}


TEST_F(ChatLogTestSuite, FindChatBetweenTest) {

    chatLog->addChat(chat);

    bool found = chatLog->findChatBetween(user1, user2);

    EXPECT_TRUE(found);

}


TEST_F(ChatLogTestSuite, ChatNotFoundTest) {

        bool found = chatLog->findChatBetween(user1, user2);

        EXPECT_FALSE(found);

}