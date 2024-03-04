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


class User {

private:

    string nickname;

    string name;

    string surname;

public:

    User(const string &nickname, const string &name, const string &surname);

    ~User();


    const string &getNickname() const;

    const string &getName() const;

    const string &getSurname() const;

};

#endif //TOMMASO_PUZZO_CHATUTENTI_USER_H
