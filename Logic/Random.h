#ifndef DOODLEJUMPER_RANDOM_H
#define DOODLEJUMPER_RANDOM_H

#include <memory>

class Random {
protected:
    Random(const int seed) : seed_(seed) {}

    static std::shared_ptr<Random> random_;
    int seed_;
public:
    static std::shared_ptr<Random> getRandom(int seed);

    int getSeed();

    Random(Random& other) = delete;
    void operator= (Random& other) = delete;

};

#endif //DOODLEJUMPER_RANDOM_H
