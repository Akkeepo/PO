#include<iostream>
#include "Calculator.h"

int main() {
	Calculator calc;
	double res, liczba1, liczba2, liczba3, x1, x2;

	std::cout << "podaj liczby:" << std::endl;
	std::cin >> liczba1;
	std::cout << std::endl;
	std::cin >> liczba2;
	std::cout << std::endl;

	calc.add(liczba1, liczba2);
	res = calc.get_result();
	std::cout << "Suma: " << res << std::endl;

	calc.subtract(liczba1, liczba2);
	res = calc.get_result();
	std::cout << "Roznica: " << res << std::endl;

	if (calc.divide(liczba1, liczba2) == Calculator::Status::Success) 
	{
		res = calc.get_result();
		std::cout << "Iloraz: " << res << std::endl;
	}

	if (calc.divide(liczba1, liczba2) == Calculator::Status::DivisionByZero) 
	{
		std::cout << "Brak iloczynu" << std::endl;
	}

	calc.multiply(liczba1, liczba2);
	res = calc.get_result();
	std::cout << "Iloczyn: " << res << std::endl;


	std::cout << "podaj liczby:" << std::endl;
	std::cin >> liczba1;
	std::cout << std::endl;
	std::cin >> liczba2;
	std::cout << std::endl;
	std::cin >> liczba3;
	std::cout << std::endl;

	if (calc.square_function_roots(liczba1, liczba2, liczba3,x1,x2) == Calculator::Status::NoRoots) {
		std::cout << "brak pierwiastkow w funkcji";
	}
	if (calc.square_function_roots(liczba1, liczba2, liczba3,x1,x2) == Calculator::Status::OneRoot) {
	std::cout << "x1= " << x1;
	}
	if (calc.square_function_roots(liczba1, liczba2, liczba3, x1, x2) == Calculator::Status::TwoRoots) {
		std::cout << "x1= " << x1 << std::endl;
		std::cout << "x2= " << x2 << std::endl;
	}
	
	getchar();
	return 0;
}