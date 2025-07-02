#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include "lab_3.h"
using namespace std;

int func_min1(int a, int b){
cout << "Введите целые числa : \n";
cin >> a >> b;
return ((a < b) ? a : b);
 }

int func_max1(int a, int b){
cout << "Введите целые числa : \n";
cin >> a >> b;
return ((a < b) ? b : a);
}

unsigned short func_min1(unsigned short a, unsigned short b) {
cout << "Введите целые числa : \n";
cin >> a >> b;
return ((a < b) ? a : b);
}

unsigned short func_max1(unsigned short a, unsigned short b) {
cout << "Введите целые числa : \n";
cin >> a >> b;
return ((a < b) ? b : a);
}

int func_min2(int a, int b){
  const int c = numeric_limits<int>::min();
  tryAgain: // это statement label
  cout << "Введите целые числa : \n";
  cin >> a >> b;
  if (a < c || b < c){
    cout << "Выход за  пределы диапазона, введите число снова\n";
    goto tryAgain;
  } else {
    return ((a < b) ? a : b);
    }
  }

int func_max2(int a, int b){
    const int c = numeric_limits<int>::max();
    tryAgain: // это statement label
    cout << "Введите целые числa : \n";
    cin >> a >> b;
    if (a > c || b > c){
    cout << "Выход за  пределы диапазона, введите число снова\n";
    goto tryAgain;
    } else {
    return ((a < b) ? b : a);
    }
  }

unsigned short func_min2(unsigned short a, unsigned short b){
    const unsigned short c = numeric_limits<unsigned short>::min();
    tryAgain: // это statement label
    cout << "Введите целые числa : \n";
    cin >> a >> b;
    if (a < c || b < c){
    cout << "Выход за  пределы диапазона, введите число снова\n";
    goto tryAgain;
    } else {
    return ((a < b) ? a : b);
    }
}

unsigned short func_max2(unsigned short a, unsigned short b){
    const unsigned short c = numeric_limits<unsigned short>::max();
    tryAgain: // это statement label
    cout << "Введите целые числa : \n";
    cin >> a >> b;
    if (a > c || b > c){
    cout << "Выход за  пределы диапазона, введите число снова\n";
    goto tryAgain;
    } else {
    return ((a < b) ? b : a);
    }
  }

void min_max() {
 int i1(1), i2(2);
 cout << func_min1 (i1, i2) << '\n';
 int i3(1), i4(2);
 cout << func_max1(i3, i4) << '\n';
 unsigned short d1(1), d2(2);
 cout << func_min1(d1, d2) << '\n';
 unsigned short d3(1), d4(2);
 cout << func_max1(d3, d4) << '\n';
 int i11(1), i22(2);
 cout << func_min2(i11, i22) << '\n';
 int i33(1), i44(2);
 cout << func_max2(i33, i44) << '\n';
 unsigned short d11(1), d22(2);
 cout << func_min2(d11, d22) << '\n';
 unsigned short d33(1), d44(2);
 cout << func_max2(d33, d44) << '\n';
 }
