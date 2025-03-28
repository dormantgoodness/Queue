 // Why the angle brackets? Grader reasons.
 // Don't change this or you will be sad :(
#include <prqueue.h>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

using namespace std;
using namespace testing;

TEST(EmptyTest, Test) {
    prqueue<int> pq;
}
