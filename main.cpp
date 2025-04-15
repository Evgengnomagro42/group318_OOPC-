#include <iostream>
#include <iomanip>
using namespace std;
/*
* Лабораторная работа No 1
* Тема:
*
* Developer: Марков Евгений Сергеевич, группа 318
* OS: Windows
* locale (кодировка): IBM 866
*/
int main()
  {
  #if 0
  Задание 1
  #endif
  //Номер группы 318, Факультет Дополнительного Образования
  /* "Pазработчики программы 1. Марков Евгений Сергеевич
  *2. ______________ */
  #if 0
  "Номер Лабораторной работы_____" << endl;
  #endif

  #if 0
  Задание 2
  #endif
  cout.setf(ios::right);
  cout.width(5);
  cout << "*****";
  cout.width(15);
  cout << "ТУСУР";
  cout.width(25);
  cout << "*****" << endl;
  cout.unsetf(ios::right);

  cout << "Факультет: Доп. Образование" << setw(10)<< endl;
  cout << "Группа: 318 " << setw(10) << endl;
  cout << "Студент: Марков Евгений" << setw(10)<< endl;
  cout << "Томск 2025" << setw(10)<< endl;

  #if 0
  Задание 3
  #endif
  //1. Вычислить скорость прямолинейного движения (по расстоянию и времени).
    {
    double RasstoyanieDvijenia, VremiaDvijenia;
    while (true) { /* цикл продолжается до тех пор, пока пользователь
                   *  не введет корректное значение */
      cout << "Введите значение расстояния в км: ";
      cin >> RasstoyanieDvijenia;
    if (cin.fail()) {         // если предыдущее извлечение оказалось неудачным,
      cin.clear();            // то возвращаем cin в 'обычный' режим работы
      cin.ignore(32767,'\n'); /* и удаляем значения предыдущего ввода
                              из входного буфера  */
      cout << "Некорректное значение. Сотрите и введите только число";
      }
      // если всё хорошо, то возвращаем значение расстояния
      else {
        cout << "расстояниe = " << RasstoyanieDvijenia << " км" << endl;
        }
    break;
    }
    while (true) { /* цикл продолжается до тех пор, пока пользователь
                   * не введет корректное значение */
      std::cout << "Введите значение времени в часах: ";
      std::cin >> VremiaDvijenia;
    if (std::cin.fail()) {    /* если предыдущее извлечение
                              * оказалось неудачным, */
      std::cin.clear();       // то возвращаем cin в 'обычный' режим работы
      std::cin.ignore(32767,'\n'); /* и удаляем значения предыдущего ввода
                              * из входного буфера */
      cout << "Некорректное значение. Сотрите и введите только число";
         }
    // если всё хорошо, то возвращаем значение времени
    else {
      cout << "время = " << dec << VremiaDvijenia << " ч" << endl;
      }
    break;
      }
    //Для удобства пользователя вывод скорости как в км/ч, так и в м/с
    cout << "Cкорость прямолинейного движения = " << dec <<
      RasstoyanieDvijenia / VremiaDvijenia << " км/ч ( " <<
      (RasstoyanieDvijenia / VremiaDvijenia)/3.6 << " м/с)" << endl;
    }


    // 2. Вычислить ускорение (по начальной и конечной скорости и времени).
    {
    double SkorostKonechnaya, SkorostNachalnaya, VremiaDvijenia;
    while (true) { /* цикл продолжается до тех пор, пока
                   * пользователь не введет корректное значение */
    cout << "Введите значение начальной скорости в м/с\
    (надо скорость в (км/ч)/3,6) : ";
    cin >> SkorostNachalnaya;
    if (cin.fail()) {          /* если предыдущее извлечение
                               * оказалось неудачным, */
      cin.clear();             // то возвращаем cin в 'обычный' режим работы
      cin.ignore(32767,'\n');  /* и удаляем значения предыдущего ввода
                               из входного буфера */
      cout << "Некорректное значение. Сотрите и введите только число";
      }
      // если всё хорошо, то возвращаем значение начальной скорости
    else {
      cout << "начальная скорость = " << SkorostNachalnaya << " м/с" << endl;
        }
    break;
    }
    while (true) { /* цикл продолжается до тех пор, пока пользователь
                   * не введет корректное значение */
      cout << "Введите значение конечной скорости в м/с \
      (надо скорость в (км/ч)/3,6) : ";
      cin >> SkorostKonechnaya;
    if (cin.fail()) {        /* если предыдущее извлечение
                             * оказалось неудачным, */
      cin.clear();           // то возвращаем cin в 'обычный' режим работы
      cin.ignore(32767,'\n');/* и удаляем значения
                             * предыдущего ввода из входного буфера */
      cout << "Некорректное значение. Сотрите и введите только число";
      }
      // если всё хорошо, то возвращаем значение конечной скорости
      else {
        cout << "конечная скорость = " << SkorostKonechnaya << " м/с" << endl;
        }
    break;
    }
    while (true) {/* цикл продолжается до тех пор,
    пока пользователь не введет корректное значение */
      cout << "Введите значение времени в секундах \
      (количество часов * 3600, если время в часах) : ";
      cin >> VremiaDvijenia;
    if (cin.fail()) {        // если предыдущее извлечение оказалось неудачным,
      cin.clear();           // то возвращаем cin в 'обычный' режим работы
      cin.ignore(32767,'\n');// и удаляем значения предыдущего ввода из входного буфера
      cout << "Некорректное значение. Сотрите и введите только число";
      }
      // если всё хорошо, то возвращаем значение времени
      else {
        cout << "время = " << dec << VremiaDvijenia << " c" << endl;
        }
    break;
      }
    cout << "Ускорение = " << dec <<
      ((SkorostKonechnaya - SkorostNachalnaya)/ VremiaDvijenia) <<
      " м/с^2" << endl;
  }


   // 3. Вычислить радиус круга (по длине его окружности).
  {
  double DlinaOkrygnosti;
    while (true) {/* цикл продолжается до тех пор,
                    пока пользователь не введет корректное значение */
      cout << "Введите значение длины окружности в м : ";
      cin >> DlinaOkrygnosti;
    if (cin.fail()) {        // если предыдущее извлечение оказалось неудачным,
      cin.clear();           // то возвращаем cin в 'обычный' режим работы
      cin.ignore(32767,'\n');// и удаляем значения предыдущего ввода из входного буфера
      cout << "Некорректное значение. Сотрите и введите только число";
         }
              // если всё хорошо, то возвращаем значение длины окружност
    else {
      cout << "длина окружности = " << DlinaOkrygnosti << " м" << endl;
            }
    break;
         }
      cout << "радиус круга = " <<
      DlinaOkrygnosti / (2*3.14) << " м" << endl;
    }
  }



