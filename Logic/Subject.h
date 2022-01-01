#ifndef DOODLEJUMPER_SUBJECT_H
#define DOODLEJUMPER_SUBJECT_H

#include "Observer.h"
#include <memory>

// Abstract class for Observer-Subject Design Pattern

// I'm using weak_ptr because I don't think a subject should keep an Observer object alive.
// Advantage: An object can get deleted without first detaching from the subject.
// Disadvantage: Have to convert weak_ptr to shared_ptr if not expired.

class Subject {
public:
    virtual ~Subject(){};
    virtual void Attach(std::shared_ptr<Observer> observer) = 0;
    virtual void Detach(std::shared_ptr<Observer> observer) = 0;
    virtual void Notify() = 0;
};


#endif //DOODLEJUMPER_SUBJECT_H
