#include <iostream>
#include "bucketsort.h"

int main(void)
{
	float upperBound;
    std::cout << "Enter upper bound: ";
    std::cin >> upperBound;
    
	std::vector<float> inputNumbers;
    std::string inputString;
    std::cin >> inputString;
    while(inputString != "0")
    {
        const float number{std::stof(inputString)};
        if (number < upperBound)
            inputNumbers.emplace_back(number);
        std::cin >> inputString;
    }
	
	bucketSortResult sortingResult{ bucketSort(inputNumbers, upperBound) };
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