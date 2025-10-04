/* ������ୠ� ࠡ�� No 4
* ����: ��᫥������� ���ᨢ��, 㪠��⥫��, ��뫮�*
* Developer: ��મ� ������� ��ࣥ����
* OS: Windows
* locale (����஢��): IBM 866 */
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
/*enum class ProgrEnum {Task_1, Task_2, Task_3, Task_4,
             Task_5, Task_6, Task_7, Task_8, Task_9,
             Dopoln_Task_1, Dopoln_Task_2};
const ProgrEnum progrEnum = ProgrEnum::Task_1;
int main() {
 if (progrEnum== ProgrEnum::Task_1) {
 PRNG_users_var();
 } else if (progrEnum == ProgrEnum::Task_2) {
  PRNG_diap_ssilka();
  cout<<'\n';
  PRNG_diap_ykaz(); } else if (progrEnum == ProgrEnum::Task_3) {
  printASCII();
 } else if (progrEnum == ProgrEnum::Task_4) {
  users_factorials();
  fib_odn_ili_mnogo();
  posledovat_i_ee_sum();
 } else if (progrEnum == ProgrEnum::Task_5) {
  PRNG_Array_int (SelectionSort_int,printArray_int);
  tip_dann_i_kolich_elem();
 } else if (progrEnum == ProgrEnum::Task_6) {
  adr_i_ykaz ();
  printArrayPoYkaz();
 } else if (progrEnum == ProgrEnum::Task_7) {
  std::vector<ref_str_t> elements = {"u1","u2","v1","v2","w1","w2"};
  ref_digit_t K; // Размер размещений
  std::cout << "Размер размещений = ";
  std::cin >> K;
  ref_digit_t n = elements.size();
  ref_digit_t &N=n;
  cout<<"левое название клеммы для 1-й фазы, среднее для 2-й, правое для 3-й\n";
    if (K <= n) {
      generate_placements(elements, 0, N - 1, K);
      } else {
      std::cout << "Размер размещений не может превышать размер множества.\n";
      }
 } else if (progrEnum == ProgrEnum::Task_8) {
    operation(ILI, 3, 6);
       Oper( I_Printf, 3, 6);
 vibor_funcii(XOR_Cout, 3, 6);
 // switch можно так
  select_func(8)(3,6);
 // или switch так
 int(*action)(int,int)(select_func(1));
  std::cout << action() << '\n';
  action = select_func(8);
  std::cout << action() << '\n';
    int (*select (std::string (x),int f,int d));
        std::map<std::string, int(*)(int,int)>ar_func; // Коллекция ключа (имени) и значениф (указателя на функцию)
    ar_func["И одн Принтф"] = I_Printf;
    std::cout << ar_func["И одн Принтф"](3,6) << '\n';
    //пробовал std::map вынести в отдельную функцию, не выводит ответ
    select("ИСКЛ одн Сиаут")();
 } else if (progrEnum == ProgrEnum::Task_9) {
    char nums1[2][6] {{1, 2, 3, 4, 5, 6},{11, 12, 13, 14, 15, 16}};
    int count1 = 2;
     int count2 = 6;
 print1(nums1,count1, count2);
 cout<<'\n';
 char nums2[3][4] {{1, 2, 3, 4},{11, 12, 13, 14},{21, 22, 23, 24}};
  int count3 = 3;
  int count4 = 4;
 print2(nums2,count3, count4);
 cout<<'\n';
    char nums[] {1, 2, 3, 4, 5, 6, 11, 12, 13, 14, 15, 16};
    int count = 12;
 print(nums, count);//TODO  почему-то qt пишет ошибку
 //хотя предыдущие функции сделаны так же и запустились нормально
 char numss[1][12]{{1, 2, 3, 4, 5, 6, 11, 12, 13, 14, 15, 16}};
 int c =1;
 int countt = 12;
 printe(numss, c, countt);//TODO Qt пишет - printe это undeclared
 //identifier, хотя другие функции видит
}
 } else if (progrEnum == ProgrEnum::Dopoln_Task_1) {
    tip_dann_i_kolich_elem();
 } else if (progrEnum == ProgrEnum::Dopoln_Task_2) {
    PRNG_users_var();
}













