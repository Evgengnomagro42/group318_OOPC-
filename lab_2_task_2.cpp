#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include "lab_2.h"
using namespace std;

// вывод размеров основных типов данных
void print_size(){
    cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
    cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
    cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes" << endl;
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    // вывод по разным модификациям длины и размера
    cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
    cout << "signed int:\t" << sizeof(signed int) << " bytes" << endl;
    cout << "unsigned int:\t" << sizeof(unsigned int) << " bytes" << endl;
    cout << "signed long:\t" << sizeof(signed long) << " bytes" << endl;
    cout << "unsigned long:\t" << sizeof(unsigned long) << " bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes" << endl;
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    cout << "long double:\t" << sizeof(long double) << " bytes" << endl;
}

void print_diapazon(){
  //вывод наименьшего и наибольшего чисел диапазона
  cout << "Наименьшее число char : \n" <<
  static_cast<int>(numeric_limits<char>::min()) << '\n';
  cout << "Наибольшее число char : \n" <<
  static_cast<int>(numeric_limits<char>::max()) << '\n';
  cout << "Наименьшее число short : \n" <<
  numeric_limits <short>::min()<< '\n';
  cout << "Наибольшее число short : \n" <<
  numeric_limits <short>::max() << '\n';
  cout << "Наименьшее число signed int : \n" <<
  numeric_limits<signed>::min() << '\n';
  cout << "Наибольшее число signed int : \n" <<
  numeric_limits<signed>::max() << '\n';
  cout << "Наименьшее число unsigned int : \n" <<
  numeric_limits<unsigned>::min() << '\n';
  cout << "Наибольшее число unsigned int : \n" <<
  numeric_limits<unsigned>::max() << '\n';
  cout << "Наименьшее число long long int : \n" <<
  numeric_limits<long long>::min() << '\n';
  cout << "Наибольшее число long long int : \n" <<
  numeric_limits<long long>::max() << '\n';
  cout<<"Наименьшее число float \n: "<<
  numeric_limits<float>::lowest()<<'\n';
  cout <<"Наибольшее число float \n: "<<
  numeric_limits<float>::max()<<'\n';
  cout<<"Наименьшее число double \n: "<<
  numeric_limits<double>::lowest()<<'\n';
  cout<<"Наибольшее число double \n: "<<
  numeric_limits<double>::max()<<'\n';
  }
//Организуйте вывод числового диапазона типов данных в hex, dec, bin (хотя бы пять типов):

void print_diapazon_bin(){
  bitset<8> bits_1(static_cast<int>(numeric_limits<char>::min()));
  cout << "Минимальное число char: \n" << bits_1 << '\n';
  bitset<8> bits_2(static_cast<int>(numeric_limits<char>::max()));
  cout << "Максимальное число char: \n" << bits_2 << "\n\n";
  bitset<16> morebits_16_3(numeric_limits <short>::min());
  cout << "Минимальное число short: \n" << morebits_16_3 << '\n';
  bitset<16> morebits_16_4(numeric_limits <short>::max());
  cout << "Максимальное число short: \n" << morebits_16_4 << "\n\n";
  bitset<32> morebits_32_5(numeric_limits<signed>::min());
  cout << "Минимальное число signed: \n" << morebits_32_5 << '\n';
  bitset<32> morebits_32_6(numeric_limits<signed>::max());
  cout << "Максимальное число signed: \n" << morebits_32_6 << "\n\n";
  bitset<32> morebits_32_7(numeric_limits<unsigned>::min());
  cout << "Минимальное число unsigned: \n" << morebits_32_7 << '\n';
  bitset<32> morebits_32_8(numeric_limits<unsigned>::max());
  cout << "Максимальное число unsigned: \n" << morebits_32_8 << "\n\n";
  bitset<64> morebits_64_9(numeric_limits<long long>::min());
  cout << "Минимальное число long long: \n" << morebits_64_9 << '\n';
  bitset<64> morebits_64_10(numeric_limits<long long>::max());
  cout << "Максимальное число long long: \n" << morebits_64_10 << '\n';
  }

void vyvod_printf(){
char c[]= "Вывод пределов диапазона в printf";
printf ("%s\n", c);
char h[]= "Числовой диапазон в 8-м формате";
printf ("%s\n", h);
char k1[] = "Числовой диапазон short: от";
short t1 = numeric_limits<short>::min();
char k2[] = " до ";
short t2 = numeric_limits<short>::max();
printf ("%s\n%od%s%od\n\n",k1,t1,k2,t2);
char u[] = "Числовой диапазон в 16-м формате";
printf ("%s\n", u);
char s1[] = "Числовой диапазон short: от ";
short d1 = numeric_limits<short>::min();
char s2[] = " до ";
short d2 = numeric_limits<short>::max();
printf ("%s\nxd%s%xd\n",s1,d1,s2,d2);
char s3[] = "Числовой диапазон float: от ";
float d3 = numeric_limits<float>::min();
char s4[] = " до ";
float d4 = numeric_limits<float>::max();
printf ("%s\n%fd%s%%fd\n",s3,d3,s4,d4);
}

void task2(){
  cout << "Вывод размеров типов"  << '\n';
  print_size();
  cout << "Числовой диапазон в 10-м формате "  << '\n';
  print_diapazon();
  cout.unsetf(ios::dec);//8-naya
  cout.setf(ios::oct);
  cout << "Числовой диапазон в 8-м формате "  << '\n';
  print_diapazon();
  cout.unsetf(ios::oct);// 16-naya
  cout.setf(ios::hex);
  cout << "Числовой диапазон в 16-м формате "  << '\n';
  print_diapazon();
  cout << "Числовой диапазон в 2-м формате" << "\n";
  cout.unsetf(ios::hex);
  print_diapazon_bin();
  cout << "Числовой диапазон в printf" << "\n";
  vyvod_printf();
  }
