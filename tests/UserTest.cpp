//
// Created by tomma on 22/03/2024.
//

#include "gtest/gtest.h"

#include "../User.h"
#include "../Chat.h"


class UserTestSuite : public ::testing::Test {

protected:

    shared_ptr<User> user1;
    shared_ptr<User> user2;

    void SetUp() override {

        user1 = make_shared<User>("Tommy37", "Tommaso", "Puzzo");
        user2 = make_shared<User>("Giovannino", "Giovanni", "Rossi");

    }

    void TearDown() override {

        user1.reset();
        user2.reset();

    }

};




TEST_F(UserTestSuite, ConstructorTest) {

    EXPECT_EQ(user1->getNickname(), "Tommy37");
    EXPECT_EQ(user1->getName(), "Tommaso");
    EXPECT_EQ(user1->getSurname(), "Puzzo");

}


TEST_F(UserTestSuite, CreateAndFindChatWithTest) {

    shared_ptr<Chat> chat = user1->CreateChatWith(user2);

    EXPECT_TRUE(user1->findChatWith(user2));
    EXPECT_TRUE(user2->findChatWith(user1));

    EXPECT_EQ(chat->getUser1(), user1);
    EXPECT_EQ(chat->getUser2(), user2);

}


TEST_F(UserTestSuite, AddChatTest) {

    shared_ptr<Chat> chat = user1->CreateChatWith(user2);
    user1->addChat(chat);

    EXPECT_TRUE(user1->findChatWith(user2));

}


TEST_F(UserTestSuite, SendMessageTest) {

    shared_ptr<Message> message = make_shared<Message>("Saluti");
    user1->sendMessage(message, user2);

    EXPECT_TRUE(user1->findChatWith(user2));

}
