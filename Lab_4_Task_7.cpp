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

using ref_digit_t = int;
typedef string ref_str_t;

void generate_placements(std::vector<ref_str_t>& arr,
                         ref_digit_t start, ref_digit_t end, ref_digit_t k) {
  ref_digit_t &S=start, &E=end, &K=k, i, &I=i;
    if (S == K) {
      for ( I = 0; I < K; ++I) {
        std::cout << arr[I] << ' ';
        }
      std::cout << '\n';
      return;
      }
  for (ref_digit_t I = S; I <= E; ++I) {
    std::swap(arr[S], arr[I]);
    generate_placements(arr, S + 1, E, K);
    std::swap(arr[S], arr[I]); //Backtracking
    }
  }
/*
int main() {
  std::vector<ref_str_t> elements = {"u1","u2","v1","v2","w1","w2"};
  ref_digit_t K; // ������ ࠧ��饭��
  std::cout << "������ ࠧ��饭�� = ";
  std::cin >> K;
  ref_digit_t n = elements.size();
  ref_digit_t &N=n;
  cout<<"����� �������� ������ ��� 1-� 䠧�, �।��� ��� 2-�, �ࠢ�� ��� 3-�\n";
    if (K <= n) {
      generate_placements(elements, 0, N - 1, K);
      } else {
      std::cout << "������ ࠧ��饭�� �� ����� �ॢ���� ࠧ��� ������⢠.\n";
      }
    return 0;
  }
*/
