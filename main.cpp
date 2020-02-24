#include <iostream>
#include "bucketsort.h"

int main(void)
{
	float upperBound;
    std::cout << "Enter upper bound: ";
    std::cin >> upperBound;
    
	std::vector<float> randomNum;
    std::string inputString;
    std::cin >> inputString;
    while(inputString != "0")
    {
        const float number { std::stof(inputString) };
        if(number < upperBound)
            randomNum.push_back(number);
        std::cin >> inputString;
    }
	
	bucketSortResult sortingResult{ bucketSort(randomNum, upperBound) };
	for (const auto & list : sortingResult)
	{
		for (const auto & element : list)
		{
			std::cout << element << ' ';
		}
		std::cout << std::endl;
	}

	return 0;
}