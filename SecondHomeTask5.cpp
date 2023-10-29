#include <iostream>

int main()
{
	double x1 = 0;
	double x2 = 0;
	double eps = 0;
	int dx = 0;
	double sgn = -1;
	double f = 0;
	int temp2 = 3;

	std::cin >> x1 >> x2 >> dx >> eps;

	for (x1; x1 < x2; x1 += dx)
	{
		double xInDegree = x1 * x1 * x1;
		double factorial = 6;
		f = x1;

		double temp1 = xInDegree / factorial;
		while (temp1 > eps)
		{
			temp1 = xInDegree / factorial;
			f += sgn * (xInDegree / factorial);
			sgn *= -1;
			xInDegree = xInDegree * x1 * x1;
			temp2 += 2;
			factorial = factorial * (temp2 - 1) * temp2;
		}

		std::cout << x1 << ' ' << f << ' ' << sin(x1) << std::endl;
	}

	return 0;
}
