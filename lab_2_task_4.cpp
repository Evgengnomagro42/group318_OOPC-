#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include "lab_2.h"
using namespace std;
void v_exponent(){
    double d1(34.50);   // 3 значащих числа
    double d2(0.004000);// 2 значащих числа
    double d3(123.005); /* 6 значащих чисел,
    * если нужна точность до тысячных.
    * 3 Значащих числа, если в мантиссе
    * достаточно только целых чисел*/
    double d4(146000);  // 3 значащих числа
    cout << "d1(34.50):" << scientific << setprecision(2) << d1 << endl;
    cout << "d2(0.004000):" << scientific << setprecision(1) << d2 << endl;
    cout << "d3(123.005):" << scientific << setprecision(5) << d3 << endl;
    cout << "d4(146000):" << scientific << setprecision(2) << d4 << endl;
    cout << endl;
    /* Вывод другим способом, через флаг. Ускоряет
    * написание кода, но отбрасывает в мантиссе десятые, сотые и тд.
    * Допустимо, если не критично для точности расчётов. */
    cout.setf(ios::scientific);
    cout << "d1(34.50):" << d1 << endl;
    cout << "d2(0.004000):" << d2 << endl;
    cout << "d3(123.005):" << d3 << endl;
    cout << "d4(146000):" << d4 << endl;
}
