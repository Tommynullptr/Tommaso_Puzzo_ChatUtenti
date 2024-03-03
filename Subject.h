//
// Created by tomma on 03/03/2024.
//

#ifndef TOMMASO_PUZZO_CHATUTENTI_SUBJECT_H
#define TOMMASO_PUZZO_CHATUTENTI_SUBJECT_H

#endif //TOMMASO_PUZZO_CHATUTENTI_SUBJECT_H


#include"Observer.h"


class Subject {

public:

    virtual ~Subject();


    virtual void subscribe(std::shared_ptr<Observer> observer) = 0;

    virtual void unsubscribe(std::shared_ptr<Observer> observer) = 0;

    virtual void notify() = 0;

};
