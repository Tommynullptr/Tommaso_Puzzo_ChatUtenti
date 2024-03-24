//
// Created by tomma on 24/03/2024.
//

#include "gtest/gtest.h"

#include "Message.h"



class MessageTestSuite : public ::testing::Test {

protected:

    shared_ptr<Message> message;

    shared_ptr<User> user1;
    shared_ptr<User> user2;

    void SetUp() override {

        message = make_shared<Message>("Object", "Text");

        user1 = make_shared<User>("Nickname1", "Name1", "Surname1");
        user2 = make_shared<User>("Nickname2", "Name2", "Surname2");

    }

};



TEST_F(MessageTestSuite, ConstructorTest) {

    EXPECT_EQ(message->getObject(), "Object");
    EXPECT_EQ(message->getText(), "Text");

}


TEST_F(MessageTestSuite, SettersTest) {

    message->setSender(user1);
    message->setReceiver(user2);

    EXPECT_EQ(message->getSender(), user1);
    EXPECT_EQ(message->getReceiver(), user2);

}
