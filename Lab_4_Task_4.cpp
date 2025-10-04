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

short factorial_iter(short n) {
  short x = 1;
  for (short i = 2; i <= n; ++i) x = x * i;
  return x;
  }
short factorial_recurs(short n) {
  if(n > 1)
  return n * factorial_recurs(n-1);
  else return 1;
  }
void users_factorials() {
  while(1)
    {
      cout<<"������ �� �᫮"<<'\n';
      short n ;
      cin>>n;
        if(n==00)break;
        skip:
          cout<<"����� ���樥� - ������ 1, ४��ᨥ� - 2\n"
              "��� ��室� ������ 00 � Enter ������"<<'\n';
        short f;
        cin>>f;
        switch(f) {
          case(1):  {
            short result {factorial_recurs(n)};
            cout <<"Factorial of "<<n<<" is equal to "<<result<<endl;
            break;
          }
          case(2):  {
            short result {factorial_iter(n)};
            cout <<"Factorial of "<<n<<" is equal to "<<result<<endl;
            break;}
      default:
        cout<<"�訡�� �����, ������ ᭮��\n";
        goto skip;
        break;
          }
        }
      }

int fib() {
  skip:
  cout<<"������ ����� �᫠\n";
  short n;
  cin>>n;
    if(n==00)exit(0) ;
    if(n<0){
        cout<<"����� ���� ����� 0"<<'\n';
        goto skip;}
    if (n<=0) return 0;
    if (n==1) return 1;
  int prev=0;
  int curr=1;
  int next;
  cout<<"�������� �鸞 � �᫮ � � "<<n<<
        " = "<<prev<<' '<<curr<<' ';
    for(int i=2;i<n;++i) {
      next = prev+curr;
      prev=curr;
      curr=next;
      cout<<next<<' ';
        if (i==n-1)cout<<'\n';
    }return curr;
    goto skip;
  }
void fib_odn_ili_mnogo(){
  skip:
  cout<<"����� ���� ࠧ - ������ 1, �������⭮ - 2\n";
  short s;
  cin>>s;
    switch (s){
      case (1):
        fib();
        break;
      case (2):
        short d;
        cout<<"��� ��室� ������ 00 � Enter ������\n";
        while(d!=00){
          fib();}
          break;
      default:
        cout<<"�訡�� �����, ������ ᭮��\n";
        goto skip;
        break;
    }
  }

void posledovat_i_ee_sum(){
    while(1) {
    skip:
    cout<<"������ 楫�� �᫮ ����� 0\n";
    int s;
    cin>>s;
      if(s<0)goto skip;
        int outer=1, inner=1, i=0,j=0;
        while (outer<=s) {
          while (inner<=outer) {
            for(i=inner;i>0;--i)
              cout<<i<<' ';
              j+=inner;
              ++inner;
            }cout<<j<<'\n';
            outer++;
        }if(s==00)break;
      }
    }
/*
int main (){
  users_factorials();
  fib_odn_ili_mnogo();
  posledovat_i_ee_sum();
  return 0;
  }*/

