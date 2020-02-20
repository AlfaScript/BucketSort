#include <iostream>
#include <vector>
#include <random>

int main(void)
{
	constexpr size_t count{ 1000u }, max{ 10u };
	
	std::vector<int> randomNum;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distribution(0, max);
	for (size_t i = 0; i < count; ++i)
	{
		const int randomNumber = distribution(gen);
		randomNum.push_back(randomNumber);
	}
	
	std::vector<int> countNum(max, 0);
	for (size_t i = 0; i < count; ++i)
		++countNum[randomNum[i]];

	for (size_t i = 0; i < max; ++i)
		for (size_t j = 0; j < countNum[i]; ++j)
		{
			std::cout << i << ' ';
		}

	return 0;
}