#include "gtest/gtest.h"
#include <iostream>
#include <memory>
#include "../Logic/Random.h"

class RandomSingletonComplete : public ::testing::Test{
protected:
    virtual void SetUp() {
    }

    virtual void TearDown() {
        rp.reset();
    }
    std::shared_ptr<Random> rp;
};

TEST_F(RandomSingletonComplete, MultipleCalls){
    EXPECT_EQ(Random::getRandom(10)->getSeed(), 10);
    // Because one Random class already initialised, seed should be from first init.
    EXPECT_EQ(Random::getRandom(100)->getSeed(), 10);
    rp = Random::getRandom(1000);
    EXPECT_EQ(rp->getSeed(), 10);
}