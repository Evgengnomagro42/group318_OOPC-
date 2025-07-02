#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include "lab_3.h"
using namespace std;

enum Animals {
PIG,
CHICKEN,
GOAT,
CAT,
DOG,
};
void printAnimal(Animals animal) {
switch (animal) {
case PIG:
std::cout << "Pig" << '\n';
break;
case CHICKEN:
std::cout << "Chicken" << '\n';
break;
case GOAT:
std::cout << "Goat" << '\n';
break;
case CAT:
std::cout << "Cat" << '\n';
break;
case DOG:
std::cout << "Dog" << '\n';
break;
default:
std::cout << "Unknown" << '\n';
break;
  }
//return 0;// с return animal тоже не компилируется
}
enum Legs {
PIG_LEGS,
CHICKEN_LEGS,
GOAT_LEGS,
CAT_LEGS,
DOG_LEGS,
};
void printNumberOfLegs(Legs number) {
switch (number) {
case PIG_LEGS:
std::cout << "Pig has 4 legs" << '\n';
break;
case CHICKEN_LEGS:
std::cout << "Chicken has 2 legs" << '\n';
break;
case GOAT_LEGS:
std::cout << " Goat has 4 legs" << '\n';
break;
case CAT_LEGS:
std::cout << "Cat has 4 legs" << '\n';
break;
case DOG_LEGS:
std::cout << "Dog has 4 legs" << '\n';
break;
default:
std::cout << "Unknown" << '\n'; // Если ничего Не совпало
break;
  }
//return 0;// с return number тоже не компилируется
}
