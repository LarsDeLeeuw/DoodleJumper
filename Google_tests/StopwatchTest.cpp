#include "gtest/gtest.h"
#include <memory>
#include "../Logic/Stopwatch.h"

class StopwatchSingletonComplete : public ::testing::Test{
protected:
    virtual void SetUp() {
    }

    virtual void TearDown() {
        rp.reset();
    }
    std::shared_ptr<Stopwatch> rp;
};

TEST_F(StopwatchSingletonComplete, MultipleCalls) {
    EXPECT_EQ(Stopwatch::getStopwatch(10)->getTicks(), 10);
    // Because one Random class already initialised, seed should be from first init.
    EXPECT_EQ(Stopwatch::getStopwatch(100)->getTicks(), 10);
    rp = Stopwatch::getStopwatch(1000);
    EXPECT_EQ(rp->getTicks(), 10);
}