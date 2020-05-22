#include <iostream>
#include <list>
#include "../headers/ConcreteSubject.h"
#include "../headers/ConcreteObserver.h"

using namespace std;
int main() {
    //se crea el objeto observado
    ConcreteSubject objObservado;

    //se agregan observers a la lista de observers
    objObservado.addObserver(new ConcreteObserver(objObservado));
    objObservado.addObserver(new ConcreteObserver(objObservado));
    objObservado.addObserver(new ConcreteObserver(objObservado));

    //se modifica el name del objeto observado por ender todos los objetos son notificados
    objObservado.setName("Mario");
    cout<<"-----------------------------------------"<<endl;
    //nuevamente se modifica el name del objeto observado por ender todos los objetos son notificados otra vez
    objObservado.setName("Haziel");
    return 0;
}
