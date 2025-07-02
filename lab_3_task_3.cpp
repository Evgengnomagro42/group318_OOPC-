#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <stdio.h>
#include <bitset>
#include <sstream>
#include "lab_3.h"
using namespace std;

int func1() {
  cout << "\nкопирующая инициализация типа int = ";
  int iValue = 20;
  cout << iValue << '\n';
  return iValue;
  }
int func2() {
  cout << "\nпрямая инициализация типа int = ";
  int iValue(60);
  cout << iValue << '\n';
  return iValue;
  }
int func3() {
  cout << "\nuniform инициализация типа int = ";
  int iValue{100};
  cout << iValue << '\n';
  return iValue;
  }

bool func4() {
  cout << "\nкопирующая инициализация типа bool = ";
  bool cValue = true;
  cout << boolalpha << cValue << '\n';
  return cValue;
  }
bool func5() {
  cout << "\nпрямая инициализация типа bool = ";
  bool cValue(true);
  cout << boolalpha << cValue << '\n';
  return cValue;
  }
bool func6() {
  cout << "\nuniform инициализация типа bool = ";
  bool cValue{true};
  cout << boolalpha << cValue << '\n';
  return cValue;
  }

char func7() {
  cout << "\nкопирующая инициализация типа char = ";
  char cValue = 'c';
  cout << cValue << '\n';
  return cValue;
  }
  char func8() {
  cout << "\nпрямая инициализация типа char = ";
  char cValue('p');
  cout << cValue << '\n';
  return cValue;
  }
  char func9() {
  cout << "\nuniform инициализация типа char = ";
  char cValue{'p'};
  cout << cValue << '\n';
  return cValue;
  }

long func10() {
  cout << "\nкопирующая инициализация типа long = ";
  long lValue = 10;
  cout << lValue << '\n';
  return lValue;
  }
long func11() {
  cout << "\nпрямая инициализация типа long = ";
  long lValue(30);
  cout << lValue << '\n';
  return lValue;
  }
long func12() {
  cout << "\nuniform инициализация типа long = ";
  long lValue{50};
  cout << lValue << '\n';
  return lValue;
  }
  auto func(int iValue) -> int;
  auto func(int iValue) -> int {
  return iValue*10;
  }

void initial() {
  cout << "виды инициализации разных типов данных" << '\n';
  func1() << '\n';
  func2() << '\n';
  func3() << '\n';
  func4() << '\n';
  func5() << '\n';
  func6() << '\n';
  func7() << '\n';
  func8() << '\n';
  func9() << '\n';
  func10() << '\n';
  func11() << '\n';
  func12() << '\n';
  auto result = func(20);
  std::cout << "\nresult = " << result << '\n';
  }
