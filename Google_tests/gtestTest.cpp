#include "gtest/gtest.h"
#include <iostream>

class ExampleTestFixture : public ::testing::Test{
protected:
    friend class VaccinationSimulation;

    virtual void SetUp() {
        num = new double(2);
    }

    virtual void TearDown() {
        delete num;
    }
    double* num;
};

TEST_F(ExampleTestFixture, example){
    EXPECT_EQ(*num,2);
}