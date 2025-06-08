#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include "lab_2.h"
using namespace std;

float BrokaForMan(float rost) {
    float ideal_ves = (((rost*100)-100)*0.9);
    cout << "Оптимальный вес - формула Брока, кг: " <<
    ideal_ves << endl;
    return 0;
  }

float BrokaForWoman(float rost) {
    float ideal_ves = (((rost*100)-100)*0.85);
    cout << "Оптимальный вес - формула Брока, кг: " <<
    ideal_ves << endl;
    return 0;
  }

float IMT(float ves, float rost) {
float index = ves/pow(rost, 2);
if (index <16.0) {
  cout << "Выраженный дефицит массы, \n"
  "Ваш нынешний ИМТ: " << index << endl;
} else if (index>16.0 && index<18.5) {
cout << "Недостаточная (дефицит) масса тела, \n"
"Ваш нынешний ИМТ: " << index << endl;
} else if (index>18.5 && index<25.0) {
cout << "Норма. Ваш нынешний ИМТ: " << index << endl;
} else if (index>25 && index<30) {
cout << "Избыточная масса тела (предожирение) \n"
"Ваш нынешний ИМТ: " << index << endl;
} else if (index>30 && index<35) {
cout << "Ожирение первой степени \n"
"Ваш нынешний ИМТ: " << index << endl;
} else if (index>35 && index<40) {
cout << "Ожирение второй степени \n"
"Ваш нынешний ИМТ: " << index << endl;
} else if (index>40) {
cout << "Ожирение третьей степени (морбидное) \n"
"Ваш нынешний ИМТ: " << index << endl;
  }
return 0;
}

float IMTAgeMan (float age, float index){
if (age >19 && age<=25) {
  cout << "Норма ИМТ = 21,4 \n"
  "Ваш нынешний ИМТ: " << index << endl;
} else if (age >25 && age<=35) {
cout << "Норма ИМТ = 21,6 \n"
"Ваш нынешний ИМТ: " << index << endl;
} else if (age >35 && age<=45) {
cout << "Норма ИМТ = 22,9 \n"
"Ваш нынешний ИМТ: " << index << endl;
} else if (age >45 && age<=55) {
cout << "Норма ИМТ = 25,8 \n"
"Ваш нынешний ИМТ: " << index << endl;
} else if (age >55) {
cout << "Норма ИМТ = 26,6 \n"
"Ваш нынешний ИМТ: " << index << endl;
 }
return 0;
}

float IMTAgeWoman (float age, float index){
if (age >19 && age<=25) {
cout << "Норма ИМТ = 19,5 \n"
"Ваш нынешний ИМТ: " << index << endl;
} else if (age >25 && age<=35) {
cout << "Норма ИМТ = 23,2 \n"
"Ваш нынешний ИМТ: " << index << endl;
} else if (age >35 && age<=45) {
cout << "Норма ИМТ = 23,4 \n"
"Ваш нынешний ИМТ: " << index << endl;
} else if (age >45 && age<=55) {
cout << "Норма ИМТ = 25,2 \n"
"Ваш нынешний ИМТ: " << index << endl;
} else if (age >55) {
cout << "Норма ИМТ = 27,3 \n"
"Ваш нынешний ИМТ: " << index << endl;
    }
  return 0;
  }

  void calc_vesa() {
  cout << "Калькулятор веса \n";
  cout << "Введите возраст, полных лет, целое число: \n";
  float age;
  cin >> age;
  cout << "Введите вес, кг: \n";
  float ves;
  cin >> ves;
  cout << "Введите рост в метрах (м,см): \n";
  float rost ;
  cin >> rost;
  cout << "Если мужчина, введите 1, женщина - 0 \n";
  float pol;
  cin >> pol;
  cout << "Выберите метод и введите его код:\n\
  формула Брока - введите 2, \n\
  индекс массы тела (ИМТ) для М и Ж - введите 3, \n\
  ИМТ для М и Ж с учётом возраста - введите 4, \n\
  если хотите увидеть результаты всех методов - введите 5\n";
  float kod;
  cin >> kod;
  if (kod==2){
    if (pol==1){
    BrokaForMan(rost);
    } else if (pol==0) {
    BrokaForWoman(rost);
    /*float ideal_ves = (((rost*100)-100)*0.85);
    cout << "Оптимальный вес - формула Брока, кг: " <<
    ideal_ves << endl;*/
    }
  } else if (kod==3) {
    if ((pol==1) || (pol==0)){
      IMT(ves,rost);
      }
    } else if (kod==4) {
    if (pol==1) {
      IMTAgeMan (age, ves/pow(rost, 2));
  }
  if (pol==0){
    IMTAgeWoman (age, ves/pow(rost, 2));
    }
  } else if (kod==5){
      IMT(ves, rost);
    if (pol==1){
      BrokaForMan(rost);
    IMTAgeMan (age, ves/pow(rost, 2));
    } else if (pol==0){
      BrokaForWoman(rost);
    IMTAgeWoman (age, ves/pow(rost, 2));
      }
    }
  if (cin.fail()) { // если предыдущее извлечение оказалось неудачным,
    cin.clear(); // то возвращаем cin в 'обычный' режим работы
    cin.ignore(32767,'\n'); // и удаляем значения предыдущего ввода из входного буфера
    }
  }
