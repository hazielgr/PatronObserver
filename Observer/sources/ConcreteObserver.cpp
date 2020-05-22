//
// Created by haziel on 16/3/20.
//

#include "../headers/ConcreteObserver.h"

ConcreteObserver::ConcreteObserver(ConcreteSubject objObservado){
    this->objObservado = objObservado;
}

//indica que el objeto observado cambio de name
void Observer::updtateObservers(string name) {
    cout<<"El valor del objeto ha cambiado a -> "<<name<<endl;
}
