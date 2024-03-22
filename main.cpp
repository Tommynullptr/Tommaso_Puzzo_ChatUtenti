

#include "User.h"

int main() {

    //crea due users
    shared_ptr<User> user1 = make_shared<User>("Tommy37", "Tommaso", "Puzzo");
    shared_ptr<User> user2 = make_shared<User>("Giovannino", "Giovanni", "Rossi");

    //tommaso deve mandare un messaggio a giovanni, creazione messaggio
    shared_ptr<Message> message1 = make_shared<Message>("Saluti");
    user1->sendMessage(message1, user2);

    ChatLog::getInstance()->displayChatLog();



}
