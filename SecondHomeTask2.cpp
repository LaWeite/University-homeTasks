#include <iostream>

int main()
{
	size_t n = 0;
	double sum = 1;
	int step = 1;
	std::cin >> n;
	for (size_t i = 0; i <= n; i++)
	{
		step *= 2;
		sum += 1. / step;
	}

	std::cout << sum << std::endl;

	return 0;
}
