#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include "lab_3.h"
using namespace std;

void lift(){
    enum Levels {
    LEVEL_0 = 0,
    LEVEL_1,
    LEVEL_2,
    LEVEL_3,
    LEVEL_4,
    LEVEL_5,
    LEVEL_6,
    LEVEL_7
    };
short l;
tryAgain:
std::cout << "Введите число от 0 до 7 включительно: \n";
std::cin >> l;
//этот if для отработки неправильного пользовательского ввода
if (l < 0 || l > 7) {
cout << "Нет такого этажа, введите номер этажа заново\n";
goto tryAgain;
}
cout << "Вы выбрали " << l << " этаж\n";
switch (l) {
case LEVEL_0:
std::cout << "этаж 0. Parking\n";
break;
case LEVEL_1:
std::cout << "этаж 1. Reception, administration, bytovyaia technika\n";
break;
case LEVEL_2:
std::cout << "этаж 2. Odejda i obyv, mebel\n";
break;
case LEVEL_3:
std::cout << "этаж 3. Knigi, apteki, santechnika, uvelir\n";
break;
case LEVEL_4:
std::cout << "этаж 4. avto zapchasti\n";
break;
case LEVEL_5:
std::cout << "этаж 5. Parc attractions\n";
break;
case LEVEL_6:
std::cout << "этаж 6. Cinema\n";
break;
case LEVEL_7:
std::cout << "этаж 7. Food cort\n";
break;
default:
std::cout << "Unknown";
break;
  }
tryAgain_level:
cout << "Выберите дальнейшее действие и нажмите кнопку лифта :\n"
        "хотите открыть дверь, нажмите \'^\', \n"
        "нужен другой этаж, нажмите его номер, \n"
        "связаться с лифтером, нажмите \'L\', \n"
        "вызвать охрану, нажмите \'S\', \n"
        "нужна медпомощь, нажмите \'M\', \n"
        "связаться с администрацией, нажмите \'A\', \n"
        "вернуться к выходу из ТЦ, нажмите \'E\', \n";
char a;
cin >> a;
 if (a == '^'){
  //открытие дверей лифта и звуковй сигнал об открытии дверей
    cout << "Осторожно, двери открываются" << '\n';
    // для вызова лифта на другой этаж после прогулки по этому этажу
    goto tryAgain;
  } else if (a == '0'){
    cout << "Вы выбрали 0 этаж. Parking" << '\n';
    goto tryAgain/*_level*/;
    //перемещение лифта на нужный этаж, так для всех этажей
  } else if (a == '1'){
    cout << "Вы выбрали этаж 1. Reception, administration, "
            "bytovyaia technika" << '\n';
    goto tryAgain_level;
  } else if (a == '2'){
    cout << "Вы выбрали 2 этаж. Odejda i obyv, mebel" << '\n';
    goto tryAgain_level;
  } else if (a == '3'){
    cout << "Вы выбрали 3 этаж. Knigi, apteki, santechnika, uvelir" << '\n';
    goto tryAgain_level;
  } else if (a == '4'){
    cout << "Вы выбрали 4 этаж. avto zapchasti" << '\n';
    goto tryAgain_level;
  } else if (a == '5'){
    cout << "Вы выбрали 5 этаж. Parc attractions" << '\n';
    goto tryAgain_level;
  } else if (a == '6'){
    cout << "Вы выбрали 6 этаж. Cinema" << '\n';
    goto tryAgain_level;
  } else if (a == '7'){
    cout << "Вы выбрали 7 этаж. Food cort" << '\n';
    goto tryAgain_level;
  } else if (a == 'L'){
    cout << "Вызов лифтера" << '\n';
  } else if (a == 'S'){
    cout << "Вызов охраны" << '\n';
  } else if (a == 'M'){
    cout << "Вызов медпомощи" << '\n';
  } else if (a == 'A'){
    cout << "Вызов администрации" << '\n';
  } else {
    //завершение программы - ввод символа Е английской раскладкой
    cout << "Вы выбрали вернуться к выходу" << '\n';
    return;
    }
  }
