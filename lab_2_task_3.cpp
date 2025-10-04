#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include <string>
#include <iterator>
#include <vector>
#include <array>
#include <cstdlib> // для функций rand() и srand()
#include <ctime> // для функции time()
#include <map>
#include <functional>
#include <random>
#include <chrono>
#include "Lab_4.h"
using namespace std;
/*
unsigned int PRNG_start_cikl(short c) {
  static unsigned seed = ((unsigned int)(time(0)));
  const unsigned range{1000};
  seed = (82 * seed * c + 46);
  return seed % range;
  }

unsigned int PRNG_start() {
  static unsigned seed = ((unsigned int)(time(0)));
  const unsigned range{1000};
  seed = (82 * seed + 46);
  return seed % range;
  }

void SelectionSort(int array[], int size) {
  for (int startIndex = 0; startIndex < size; ++startIndex) {
    int smallestIndex = startIndex;
      for (int currentIndex = startIndex + 1;
           currentIndex < size; ++currentIndex) {
        if (array[smallestIndex] > array[currentIndex]) // СРАВНЕНИЕ ВЫПОЛНЯЕТСЯ ЗДЕСЬ
          smallestIndex = currentIndex;
          }
  std::swap(array[startIndex], array[smallestIndex]);
    }
  }

void printArray(int array[], int size) {
  std::cout <<"Наименьший элемент массива = "<< array[0];
  std::cout <<"\nНаибольший элемент массива = "<< array[size-1] << '\n';
  }

void PRNG_Array (int array[], int N,void (SelectionSort)(int*, int),
                 void (printArray)(int*, int)) {
  unsigned seed = PRNG_start();
  std::default_random_engine generator (seed);
  int x, y;
  std::cout<<"Введите минимальное значение диапазона\n";
  std::cin>>x;
  std::cout<<"Введите максимальное значение диапазона\n";
  std::cin>>y;
  std::uniform_int_distribution<int> distribution(x, y);
  std::cout << "some random numbers between x and y: \n";
    for (int idx = 0; idx < N; ++idx){
      std::cout << "Элемент с индексом ["<< idx << "] имеет значение " <<
      (array[idx] =  distribution(generator)) << '\n';
      }
  std::cout  << '\n';
    if(x==00 && y==00)exit(0);//TODO делал для прекращения работы
      //программы при многократном использовании. Почему-то сначала
      //выводит массив, где всё = 0, только потом завершает работу
  SelectionSort(array, N);
  printArray(array, N);
  }

void PRNG_users_var(){
    skip:
    cout<<"Выберите ГПСЧ. С диапазоном однократно - введите 1\n"
          "Без диапазона однократно - 2\n"
          "С диапазоном многократно - 3\n"
          "Без диапазона многократно - 4\n";
    short x;
    cin>>x;
    cout<<"Введите нужное количество случайных чисел\n"
          "Для вариантов 3 и 4 первый раз введите дважды\n";
    int N;
    cin>>N;
    int array[N];
    switch (x) {
    case 1:
      PRNG_Array (array,N,SelectionSort,printArray);
      break;
    case 2: {
        cout<<"Введите нужное количество случайных чисел\n";
        short c;
        cin>>c;
        std::random_device rd;
        std::mt19937 PRNG_start_cikl(rd());
          for (int count=0; count < c; ++count) {
            std::cout << PRNG_start_cikl() << "\t";
              if ((count+1) % 5 == 0)
                std::cout << "\n";
        } break;
      }
    case 3:
      cout<<"Для завершения нажмите Х справа вверху\n";
      while (1) {
          PRNG_Array (array,N,SelectionSort,printArray);
          if (c==00)break;//TODO почему-то с 4 раза срабатывает
      } break;
    case 4:
      cout<<"Для завершения нажмите 00 и Enter дважды\n";
      while (1){
      cout<<"Введите нужное количество случайных чисел\n";
      short c;
      cin>>c;
      std::random_device f;
      std::mt19937 PRNG_start_cikl(f());
        for (int count=0; count < c; ++count) {
          std::cout << PRNG_start_cikl() << "\t";
            if ((count+1) % 5 == 0)
              std::cout << "\n";
              }cout<<'\n';
            if (c==00)break;//TODO почему-то в case 3 таким образом
              //не удалось завершить работу программы. В доп задании 2
              //то же самое, но там не писал тодо
        } break;
      default:
        cout<<"ошибка ввода, введите снова\n";
        goto skip;
        break;
      }
    }*/
/*
int main() {
    PRNG_users_var();
    return 0;
  }*/
