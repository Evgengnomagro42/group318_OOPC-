#ifndef LAB_4_H
#define LAB_4_H
#include <iostream>
//task 1
unsigned PRNG_start_cikl(short c) ;
unsigned PRNG_start() ;
void SelectionSort(int array[], int size) ;
void printArray(int array[], int size) ;
void PRNG_Array (int array[], int N,void (SelectionSort)(int*, int),
                 void (printArray)(int*, int));
void PRNG_users_var();
//task_2
void arr_5x5();
//task_2
void PRNG_diap_ssilka();
void PRNG_diap_ykaz();
//task_3
void printASCII();
//task_4
short factorial_iter(short n);
short factorial_recurs(short n);
void users_factorials();
int fib(int n);
void fib_odn_ili_mnogo();
void posledovat_i_ee_sum();
//task_5
void SelectionSort_char(char array[], int size);
void SelectionSort_short(short array[], int size);
void SelectionSort_int(int array[], int size);
void SelectionSort_float(float array[], int size);
void SelectionSort_double(double array[], int size);
void printArray_char(char array[], int size);
void PRNG_Array_char (void (SelectionSort_char)(char*, int),
                     void (printArray_char)(char*, int));
void printArray_short(short array[], int size);
void PRNG_Array_short (void (SelectionSort_short)(short*, int),
                     void (printArray_short)(short*, int));
void printArray_int(int array[], int size);
void PRNG_Array_int (void (SelectionSort_int)(int*, int),
                     void (printArray_int)(int*, int));
void printArray_float(float array[], int size);
void PRNG_Array_float (void (SelectionSort_float)(float*, int),
                     void (printArray_float)(float*, int));
void printArray_double(double array[], int size);
void PRNG_Array_double (void (SelectionSort_double)(int*, int),
                     void (printArray_double)(int*, int));
void tip_dann_i_kolich_elem();
//task_6
void adr_i_ykaz ();
void printArrayPoYkaz();
//task_8
int (I_Printf(int x,int y));
int I_Cout(int x,int y);
int I_Printf_cikl(int x,int y);
int I_Cout_cikl(int x,int y);
int Ili_Printf(int x,int y);
int Ili_Cout(int x,int y);
int Ili_Printf_cikl(int x,int y);
int Ili_Cout_cikl(int x,int y);
int XOR_Printf(int x,int y);
int XOR_Cout(int x,int y);
int XOR_Printf_cikl(int x,int y);
int XOR_Cout_cikl(int x,int y);
int Oper(int (*func)(int,int), int a, int b);
int vibor_funcii(int (*func)(int,int), int a, int b);
int (*select_func(int choice))(int,int);
int (*select (std::string (x),int f,int d));
int I(int x, int y);
int ILI(int x, int y);
int XOR(int x, int y);
int operation(int(f)(int, int), int a, int b);
//task_9
void print1(char(&)[2][6],int,int);
//void print2(char(&)[3][4],int,int);

#endif // LAB_4_H
