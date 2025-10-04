#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include <map>
#include <functional>
#include "Lab_4.h"
using namespace std;

//�㭪樨 ��� �롮� ���짮��⥫�� ⨯� � ������⢠ ���᫥���
//� �㤠 �뢮� - � printf ��� cout
int I_Printf(int a,int b){
    char d = a & b;
    printf("d: %d  \n", d);
    return 0;
    }

int I_Cout(int a,int b){
    std::cout<<(a & b)<<('\n');
    return 0;
    }

int Ili_Printf(int a,int b){
    char d = a | b;
    printf("d: %d  \n", d);
    return 0;
    }

int Ili_Cout(int a,int b){
    std::cout<<(a | b)<<('\n');
    return 0;
    }

int XOR_Printf(int a,int b){
    char d = a ^ b;
    printf("d: %d  \n", d);
    return 0;
    }

int XOR_Cout(int a,int b){
    std::cout<<(a ^ b)<<('\n');
    return 0;
    }

int I_Printf_cikl(int a,int b){
    do{
    cout<<"������ ��� 楫�� �᫠"<<'\n';
    cout<<"��� �४�饭�� 横�� ������ ������ 0 � ������ ������ Enter"<<'\n';
    cin>>a>>b;
    char d = a & b;
    printf("d: %d  \n", d);
    }
    while (a!=0 && b !=0);
    return 0;
    }

int I_Cout_cikl(int a,int b){
    do{
    cout<<"������ ��� 楫�� �᫠"<<'\n';
    cout<<"��� �४�饭�� 横�� ������ ������ 0 � ������ ������ Enter"<<'\n';
    cin>>a>>b;
    std::cout<<(a & b)<<('\n');
    }
    while (a!=0 && b !=0);
    return 0;
    }

int Ili_Printf_cikl(int a,int b){
    do{
    cout<<"������ ��� 楫�� �᫠"<<'\n';
    cout<<"��� �४�饭�� 横�� ������ ������ 0 � ������ ������ Enter"<<'\n';
    cin>>a>>b;
    char d = a | b;
    printf("d: %d  \n", d);
    }
    while (a!=0 && b !=0);
    return 0;
    }

int Ili_Cout_cikl(int a,int b){
    do{
    cout<<"������ ��� 楫�� �᫠"<<'\n';
    cout<<"��� �४�饭�� 横�� ������ ������ 0 � ������ ������ Enter"<<'\n';
    cin>>a>>b;
    std::cout<<(a | b)<<('\n');
    }
    while (a!=0 && b !=0);
    return 0;
    }

    //���� ����᭮ ���७�஢����� � ��릪�� goto
int XOR_Printf_cikl(int a,int b){
    skip:
    {cout<<"������ ��� 楫�� �᫠"<<'\n';
    cout<<"��� �४�饭�� 横�� ������ ������ 0 � ������ ������ Enter"<<'\n';
    cin>>a>>b;
    char d = a ^ b;
    printf("d: %d  \n", d);
    }
    if (a!=0 && b !=0)
        goto skip;
    return 0;
    }

int XOR_Cout_cikl(int a,int b){
    skip:
    {
    cout<<"������ ��� 楫�� �᫠"<<'\n';
    cout<<"��� �४�饭�� 横�� ������ ������ 0 � ������ ������ Enter"<<'\n';
    cin>>a>>b;
    std::cout<<(a ^ b)<<('\n');
    }
    if (a!=0 && b !=0)
         goto skip;
    return 0;
    }

int Oper(int (*func)(int,int), int a, int b){
    int tip_oper;
    do {
      std::cout << "�롥�� �㦭�� �㭪��: ⨯ ����樨: \n";
      std::cout << "1) ����⮢�� �\n";
      std::cout << "2) ����⮢�� ���\n";
      std::cout << "3) ����⮢�� X�R\n";
     std::cin >> tip_oper;
         }
     while (tip_oper != 1 && tip_oper != 2 &&
     tip_oper != 3 );
    int povtornost;
    do {
     std::cout << "�롥�� ������⢮ ����஢: \n";
     std::cout << "1) ������⭮\n";
     std::cout << "2) �������⭮\n";
    std::cin >> povtornost;
        }
     while (povtornost != 1 && povtornost != 2 );

/*��� ��ਠ��, ��� ����� ��������� ����, �� ����� ���ன�⢮ �뢮����,
�� ����஫��� ��� ��࠭ �⠭�� � ��� ��� � �ࢥ� ��� �ࠢ�����
 �ந�����⢮� � 䨪�樨 ��ࠬ��஢ ࠡ��� ����㤮�����*/
   int vivod;
   do {
    std::cout << "�롥�� ⨯ �뢮��: \n";
    std::cout << "1) � printf\n";
    std::cout << "2) � cout\n";
    std::cin >> vivod;
       }
   while (vivod != 1 && vivod != 2 );

     if(tip_oper==1) {
         if(povtornost==1) {
           if(vivod==1) {
             func = I_Printf;
           } else if (vivod==2){
             func = I_Cout;
           }
       } else if (povtornost==2) {
             if(vivod==1) {
               func = I_Printf_cikl;
             } else if (vivod==2){
               func = I_Cout_cikl;
             }
         }
     }
         else if(tip_oper==2) {
             if(povtornost==1) {
               if(vivod==1) {
                   func = Ili_Printf;
               } else if (vivod==2){
                   func = Ili_Cout;
               }

         } else if (povtornost==2) {
               if(vivod==1) {
                 func = Ili_Printf_cikl;
               } else if (vivod==2){
                 func = Ili_Cout_cikl;
               }
           }
     }
         else if(tip_oper==3) {
             if(povtornost==1) {
               if(vivod==1) {
                 func = XOR_Printf;
               } else if (vivod==2){
                 func = XOR_Cout;
                   }
               } else if (povtornost==2) {
                   if(vivod==1) {
                 func = XOR_Printf_cikl;
                   } else if (vivod==2){
                 func = XOR_Cout_cikl;
                }
            }
      }
     return func(int(a),int(b));
    }

