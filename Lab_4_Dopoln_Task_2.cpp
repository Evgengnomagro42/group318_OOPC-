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
        if (array[smallestIndex] > array[currentIndex]) // ��������� ����������� �����
          smallestIndex = currentIndex;
          }
  std::swap(array[startIndex], array[smallestIndex]);
    }
  }

void printArray(int array[], int size) {
  std::cout <<"�������訩 ������� ���ᨢ� = "<< array[0];
  std::cout <<"\n�������訩 ������� ���ᨢ� = "<< array[size-1] << '\n';
  }

void PRNG_Array (int array[], int N,void (SelectionSort)(int*, int),
                 void (printArray)(int*, int)) {
  unsigned seed = PRNG_start();
  std::default_random_engine generator (seed);
  int x, y;
  std::cout<<"������ �������쭮� ���祭�� ���������\n";
  std::cin>>x;
  std::cout<<"������ ���ᨬ��쭮� ���祭�� ���������\n";
  std::cin>>y;
  std::uniform_int_distribution<int> distribution(x, y);
  std::cout << "some random numbers between x and y: \n";
    for (int idx = 0; idx < N; ++idx){
      std::cout << "������� � �����ᮬ ["<< idx << "] ����� ���祭�� " <<
      (array[idx] =  distribution(generator)) << '\n';
    }
  std::cout  << '\n';
    if(x==00 && y==00)exit(0);//TODO ����� ��� �४�饭�� ࠡ���
      //�ணࠬ�� �� �������⭮� �ᯮ�짮�����. ��祬�-� ᭠砫�
      //�뢮��� ���ᨢ, ��� ��� = 0, ⮫쪮 ��⮬ �����蠥� ࠡ���
  SelectionSort(array, N);
  printArray(array, N);
  }

void PRNG_users_var(){
    skip:
    cout<<"�롥�� ����. � ���������� ������⭮ - ������ 1\n"
          "��� ��������� ������⭮ - 2\n"
          "��� ���������� �������⭮ - 3\n"
          "� ���������� �������⭮ - 4\n";
    short x;
    cin>>x;
    cout<<"������ �㦭�� ������⢮ ��砩��� �ᥫ\n"
          "��� ��ਠ�⮢ 3 � 4 ���� ࠧ ������ ������\n";
    int N;
    cin>>N;
    int array[N];

    switch (x) {
    case 1:
      PRNG_Array (array,N,SelectionSort,printArray);
      break;
    case 2: {
        std::random_device rd;
        std::mt19937 PRNG_start_cikl(rd());
          for (int count=0; count < N; ++count) {
            std::cout << PRNG_start_cikl() << "\t";
              if ((count+1) % 5 == 0)
                std::cout << '\n';
        } break;
    }
    case 3:
      cout<<"��� �����襭�� ������ � �ࠢ� ������\n";
      while (1) {
          PRNG_Array (array,N,SelectionSort,printArray);
          if (c==00)break;//TODO ��祬�-� � 4 ࠧ� �ࠡ��뢠��
      } break;
    case 4:
      cout<<"��� �����襭�� ������ 00 � Enter ������\n";
      while (1){
      cout<<"������ �㦭�� ������⢮ ��砩��� �ᥫ\n";
      short c;
      cin>>c;
      std::random_device f;
      std::mt19937 PRNG_start_cikl(f());
        for (int count=0; count < c; ++count) {
          std::cout << PRNG_start_cikl() << "\t";
            if ((count+1) % 5 == 0)
              std::cout << "\n";
              }cout<<'\n';
            if (c==00)break;//TODO ��祬�-� � case 3 ⠪�� ��ࠧ��
            //�� 㤠���� �������� ࠡ��� �ணࠬ��. � ��� ������� 2
            //�� �� ������, �� ⠬ �� ��ᠫ ⮤�
        } break;
      default:
        cout<<"�訡�� �����, ������ ᭮��\n";
        goto skip;
        break;
      }
    }*/
/*
int main() {
    PRNG_users_var();
    return 0;
  }*/
