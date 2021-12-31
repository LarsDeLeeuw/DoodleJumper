#ifndef DOODLEJUMPER_STOPWATCH_H
#define DOODLEJUMPER_STOPWATCH_H

#include <memory>

class Stopwatch {
protected:
    Stopwatch(const int ticks) : ticks_(ticks) {}

    static std::shared_ptr<Stopwatch> stopwatch_;
    int ticks_;
public:
    static std::shared_ptr<Stopwatch> getStopwatch(int ticks);

    int getTicks();

    Stopwatch(Stopwatch &other) = delete;

    void operator=(Stopwatch &other) = delete;

};

#endif //DOODLEJUMPER_STOPWATCH_H
