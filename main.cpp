

#include "ChatLog.h"

int main() {

    shared_ptr<User> user1 = make_shared<User>("Tommy37", "Tommaso", "Puzzo");
    shared_ptr<User> user2 = make_shared<User>("Giovannino", "Giovanni", "Rossi");
    shared_ptr<User> user3 = make_shared<User>("Pier", "Pierluigi", "Bianchi");

    shared_ptr<Message> message1 = make_shared<Message>("Saluti");
    user1->sendMessage(message1, user2);

    shared_ptr<Message> message2 = make_shared<Message>("Salutoni");
    user2->sendMessage(message2, user1);

    shared_ptr<Message> message3 = make_shared<Message>("Salutissimi");
    user1->sendMessage(message3, user3);

    ChatLog::getInstance()->displayChatLog();

}
