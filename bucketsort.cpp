#include "bucketsort.h"

#include <cmath>
#include <algorithm>

std::vector<std::list<float>> bucketSort(const std::vector<float> & numbers)
{
    const float upperBound { std::ceil(*std::max_element(numbers.cbegin(), numbers.cend())) + 1 } ;
    std::vector<std::list<float>> sortedArray(upperBound, std::list<float>());

    for(const auto & number : numbers)
    {
        const size_t index = std::floor(number);
        sortedArray[index].emplace_back(number);
    }

    for(auto & list : sortedArray)
    {
        list.sort();
    }

    return sortedArray;
}

size_t maxCollision(const std::vector<std::list<float>> & sortedNumbers)
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