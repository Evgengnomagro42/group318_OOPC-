#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include "lab_3.h"
using namespace std;
/*С какими аргументами (количеством) можно вызывать данную функцию
 *  void printChar (char a=?a?, char b=?b?, char c=?c?, char d=?d?),
 * тк определены все параметры по умолчанию, приведите все варианты
 * вызова функции printChar()*/

void printChar (char a='a', char b='b', char c='c', char d='d'){
 std::cout << "a: " << a << '\n';
 std::cout << "b: " << b << '\n';
 std::cout << "c: " << c << '\n';
 std::cout << "d: " << d << '\n';
}
void var_vyzova() {
 printChar('a', 'b', 'c', 'd');
 cout << '\n';
 printChar('a', 'b', 'c');
 cout << '\n';
 printChar('a', 'b');
 cout << '\n';
 printChar('a');
}
