#include <iostream>
#include <limits>
#include "bucketsort.h"

int main(void)
{
	std::vector<float> inputNumbers;
	constexpr float epsilon { std::numeric_limits<float>::epsilon() };
	float value;
    std::cin >> value;
    while(value > epsilon)
    {
        inputNumbers.emplace_back(value);
        std::cin >> value;
    }

    std::vector<std::list<float>> sortingResult{ bucketSort(inputNumbers) };
    std::cout << "Sorted numbers by bucket sort: " << std::endl;
	for (const auto & list : sortingResult)
	{
		for (const auto & element : list)
		{
			std::cout << element << ' ';
		}
	}

	std::cout << "\n Maximum number of collisions - " << maxCollision(sortingResult) << std::endl;

	return 0;
}