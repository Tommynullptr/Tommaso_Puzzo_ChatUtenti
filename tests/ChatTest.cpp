//
// Created by tomma on 24/03/2024.
//

#include "gtest/gtest.h"

#include "Chat.h"


class ChatTestSuite : public ::testing::Test {

protected:

    shared_ptr<Chat> chat;

    shared_ptr<User> user1;
    shared_ptr<User> user2;

    shared_ptr<Message> message;

    void SetUp() override {

        user1 = make_shared<User>("Nickname1", "Name1", "Surname1");
        user2 = make_shared<User>("Nickname2", "Name2", "Surname2");

        message = make_shared<Message>("Object", "Text");

        chat = make_shared<Chat>();
        chat->setUser1(user1);
        chat->setUser2(user2);

    }

    void TearDown() override {

        user1.reset();
        user2.reset();
        chat.reset();
        message.reset();

        User::clearNicknames();

    }

};


TEST_F(ChatTestSuite, SettersTest) {

    EXPECT_EQ(chat->getUser1(), user1);
    EXPECT_EQ(chat->getUser2(), user2);

}


TEST_F(ChatTestSuite, AddMessageTest) {

    chat->addMessage(message);

    EXPECT_EQ(chat->getUnreadMessages().size(), 1);
    EXPECT_EQ(chat->getReadMessages().size(), 0);

}


TEST_F(ChatTestSuite, DisplayUnreadMessagesTest) {

    chat->addMessage(message);

    chat->displayUnreadMessages();

    EXPECT_EQ(chat->getUnreadMessages().size(), 0);
    EXPECT_EQ(chat->getReadMessages().size(), 1);

}