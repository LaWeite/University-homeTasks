#include <iostream>

int main()
{
	int n = 0;
	double x = 0;
	double sum = 0;

	std::cin >> n >> x;
	for (size_t i = 0; i < n; i++)
	{
		x = sin(x);
		sum += x;
	}

	std::cout << sum << std::endl;

	return 0;
}
