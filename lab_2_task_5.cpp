#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include "lab_2.h"
using namespace std;

void print_boolalpha() {
  cout << "\nЗадание 5.1" << endl;
  //1) Предположите результат следующих выражений теоретически:
  cout.setf(ios::boolalpha);
  cout << "Использование флага" << endl;
  cout << "((false && true) || true) = " <<
  ((false && true) || true) << endl;          //true
  cout << "((false && true) || false || true) = " <<
  ((false && true) || false || true) << endl; //true
  cout << "((5 > 6 && 4 > 3) && (7 > 8)) = " <<
  ((5 > 6 && 4 > 3) && (7 > 8)) << endl;      //false
  cout << "(!(7 > 6 || 3 > 4)) = " <<
  (!(7 > 6 || 3 > 4)) << endl;                //false
  cout.unsetf(ios::boolalpha);
  cout << endl;
  cout << "Использование манипулятора" << endl;
  cout << boolalpha << "((false && true) || true) = " <<
  ((false && true) || true) << endl;
  cout << boolalpha << "((false && true) || false || true) = " <<
  ((false && true) || false || true) << endl;
  cout << boolalpha << "((5 > 6 && 4 > 3) && (7 > 8)) = " <<
  ((5 > 6 && 4 > 3) && (7 > 8)) << endl;
  cout << boolalpha << "(!(7 > 6 || 3 > 4)) = " <<
  (!(7 > 6 || 3 > 4)) << endl;
  }

void logich_perem() {
  cout << "\nЗадание 5.2" << endl;
  bool const a = true;
  bool const b = false;
  bool const c = true;
  bool const d = false;
  bool const e = true;
  bool const f = false;

  enum SomeSymbol {
  A = 1,
  B = 2,
  C = 3,
  D = 4,
  E = 5,
  F = 0
  };

  cout.setf(ios::boolalpha);
  cout << "((a&&b) || (!c) && (d||e))   " <<
  ((a&&b) || (!c) && (d||e)) << endl;
  cout << "((f&&a) || (b&&c) || (!d))   " <<
  ((f&&a) || (b&&c) || (!d)) << endl;
  cout << "((e||f) && (a||b) && (c||d)) " <<
  ((e||f) && (a||b) && (c||d)) << endl;
  cout << "((B>A) && (C<D) && (E!=F))   " <<
  ((B>A) && (C<D) && (E!=F)) << endl;
  cout.unsetf(ios::boolalpha);
  }

void de_Morgan(){
  cout << "\nЗадание 5.3" << endl;
  bool a = true;
  bool b = false;
  cout.setf(ios::boolalpha);
  cout << " Сравним Выражение 1: (!(a&&b)) " << (!(a&&b)) << endl;
  cout << "   и Выражение 2:((!a) || (!b)) " << ((!a) || (!b)) << endl;
  cout << "Ответы совпадают, этот закон де Моргана доказан" << endl;
  cout << "Сравним Выражение 3:(!(a||b)) " << (!(a||b)) << endl;
  cout << " и Выражение 4:((!a) && (!b)) " << ((!a) && (!b)) << endl;
  cout << "Ответы совпадают, этот закон де Моргана доказан" << endl;
  cout.unsetf(ios::boolalpha);
  }

void some_var(){
    cout << "\nЗадание 5.4" << endl;
    short x, y, z, v;
    x = 3 + 4 + 5; //12
    // х = суммa 3, 4 и 5
    cout << "x = " << x << "\n\n";
    x = y = z;
    /* x, y, z получат случайное значение
    * из буфера обмена
    * так как y и z в данном выражении
    * не инициализированы.
    * Если надо придать получившееся значение (х = 12)
    * переменным y и z, то выражение надо писать так:
    * z = y = х, чтобы переменная с нужным значением
    * была в выражении справа, проверял выводом в консоль.
    * Тогда в следующем выражении ++у будет = 13, а не то,
    * что получилось, z = 216 (z = 12 (значение, полученное от х
    * умножится на выражение (++у + 5)),
    * (у = 12 получено от х, у = 13 получается от префиксного инкремента,
    * 13 + 5 = 18, 12 * 18 = 216)  а не то, что получилось из-за
    * присвоения  неинициализированным y и z смлучайных значений */
    cout << "x = " << x << "\n" <<
    "y = " << y << "\n" <<
    "z = " << z << "\n" << "\v";
    z *= ++y + 5;
    /* первоначальное значение у
    * умножается на выражение
    * ((у+1) + 5) */
    cout << "x = " << x << "\n" <<
    "y = " << y << "\n" <<
    "z = " << z << "\v" << endl;
    cout << "Введите целое число от -32000 до 32000" << endl;
    cin >> v;
    auto logicValue = ((x||y) && (z||v));
    cout << "logicValue = " << boolalpha << logicValue << endl;
  }

void sdvig_chisla() {
  cout << "\nЗадание 5.5" << endl;
  cout << "Введите число в диапазоне от 0 до 16 включительно" << "\n";
  short a;
  cin >> a;
  cout << "Введите число, на которое нужно сдвинуть первоначальное\
  число влево" << "\n";
  short b;
  cin >> b;
  short c = a << b;
  cout << "Получилось число в 10-м формате " << c << "\n";
  bitset<8>bits (c);
  cout << "Получилось число в 2-м формате " << bits << "\n";
  cout << "Получилось число в 16-м формате " << hex << c << "\n";
  cout << "Получилось число в 8-м формате " << oct << c << "\n";
  }

void priorit_assotiat() {
  cout << "\nЗадание 5.6" << endl;
    {
    int a = 2, b = 4;
    int res = a + b * 1 - 128/5;
    cout << "res = " << res << endl;
    }
    /* 1) b*1
    * 2) 128/5
    * 3) a+(результат (b*1))
    * 4) (a+(результат (b*1)))-(результат (128/5))*/
    {
    int a = 2, b = 4;
    int res1 = a | b >> 1;
    cout << "res1 = " << res1 << endl;
    }
    /*  1) b >> 1
    * 2) a|b */
    {
    int a = 2, b = 4, k = 10;
    int res2 = a / b * k;
    cout << "res2 = " << res2 << endl;
    }
    /*   1) a/b
    * 2) (результат(a/b))*k */
  }

void task5(){
  print_boolalpha();
  logich_perem();
  de_Morgan();
  some_var();
  sdvig_chisla();
  priorit_assotiat();
}
