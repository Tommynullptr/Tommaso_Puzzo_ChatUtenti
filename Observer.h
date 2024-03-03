//
// Created by tomma on 03/03/2024.
//

#ifndef TOMMASO_PUZZO_CHATUTENTI_OBSERVER_H
#define TOMMASO_PUZZO_CHATUTENTI_OBSERVER_H

#endif //TOMMASO_PUZZO_CHATUTENTI_OBSERVER_H


#include <iostream>
#include <string>
#include <vector>
#include <memory>


class Observer {

public:

    virtual ~Observer();


    virtual void update() = 0;

};