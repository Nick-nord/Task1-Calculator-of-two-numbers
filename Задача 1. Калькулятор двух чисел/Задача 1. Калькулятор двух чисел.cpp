// Задача 1. Калькулятор двух чисел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator
{
public:
	double num1;
	double num2;
	void classSum()
	{
		std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
	};
	void classDifferenceSum() 
	{ 
		std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
		std::cout << "num2 - num1 = " << num2 - num1 << std::endl;
	};
	void classMultiplication() 
	{ 
		std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
	};
	void classDivision() 
	{
		std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
		std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
	};

};
int main(int argc, char** argv)
{
	Calculator test;
	std::cout << "Enter num1 :" << std::endl;
	std::cin >> test.num1;
	std::cout << "Enter num2 :" << std::endl;
	std::cin >> test.num2;
	test.classSum();
	test.classDifferenceSum();
	test.classMultiplication();
	test.classDivision();

	return EXIT_SUCCESS;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
