//
// Created by haziel on 16/3/20.
//

#ifndef OBSERVER_CONCRETESUBJECT_H
#define OBSERVER_CONCRETESUBJECT_H


#include "Subject.h"

class ConcreteSubject : public Subject{
private:
    string name;
public:
    ConcreteSubject();
    string getName();
    void setName(string name);

};


#endif //OBSERVER_CONCRETESUBJECT_H
