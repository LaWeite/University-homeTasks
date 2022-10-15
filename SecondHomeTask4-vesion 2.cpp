#include <iostream>
#include <random>
#include <ctime>

int main()
{
	double accurate = 0;
	double pi = 4;
	int n = 0;
	double allPointers = 0;
	double pointersInBox = 0;
	double preAns = 0;

	std::cin >> accurate;

	const double PI = 3.141592653589793;
	double temp = (4 * (pointersInBox / allPointers)) - PI;
	do {

		srand(time(NULL));

		double x = -100 + static_cast<float>(rand()) * static_cast<float>(100 - (-100)) / RAND_MAX;
		double y = -100 + static_cast<float>(rand()) * static_cast<float>(100 - (-100)) / RAND_MAX;

		if (x * x + y * y < 10000)
		{
			++pointersInBox;
		}

		++allPointers;
		temp = (4 * (pointersInBox / allPointers)) - PI;
		preAns = pointersInBox / allPointers;
		++n;
	} while (temp > accurate);

	std::cout << n << ' ' << pi * preAns << std::endl;

	return 0;
}
