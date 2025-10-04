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

void printASCII(){
  for(char ch = 'a';ch<='z';++ch){
    std::cout<< setw(5) << ch << ' ' << (int)ch<<' ';
      //TODO �� 㤠���� ��஢���� �뢮� �㪢
      //� ���姭��묨 ����ࠬ� � ASCII
      //if((int)ch<100)cout<<"0"(int)ch;
      //if((int)ch<100)cout<<setw(10);
      if((ch-1)%5==0)cout<< std::endl;
    }
  }
/*
int main ( ){
  printASCII();
  }
*/
