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
#include <cstdlib> // ��� �㭪権 rand() � srand()
#include <ctime> // ��� �㭪樨 time()
#include <type_traits>
#include <cstdint>
#include <initializer_list>
#include <random>
#include <chrono>
#include <cstring>
#include <utility>
#include <algorithm>
#include <cstddef> // ��� std::nullptr_t
#include <map>
#include <functional>
#include <clocale>
#include "Lab_4.h"
using namespace std;

void SelectionSort_char(char array[], int size) {
  for (int startIndex = 0; startIndex < size; ++startIndex) {
    int smallestIndex = startIndex;
      for (int currentIndex = startIndex + 1; currentIndex < size;
           ++currentIndex) {
        if (array[smallestIndex] > array[currentIndex]) // ��������� ����������� �����
          smallestIndex = currentIndex;
        }swap(array[startIndex], array[smallestIndex]);
    }
  }

void printArray_char(char array[], int size) {
    cout<<"���ᨢ ��᫥ ���஢��\n";
    for (int index = 0; index < size; ++index){
        cout << (short)array[index] << ' ';
        if ((index+1) % 5 == 0)cout<<'\n';
    }
  cout <<"�������訩 ������� ���ᨢ� = "<< (short)array[0] << '\n';
  cout <<"�������訩 ������� ���ᨢ� = "<< (short)array[size-1] << '\n';
  }

void PRNG_Array_char (void (SelectionSort_char)(char*, int),
                     void (printArray_char)(char*, int)) {
  cout << "������ ������⢮ ������⮢: \n";
  short cnt;
  cin >> cnt;
  char array[cnt];
  srand(static_cast<unsigned int>(time(0)));
    for (int count = 0; count < cnt; ++count) {
      cout << (short)(array[count] = rand()) << "\t";
        if ((count+1) % 5 == 0)
          cout << "\n";
    }
    SelectionSort_char(array, cnt);
    printArray_char(array, cnt);
  }

void SelectionSort_short(short array[], int size) {
  for (int startIndex = 0; startIndex < size; ++startIndex) {
    int smallestIndex = startIndex;
      for (int currentIndex = startIndex + 1; currentIndex < size;
           ++currentIndex) {
        if (array[smallestIndex] > array[currentIndex]) // ��������� ����������� �����
          smallestIndex = currentIndex;
        }swap(array[startIndex], array[smallestIndex]);
    }
  }

void printArray_short(short array[], int size) {
    cout<<"���ᨢ ��᫥ ���஢��\n";
    for (int index = 0; index < size; ++index){
        cout << array[index] << ' ';
        if ((index+1) % 5 == 0)cout<<'\n';
    }
  cout <<"�������訩 ������� ���ᨢ� = "<< array[0] << '\n';
  cout <<"�������訩 ������� ���ᨢ� = "<< array[size-1] << '\n';
  }

void PRNG_Array_short (void (SelectionSort_short)(short*, int),
                     void (printArray_short)(short*, int)) {
  cout << "������ ������⢮ ������⮢: \n";
  short cnt;
  cin >> cnt;
  short array[cnt];
  srand(static_cast<unsigned int>(time(0)));
    for (int count = 0; count < cnt; ++count) {
      cout << (array[count] = rand()) << "\t";
        if ((count+1) % 5 == 0)
          cout << "\n";
    }
    SelectionSort_short(array, cnt);
    printArray_short(array, cnt);
  }

void SelectionSort_int(int array[], int size) {
  for (int startIndex = 0; startIndex < size; ++startIndex) {
  int smallestIndex = startIndex;
    for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex) {
      if (array[smallestIndex] > array[currentIndex]) // ��������� ����������� �����
          smallestIndex = currentIndex;
      }swap(array[startIndex], array[smallestIndex]);
    }
  }

void printArray_int(int array[], int size) {
    cout<<"���ᨢ ��᫥ ���஢��\n";
    for (int index = 0; index < size; ++index){
        cout << array[index] << ' ';
        if ((index+1) % 5 == 0)cout<<'\n';
    }
  cout <<"�������訩 ������� ���ᨢ� = "<< array[0] << '\n';
  cout <<"�������訩 ������� ���ᨢ� = "<< array[size-1] << '\n';
  }

