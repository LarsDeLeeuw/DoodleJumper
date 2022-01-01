#ifndef DOODLEJUMPER_ENTITY_H
#define DOODLEJUMPER_ENTITY_H

#include <list>
#include "Subject.h"

class Entity : public Subject {
public:
    virtual ~Entity();
    virtual void Attach(std::shared_ptr<Observer> observer) override;
    virtual void Detach(std::shared_ptr<Observer> observer) override;
    virtual void Notify() = 0;

private:
    std::list<std::weak_ptr<Observer>> mObservers;
};


#endif //DOODLEJUMPER_ENTITY_H
