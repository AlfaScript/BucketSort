#include "gtest/gtest.h"
#include "bucketsort.h"

TEST(bucketSort, sorting)
{
    std::vector<float> numbers{0.1, 0.2, 1.2, 2.1, 1.4, 0.3};
    std::vector<std::list<float>> sortedNumbers{{0.1, 0.2, 0.3}, {1.2, 1.4}, {2.1}};
    EXPECT_EQ(sortedNumbers, bucketSort(numbers));
}

TEST(bucketSort, collisions)
{
    std::vector<float> numbers{0.1, 0.2, 1.2, 2.1, 1.4, 0.3};
    std::vector<std::list<float>> sortedNumbers{{0.1, 0.2, 0.3}, {1.2, 1.4}, {2.1}};
    EXPECT_EQ(sortedNumbers, bucketSort(numbers));
    constexpr size_t numberOfCollision { 3u };
    EXPECT_EQ(numberOfCollision, maxCollision(sortedNumbers));
}