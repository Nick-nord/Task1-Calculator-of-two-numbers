// Задача 1. Калькулятор двух чисел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator
{
public:
	double num1;
	double num2;
	double add(double num1, double num2) // - метод должен возвращать результат сложения num1 и num2
	{
		return num1 + num2;
	};
	double multiply(double num1, double num2) // - метод должен возвращать результат перемножения num1 и num2
	{
		return num1 * num2;
	}; 
	double subtract_1_2(double num1, double num2) // - метод должен возвращать результат вычитания num2 из num1
	{
		return num1 - num2;
	};
	double subtract_2_1(double num1, double num2) // - метод должен возвращать результат вычитания num1 из num2
	{
		return num2 - num1;
	};
	double divide_1_2(double num1, double num2)// - метод должен возвращать результат деления num1 на num2
	{
		return num1 / num2;
	};
	double divide_2_1(double num1, double num2)// - метод должен возвращать результат деления num2 на num1
	{
		return num2 / num1;
	};
    bool set_num1(double num1)// - метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
    {
		if (!num1)
		{
			std::cout << "You can't divide by zero.";
			return 1;
		}
    }; 
	bool set_num2(double num2)// - метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
	{
		if (!num1)
		{
			std::cout << "You can't divide by zero.";
			return 1;
		}
	};

};
int main(int argc, char** argv)
{
	Calculator test;
	std::cout << "Enter num1 :" << std::endl;
	std::cin >> test.num1;
	std::cout << "Enter num2 :" << std::endl;
	std::cin >> test.num2;
	test.set_num1(test.num2);

	std::cout<< "num1 + num2 = " << test.add(test.num1, test.num2) << std::endl;
	std::cout << "num1 * num2 = " << test.multiply(test.num1, test.num2) << std::endl;
	std::cout << "num1 - num2 = " << test.subtract_1_2(test.num1, test.num2) << std::endl;
	std::cout << "num2 - num1 = " << test.subtract_2_1(test.num1, test.num2) << std::endl;
	std::cout << "num1 / num2 = " << test.divide_1_2(test.num1, test.num2) << std::endl;
	std::cout << "num2 / num1 = " << test.divide_2_1(test.num1, test.num2) << std::endl;

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
