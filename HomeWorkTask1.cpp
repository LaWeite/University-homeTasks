#include <iostream>
#include <cmath>

int ansFind(double A_left, double A_right, double A_ans, double B_left, double B_right)
{
	double B_ans = (B_right - B_left) * ((A_ans - A_left) / (A_right - A_left)) + B_left;
	return B_ans;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	double A_left = 0;
	double A_right = 0;
	double A_ans = 0;
	double B_left = 0;
	double B_right = 0;
	std::cout << "¬ведите левую границу A: " << std::endl;
	std::cin >> A_left;
	std::cout << "¬ведите правую границу A: " << std::endl;
	std::cin >> A_right;
	std::cout << "¬ведите точку в A: " << std::endl;
	std::cin >> A_ans;
	std::cout << "¬ведите левую границу B: " << std::endl;
	std::cin >> B_left;
	std::cout << "¬ведите правую границу B: " << std::endl;
	std::cin >> B_right;
	std::cout << "ќтвет: " << "\n" << ansFind(A_left, A_right, A_ans, B_left, B_right) << std::endl;

	return 0;
}