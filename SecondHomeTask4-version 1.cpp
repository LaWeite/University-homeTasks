#include <iostream>

int main()
{
	double accurate = 0;
	double pi = 4;
	double preAns = 1;
	int temp1 = 3;
	int sgn = -1;
	int n = 0;

	std::cin >> accurate;

	double temp2 = 1. / temp1;
	while (temp2 > accurate)
	{
		preAns += sgn * (temp2);
		temp1 += 2;
		sgn *= -1;
		++n;
		temp2 = 1. / temp1;
	}

	std::cout << n << ' ' << pi * preAns << std::endl;

	return 0;
}
