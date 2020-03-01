#include <iostream>
#include "bucketsort.h"

int main(void)
{
	std::vector<float> inputNumbers;
    std::string inputString;
    std::cin >> inputString;
    while(inputString != "0")
    {
        const float number{std::stof(inputString)};
        inputNumbers.emplace_back(number);
        std::cin >> inputString;
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