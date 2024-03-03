//
// Created by tomma on 03/03/2024.
//

#ifndef TOMMASO_PUZZO_CHATUTENTI_CHAT_H
#define TOMMASO_PUZZO_CHATUTENTI_CHAT_H

#endif //TOMMASO_PUZZO_CHATUTENTI_CHAT_H


#include "Subject.h"


class Chat : public Subject {

private:

    std::shared_ptr<User> user1;

    std::shared_ptr<User> user2;

    std::vector<std::shared_ptr<Message>> messages;

public:

};
