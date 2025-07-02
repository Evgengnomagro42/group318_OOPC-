#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <stdio.h>
#include <bitset>
#include <sstream>
#include "lab_3.h"
using namespace std;

enum class Zadachis {
CARTY,
COSTI,
BYKVI
};

//вариант решения через блок if-else
void func_veroyatn(double vsego_var, double etot_var, Zadachis c)  {
  if (c == Zadachis::CARTY){
    double vsego_var = 52;
    double etot_var = 4;
    cout << "Вероятность, что выпадет туз, = " << setprecision(2) << etot_var/vsego_var << '\n';
    } else if (c == Zadachis::COSTI){
      double vsego_var = 36;
      double etot_var = 6;
      cout << "Вероятность, что выпадет 7 на 2-х костях, = " << setprecision(2) << etot_var/vsego_var << '\n';
    } else if (c == Zadachis::BYKVI){
    double vsego_var = 6;
    double etot_var = 1;
    cout << "Вероятность, что ребёнок сложит слово \"мама\", = " << setprecision(2) << etot_var/vsego_var << '\n';
    }
  }

//вариант решения через switch
void printZadachis(Zadachis some) {
 switch (some) {

 case Zadachis::CARTY : {
double vsego_var = 52;
double etot_var = 4;
cout << "Вероятность, что выпадет туз, = " << setprecision(2) << etot_var/vsego_var << '\n';
break;
}
case Zadachis::COSTI: {
double vsego_var = 36;
double etot_var = 6;
cout << "Вероятность, что выпадет 7 на 2-х костях, = " << setprecision(2) << etot_var/vsego_var << '\n';
break;
}
case Zadachis::BYKVI: {
double vsego_var = 6;
double etot_var = 1;
cout << "Вероятность, что ребёнок сложит слово \"мама\", = " << setprecision(2) << etot_var/vsego_var << '\n';
break;
}
default:
std::cout << "Unknown"; // Если ничего не совпало
break;
    }
  }

void sposob_recheniya(){
  cout << "задачи через if-else" << "\n";
  func_veroyatn(52, 4, Zadachis::CARTY);
  func_veroyatn(36,6, Zadachis::COSTI);
  func_veroyatn(6, 1, Zadachis::BYKVI);

  cout << "\nзадачи через switch" << "\n";
  printZadachis(Zadachis::CARTY);
  printZadachis(Zadachis::COSTI);
  printZadachis(Zadachis::BYKVI);
  }

