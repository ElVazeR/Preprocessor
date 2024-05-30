#include <iostream>
#include <string>
#include "foo.hpp"
#define PI 3.14

#define forever for (unsigned long long i=0;;i++)

#define begin {
#define end }


#define sum(a,b) (a + b)
#define var(name) std::cout << #name" = " << name <<std::endl


#define print_arr(arr, length)\
	std::cout << "{ ";\
	for (int i = 0;i < length; i++)\
			std::cout<< arr[i]<< ", ";\
		std::cout << "\b\b }\n"


#define TEST 0

#if TEST == 1
void foo() {
	std::cout << "Test №1\n";
}
#elif TEST == 2
void koo() {
	std::cout << "Тест №2.\n";
}
#elif TEST == 0
void poo() {
	std::cout << "Нет активных тестов.\n";
}
#else
#error "OSHIBKA"

#endif

#define FLAG 
#ifdef FLAG
void func() {
	std::cout << "Я есть Грут!\n";
}
#endif

#ifndef FLAG
#error Флаг не объявлен!
#endif








int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
#if TEST == 0
	poo();
#elif TEST == 2
	koo();
#endif
	
	
	
	
	// Директива препроцессора - это команда препроцессору, указывающая на то, 
	// где и как необходимо выполнить изменение исходного текста программы. Всегда начинается с '#'.

	
	// Константы и конструкции препроцессора
	
	std::cout << "PI = " << PI << std::endl;
	double radius = 3.;
	double area = PI* radius*radius;
	std::cout << "Area = " << area << std::endl;

	forever begin
		std::cout << '.';
		if (i > 600)
		    break;
		end
			std::cout << std::endl;

#undef PI

	//std::cout << "PI = " << PI << std::endl; // ОШИБКА

#define PI 3
	
	std::cout << "PI = " << PI << std::endl;

	

	// Макросы препроцессора
	n = 7, m = 15;
	std::cout << n << " + " << m <<" = " << sum(n, m) << std::endl;

	var(n);
	var(m);

	const int size = 3;
	int arr[size]{ 10, 25, 50 };
	print_arr(arr, size);

#if TEST == 1
	foo();
#endif
	



	return 0;
}