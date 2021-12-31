#include "Stopwatch.h"
#include <memory>

std::shared_ptr<Stopwatch> Stopwatch::stopwatch_ = nullptr;

std::shared_ptr<Stopwatch> Stopwatch::getStopwatch(int ticks = 0) {
    if(stopwatch_ == nullptr){
        std::shared_ptr<Stopwatch> temp(new Stopwatch(ticks));
        stopwatch_ = temp;
        temp = nullptr;
    }
    return stopwatch_;
}

int Stopwatch::getTicks() {
    try {
        if (stopwatch_ == nullptr){
            throw 1;
        }
        return ticks_;
    }
    catch(int){
        return 0;
    }
    catch(...){
        //unexpected
        return -1;
    }
}