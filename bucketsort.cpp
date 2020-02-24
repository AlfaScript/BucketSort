#include "bucketsort.h"

#include <cmath>

bucketSortResult bucketSort(const std::vector<float> & numbers, const float upperBound)
{
    bucketSortResult sortedArray(upperBound, std::list<float>());
    const size_t numbersCount{ numbers.size() };

    for (size_t i = 0; i < numbersCount; ++i)
    {
        const float number { numbers[i] };
        const size_t index = std::floor(number);
        sortedArray[index].push_back(number);
    }

    return sortedArray;
}

size_t maxCollision(const bucketSortResult & sortedNumbers)
{
    size_t maxCollision { 0u };

    for(const auto & list : sortedNumbers)
    {
        const size_t listSize { list.size() };
        if(listSize > maxCollision)
            maxCollision = listSize;
    }

    return maxCollision;
}