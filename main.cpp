/* Classi che rappresentano note (es. Bear / Evernote).
Ogni nota è composta da titolo e testo, può essere bloccata per evitarne cancellazione/modifica e fa parte di una collezione
specificata con nome. Può anche far parte di una collezione di note importanti oltre che di una collezione specifica. Usare
Observer per indicare quante note stanno in una collezione. */

#include <iostream>
#include <string>
#include <list>
using namespace std;

class Observer {
public:
    ~Observer() {};
    virtual void update() = 0;
};

class Subject {
private:
    list<Observer*> obs;
public:
    virtual ~Subject() {};
    virtual void addObserver(Observer* o)=0;
    virtual void removeObserver(Observer* o)=0;
    virtual void notifyObserver()=0;
};