void PRNG_Array_int (void (SelectionSort_int)(int*, int),void (printArray_int)(int*, int)) {

  cout << "������ ������⢮ ������⮢: \n";
  short cnt;
  cin >> cnt;
  int array[cnt];
 srand(static_cast<unsigned int>(time(0)));
for (int count = 0; count < cnt; ++count) {
 std::cout << (array[count] = rand()) << "\t";
 if ((count+1) % 5 == 0)
 std::cout << "\n";
 }
    SelectionSort_int(array, cnt);
    printArray_int(array, cnt);
 }

void SelectionSort_float(float array[], int size) {
  for (int startIndex = 0; startIndex < size; ++startIndex) {
    int smallestIndex = startIndex;
      for (int currentIndex = startIndex + 1; currentIndex < size;
           ++currentIndex) {
        if (array[smallestIndex] > array[currentIndex]) // ��������� ����������� �����
          smallestIndex = currentIndex;
        }swap(array[startIndex], array[smallestIndex]);
    }
  }

void printArray_float(float array[], int size) {
    cout<<"���ᨢ ��᫥ ���஢��\n";
    for (int index = 0; index < size; ++index){
        cout << array[index] << ' ';
        if ((index+1) % 5 == 0)cout<<'\n';
    }
  cout <<"�������訩 ������� ���ᨢ� = "<< array[0] << '\n';
  cout <<"�������訩 ������� ���ᨢ� = "<< array[size-1] << '\n';
  }

void PRNG_Array_float (void (SelectionSort_float)(float*, int),
                     void (printArray_float)(float*, int)) {
  cout << "������ ������⢮ ������⮢: \n";
  short cnt;
  cin >> cnt;
  float array[cnt];
  srand(static_cast<unsigned int>(time(0)));
    for (int count = 0; count < cnt; ++count) {
      cout << (array[count] = rand()) << "\t";
        if ((count+1) % 5 == 0)
          cout << "\n";
    }
    SelectionSort_float(array, cnt);
    printArray_float(array, cnt);
  }

void SelectionSort_double(double array[], int size) {
  for (int startIndex = 0; startIndex < size; ++startIndex) {
    int smallestIndex = startIndex;
      for (int currentIndex = startIndex + 1; currentIndex < size;
           ++currentIndex) {
        if (array[smallestIndex] > array[currentIndex]) // ��������� ����������� �����
          smallestIndex = currentIndex;
        }swap(array[startIndex], array[smallestIndex]);
    }
  }

void printArray_double(double array[], int size) {
    cout<<"���ᨢ ��᫥ ���஢��\n";
    for (int index = 0; index < size; ++index){
        cout << array[index] << ' ';
        if ((index+1) % 5 == 0)cout<<'\n';
    }
  cout <<"�������訩 ������� ���ᨢ� = "<< array[0] << '\n';
  cout <<"�������訩 ������� ���ᨢ� = "<< array[size-1] << '\n';
  }

void PRNG_Array_double (void (SelectionSort_double)(double*, int),
                     void (printArray_double)(double*, int)) {
  cout << "������ ������⢮ ������⮢: \n";
  short cnt;
  cin >> cnt;
  double array[cnt];
  srand(static_cast<unsigned int>(time(0)));
    for (int count = 0; count < cnt; ++count) {
      cout << (array[count] = rand()) << "\t";
        if ((count+1) % 5 == 0)
          cout << "\n";
    }
    SelectionSort_double(array, cnt);
    printArray_double(array, cnt);
  }

void tip_dann_i_kolich_elem(){
  skip:
  cout<<"�롥�� ⨯ ������: 1-char, 2-short, 3-int, 4-float, 5-double"<<'\n';
  short tip;
  cin>>tip;
  switch(tip){
    case 1:
      PRNG_Array_char (SelectionSort_char,printArray_char);
      break;
    case 2:
      PRNG_Array_short (SelectionSort_short,printArray_short);
      break;
    case 3:
       PRNG_Array_int (SelectionSort_int,printArray_int);
       break;
    case 4:
      PRNG_Array_float (SelectionSort_float,printArray_float);
      break;
    case 5:
      PRNG_Array_double (SelectionSort_double,printArray_double);
      break;
      default:
        cout<<"�訡�� �����, ������ ᭮��\n";
        goto skip;
        break;
    }
  }
/*
int main() {
    tip_dann_i_kolich_elem();
    return 0;
  }
  }*/
