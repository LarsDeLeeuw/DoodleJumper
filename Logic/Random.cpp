#include "Random.h"
#include <memory>

std::shared_ptr<Random> Random::random_ = nullptr;

std::shared_ptr<Random> Random::getRandom(int seed) {
    if(random_ == nullptr){
        std::shared_ptr<Random> temp(new Random(seed));
        random_ = temp;
        temp = nullptr;
    }
    return random_;
}

int Random::getSeed() {
    try {
        if (random_ == nullptr){
            throw 1;
        }
        return seed_;
    }
    catch(int){
        return 0;
    }
    catch(...){
        //unexpected
        return -1;
    }
}