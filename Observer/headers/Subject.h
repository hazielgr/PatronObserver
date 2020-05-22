//
// Created by haziel on 16/3/20.
//

#ifndef OBSERVER_SUBJECT_H
#define OBSERVER_SUBJECT_H

#include <list>
#include <iostream>
#include "Observer.h"

using namespace std;

class Subject {
private:
    list<Observer*> observers;
public:
    void addObserver(Observer *observer);
    void notifyObserver(string name);
};

#endif //OBSERVER_SUBJECT_H