int vibor_funcii(int ( func)(int,int), int a, int b){
    int tip_oper;
 do {
      std::cout << "�롥�� �㦭�� �㭪��: ⨯ ����樨: \n";
      std::cout << "1) ����⮢�� �\n";
      std::cout << "2) ����⮢�� ���\n";
      std::cout << "3) ����⮢�� X�R\n";
     std::cin >> tip_oper;
         }
     while (tip_oper != 1 && tip_oper != 2 &&
     tip_oper != 3 );
    int povtornost;
 do {
     std::cout << "�롥�� ������⢮ ����஢: \n";
     std::cout << "1) ������⭮\n";
     std::cout << "2) �������⭮\n";
    std::cin >> povtornost;
        }
     while (povtornost != 1 && povtornost != 2 );

/*��� ��ਠ��, ��� ����� ��������� ����, �� ����� ���ன�⢮ �뢮����,
�� ����஫��� ��� ��࠭ �⠭�� � ��� ��� � �ࢥ� ��� �ࠢ�����
 �ந�����⢮� � 䨪�樨 ��ࠬ��஢ ࠡ��� ����㤮�����*/
    int vivod;
 do {
    std::cout << "�롥�� ⨯ �뢮��: \n";
    std::cout << "1) � printf\n";
    std::cout << "2) � cout\n";
    std::cin >> vivod;
       }
   while (vivod != 1 && vivod != 2 );

     if(tip_oper==1 && povtornost==1 && vivod==1) {
             func = I_Printf;
     } else if (tip_oper==1 && povtornost==1 && vivod==2){
             func = I_Cout;
     } else if (tip_oper==1 && povtornost==2 && vivod==1){
             func = I_Printf_cikl;
     } else if (tip_oper==1 && povtornost==2 && vivod==2){
             func = I_Cout_cikl;
     } else if (tip_oper==2 && povtornost==1 && vivod==1){
             func = Ili_Printf;
     } else if (tip_oper==2 && povtornost==1 && vivod==2){
             func = Ili_Cout;
     } else if (tip_oper==2 && povtornost==2 && vivod==1){
             func = Ili_Printf_cikl;
     } else if (tip_oper==2 && povtornost==2 && vivod==2){
             func = Ili_Cout_cikl;
     } else if (tip_oper==3 && povtornost==1 && vivod==1){
             func = XOR_Printf;
     } else if (tip_oper==3 && povtornost==1 && vivod==2){
             func = XOR_Cout;
     } else if (tip_oper==3 && povtornost==2 && vivod==2){
             func = XOR_Printf_cikl;
     } else if (tip_oper==3 && povtornost==2 && vivod==2){
             func = XOR_Cout_cikl;
                }
     return func(int(a),int(b));
    }

int(*select_func(int choice))(int,int){
 switch (choice){
 case 1:
 return I_Printf;
 case 2:
 return I_Cout;
 case 3:
 return I_Printf_cikl;
 case 4:
 return I_Cout_cikl;
 case 5:
 return Ili_Printf;
 case 6:
 return Ili_Cout;
 case 7:
 return Ili_Printf_cikl;
 case 8:
 return Ili_Cout_cikl;
 case 9:
 return XOR_Printf;
 case 10:
 return XOR_Cout;
 case 11:
 return XOR_Printf_cikl;
 case 12:
 return XOR_Cout_cikl;
 default:
 cout<<"Undefined"<<'\n';
 } return 0;
}

