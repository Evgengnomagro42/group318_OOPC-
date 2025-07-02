#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include "lab_3.h"
using namespace std;
void preobraz_tipov_dannykh(){
    cout << "Введите целые числа \"x\" и \"k\", "
            "дробные числа \"y\" и \"z\" \n";
    int x /*= 9*/;
    unsigned short k /*= 2*/;
    float y /*= 3.6*/;
    double z /*= 1.8*/;

    cin >> x >> k >> y >> z;
    cout << "int x = " << x << endl;
    cout << "unsigned short k = " << k << endl;
    cout << "float y = " << y << endl;
    cout << "double z = " << z << endl;

    cout << "Неявное преобразование" << '\n';
    int i = (x+y)*z+k ;//24 В консоли,
    cout << "i = " << i << endl;//24,68 на калькуляторе.
    k = x-y/z ;//7 В консоли,
    cout << "k = " << k << endl;//7 на калькуляторе.
    z = x*y+z/x;//32.6 В консоли,
    cout << "z = " << z << endl;//32,6 на калькуляторе.
    unsigned int ui = x/y+k;//9 В консоли,
    cout << "ui = " << ui << endl;//4,5 на калькуляторе.
    /*short s = (x%(x/y)); При неявном преобразовании пришлось
    * закомментировать, так как Qt выдал ошибку:
    * main.cpp:49:13: error: invalid operands to binary expression
    * ('int' and 'float'). При  подстановке переменных с целочисленным
    * типом данных такой ошибки Qt не выводил. Без x% Qt принимает выражение
    * ((x/y)) для преобразования*/

    cout << "явное преобразование static_cast\n";
    int i1 {static_cast<int>((x+y)*z+k)};                  //417 в консоли,
    cout << "i1 = " << i1 << endl;                         //24,68 на калькуляторе.
    unsigned short k1 {static_cast<unsigned short>(x-y/z)};//8 в консоли,
    cout << "k1 = " << k1 << endl;                         //7 на калькуляторе.
    double z1 {static_cast<double>(x*y+z/x)};              //36,02222 в консоли,
    cout << "z1 = " << z1 << endl;                         //32,6 на калькуляторе.
    unsigned int ui1 {static_cast<unsigned int>(x/y+k)};   //9 в консоли,
    cout << "ui1 = " << ui1 << endl;                       //4,5 на калькуляторе.
    /*short s1 { static_cast<short>(x%(x/y)) };
    cout << "s1 = " << s1 << '\n'; При явном преобразовании
    * пришлось закомментировать, так как Qt выдал ошибку:
    * main.cpp:64:33: error: invalid operands to binary expression
    * ('int' and 'float'). При  подстановке переменных с целочисленным
    * типом данных такой ошибки Qt не выводил. Без x% Qt принимает выражение
    * ((x/y)) для преобразования */

    cout << "явное преобразование С-style cast\n";
    int i2 = (int)((x+y)*z+k) ;                  //398 В консоли,
    cout << "i2 = " << i2 << endl;             //24.68 на калькуляторе.
    unsigned short k2 = (unsigned short)(x-y/z) ;//8 В консоли,
    cout << "k2 = " << k2 << endl;             //7 на калькуляторе.
    double z2 = (double)(x*y+z/x);               //36.0222 В консоли,
    cout << "z2 = " << z2 << endl;             //32.6 на калькуляторе.
    unsigned int ui2 = (unsigned int)(x/y+k);    //9 В консоли,
    cout << "ui2 = " << ui2 << endl;           //4.5 на калькуляторе.
    /*short s2 = (short)((x%(x/y)));
    *cout << "s2 = " << s2 << '\n'; При явном преобразовании
    *пришлось закомментировать, так как Qt выдал ошибку:
    *main.cpp:81:22: error: invalid operands to binary expression
    *('int' and 'float'). При  подстановке переменных с целочисленным
    * типом данных такой ошибки Qt не выводил. Без x% Qt принимает выражение
    * ((x/y)) для преобразования */
  }
