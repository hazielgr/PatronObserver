//
// Created by haziel on 16/3/20.
//

#ifndef OBSERVER_CONCRETEOBSERVER_H
#define OBSERVER_CONCRETEOBSERVER_H


#include "ConcreteSubject.h"

class ConcreteObserver : public Observer {
private:
    ConcreteSubject objObservado;
public:
    ConcreteObserver(ConcreteSubject objObservado);
};

#endif //OBSERVER_CONCRETEOBSERVER_H
