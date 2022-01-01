#ifndef DOODLEJUMPER_OBSERVER_H
#define DOODLEJUMPER_OBSERVER_H

// Abstract class for Observer-Subject Design Pattern
class Observer {
public:
    Observer() = default;
    virtual ~Observer() = 0;
    virtual void Update() = 0;
};


#endif //DOODLEJUMPER_OBSERVER_H
