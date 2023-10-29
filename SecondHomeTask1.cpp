#include <iostream>

int main()
{
	size_t n = 0;
	double sum = 0;
	std::cin >> n;
	for (size_t i = 1; i <= n; i++)
	{
		sum += 1. / i;
	}

	std::cout << sum << std::endl;

	return 0;
}
