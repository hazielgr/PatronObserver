//
// Created by haziel on 16/3/20.
//

#include "../headers/Subject.h"

//agrega un nuevo observador a lista de observers
void Subject::addObserver(Observer *observer) {
    observers.push_back(observer);
}

//metodo que notifica o actualiza a todos los observers(recorre la lista de observers y los notifica)
void Subject::notifyObserver(string name) {
    _List_iterator<Observer*> aux;
    for(aux  = observers.begin(); aux != observers.end() ; aux++ ){
        //actualiza cada observador
        (*aux)->updtateObservers(name);
    }
}
