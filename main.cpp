/*
* Лабораторная работа No 3
* Тема: Исследование функций С++ в IDE Qt Creator?
*
* Developer: Марков Евгений Сергеевич
* OS: Windows
* locale (кодировка): IBM 866
*/
#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include <string>
#include "lab_3.h"

int main() {
#define Unit 7

#if Unit == 1
std::cout << "Задание 1" << std::endl;
sposob_recheniya();
#elif Unit == 2
std::cout << "Задание 2" << std::endl;
var_vyzova();
#elif Unit == 3
std::cout << "Задание 3" << std::endl;
initial();
#elif Unit == 4
std::cout << "Задание 4" << std::endl;

printAnimal();
printNumberOfLegs();
#elif Unit == 5
std::cout << "Задание 5" << std::endl;
min_max();
#elif Unit == 6
std::cout << "Задание 6" << std::endl;
preobraz_tipov_dannykh();
#else
std::cout << "Задание 7" << std::endl;
lift();
#endif
return 0;
}




















