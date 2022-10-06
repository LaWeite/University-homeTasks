#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int R = 0;
	int r = 0;
	double x = 0;
	double y = 0;
	std::cout << "Введите больший радиус: " << std::endl;
	std::cin >> R;
	std::cout << "Введите меньший радиус: " << std::endl;
	std::cin >> r;
	std::cout << "Введите x: " << std::endl;
	std::cin >> x;
	std::cout << "Ввеите y: " << std::endl;
	std::cin >> y;
	if (r*r < x*x + y*y < R*R)
	{
		std::cout << "Входит" << std::endl;
	}
	else
	{
		std::cout << "Не входит" << std::endl;
	}

	return 0;
}