//TODO ��祬�-� �� ��⠥� � �� ���� १����
int (*select (std::string (x),int f,int d)){
    std::map<std::string, int(*)(int,int)>ar_func; // �������� ���� (�����) � ���祭�� (㪠��⥫� �� �㭪��)
    cout<<"������ �������� �㭪樨 �� ��ࠧ��\n"<<
    "�/���/���� ���/���� �ਭ��/����� ) \n";
    cin >> x;
    ar_func["� ��� �ਭ��"] = I_Printf;
    ar_func["� ��� �����"] = I_Cout;
    ar_func["� ���� �ਭ��"] = I_Printf_cikl;
    ar_func["� ���� �����"] = I_Cout_cikl;
    ar_func["��� ��� �ਭ��"] = Ili_Printf;
    ar_func["��� ��� �����"] = Ili_Cout;
    ar_func["��� ���� �ਭ��"] = Ili_Printf_cikl;
    ar_func["��� ���� �����"] = Ili_Cout_cikl;
    ar_func["���� ��� �ਭ��"] = XOR_Printf;
    ar_func["���� ��� �����"] = XOR_Cout;
    ar_func["���� ���� �ਭ��"] = XOR_Printf_cikl;
    ar_func["���� ���� �����"] = XOR_Cout_cikl;
 //   int f=0,d=0;//� ���� ⮦� �� �����⨫���
     if(x =="� ��� �ਭ��") {
             ar_func["� ��� �ਭ��"] = I_Printf;
             std::cout << ar_func["� ��� �ਭ��"](f,d) << '\n';
     } else if (x =="� ��� �����"){
             ar_func["� ��� �����"] = I_Cout;
             std::cout << ar_func["� ��� �����"](int(f),int(d)) << '\n';
     } else if (x =="� ���� �ਭ��"){
             ar_func["� ���� �ਭ��"] = I_Printf_cikl;
             std::cout << ar_func["� ���� �ਭ��"](int(),int()) << '\n';
     } else if (x =="� ���� �����"){
             ar_func["� ���� �����"] = I_Cout_cikl;
             std::cout << ar_func["� ���� �����"](int(),int()) << '\n';
     } else if (x =="��� ��� �ਭ��"){
             ar_func["��� ��� �ਭ��"] = Ili_Cout;
             std::cout << ar_func["��� ��� �ਭ��"] << '\n';
     } else if (x =="��� ��� �����"){
             ar_func["��� ��� �����"] = Ili_Printf;
             std::cout << ar_func["��� ��� �����"](int(),int()) << '\n';
     } else if (x =="��� ���� �ਭ��"){
             ar_func["��� ���� �ਭ��"] = Ili_Cout_cikl;
             std::cout << ar_func["��� ���� �ਭ��"](int(),int()) << '\n';
     } else if (x =="��� ���� �����"){
             ar_func["��� ���� �����"] = Ili_Cout_cikl;
             std::cout << ar_func["��� ���� �����"](int(),int()) << '\n';
     } else if (x =="���� ��� �ਭ��"){
             ar_func["���� ��� �ਭ��"] = XOR_Printf;
             std::cout << ar_func["���� ��� �ਭ��"](int(),int()) << '\n';
     } else if (x =="���� ��� �����"){
             ar_func["���� ��� �����"] = XOR_Cout;
             std::cout << ar_func["���� ��� �����"](int(),int()) << '\n';
     } else if (x =="���� ���� �ਭ��"){
             ar_func["���� ���� �ਭ��"] = XOR_Printf_cikl;
             std::cout << ar_func["���� ���� �ਭ��"](int(),int()) << '\n';
     } else if (x =="���� ���� �����"){
             ar_func["���� ���� �����"] = XOR_Cout_cikl;
             std::cout << ar_func["���� ���� �����"](int(),int()) << '\n';
     } else {
         cout<<"Ud"<<'\n';
     } return 0;
}
//�㭪樨 ��� ������⭮�� ���᫥��� � �뢮��� � cout
int I(int x, int y){
 return (x & y);
}
int ILI(int x, int y){
 return (x | y);
}
int XOR(int x, int y){
 return (x ^ y);
}
int operation(int(f)(int, int), int a, int b){
    cout<<f(a, b)<<'\n';
 return f(a, b);
}

   /* int main() {
    operation(ILI, 3, 6);
       Oper( I_Printf, 3, 6);
 vibor_funcii(XOR_Cout, 3, 6);
 // switch ����� ⠪
  select_func(8)(3,6);
 // ��� switch ⠪
 int(*action)(int,int)(select_func(1));
  std::cout << action() << '\n';
  action = select_func(8);
  std::cout << action() << '\n';
    int (*select (std::string (x),int f,int d));
        std::map<std::string, int(*)(int,int)>ar_func; // �������� ���� (�����) � ���祭�� (㪠��⥫� �� �㭪��)
    ar_func["� ��� �ਭ��"] = I_Printf;
    std::cout << ar_func["� ��� �ਭ��"](3,6) << '\n';
    //�஡���� std::map �뭥�� � �⤥���� �㭪��, �� �뢮��� �⢥�
    select("���� ��� �����")();
    }*/
