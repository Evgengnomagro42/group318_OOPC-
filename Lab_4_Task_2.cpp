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
void arr_5x5(){
constexpr size_t N{5}, M{5};
 int arr[N][M] = { {1, 0, 0, 0, 0},
 {0, 1, 0, 0, 0},
 {0, 0, 1, 0, 0},
 {0, 0, 0, 1, 0},
 {0, 0, 0, 0, 1},
 };

 cout << " " << arr[0][0] << " " << arr[0][1] << " " << arr[0][2]
 << " " << arr[0][3] << " " << arr[0][4] << '\n';
 std::cout << " " << arr[1][0] << " " << arr[1][1] << " "
 << arr[1][2] << " " << arr[1][3] << " " << arr[1][4] <<'\n';
 std::cout << " " << arr[2][0] << " " << arr[2][1] << " "
 << arr[2][2] << " " << arr[2][3] << " " << arr[2][4] <<'\n';
 std::cout << " " << arr[3][0] << " " << arr[3][1] << " "
 << arr[3][2] << " " << arr[3][3] << " " << arr[3][4] <<'\n';
 std::cout << " " << arr[4][0] << " " << arr[4][1] << " "
 << arr[4][2] << " " << arr[4][3] << " " << arr[4][4] <<'\n';
  }

void PRNG_diap_ssilka(){
  constexpr int N{8},M{8};
  int arr[N][M];
  int start = -15;
  int end = 15;
  int x=0;
  std::srand((int)(std::time(0)));
  for (int rows=0; rows < N; ++rows) {
    for (int columns=0; columns < M; ++columns) {
      cout <<showpos << setw(4)<<
      (arr[rows][columns] = PRNG_start() % (end - start + 1)+start)<<' ';
      int& z=(arr[rows][columns]);
        if (rows<columns)x+=z;
          }cout<<'\n';
        }cout<<"�㬬� ������⮢ ��� ������� ��������� = "<<x;
      }

const int C_COUNT{8}, C_C{8};
void PRNG_diap_ykaz() {
  int array[C_COUNT][C_C];
  int start = -15;
  int end = 15;
  int x=0;
  srand((int)(std::time(0)));
  for (int rows=0; rows < C_COUNT; ++rows) {
    for (int columns=0; columns <  C_C; ++columns) {
      cout <<showpos << setw(4)<<
      (array[rows][columns] = PRNG_start() % (end - start + 1)+start)<<' ';
      int* z=(&array[rows][columns]);
      if (rows<columns)x+=*z;
        }cout << '\n';
      }cout<<"�㬬� ������⮢ ��� ������� ��������� = "<<x<<'\n';
    }
/*
int main ( ){
  PRNG_diap_ssilka();
  cout<<'\n';
  PRNG_diap_ykaz();
    return 0;
  }
*/
