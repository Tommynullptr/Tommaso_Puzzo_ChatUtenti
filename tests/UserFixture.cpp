//
// Created by tomma on 22/03/2024.
//

#include "gtest/gtest.h"
#include "../User.h"

TEST(UserTest, CreationTest) {

    string expected_nickname = "Tommy";
    string expected_name = "Tommaso";
    string expected_surname = "Puzzo";

    User user(expected_nickname, expected_name, expected_surname);

    EXPECT_EQ(expected_nickname, user.getNickname());
    EXPECT_EQ(expected_name, user.getName());
    EXPECT_EQ(expected_surname, user.getSurname());

}