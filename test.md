# Тестовые задания 

## a) 
### X С ошибками
```cpp
void main( {                //нужна )
 short array[]{1,3,5,7,9};   
 short *ptr = array;
 ptr = 111;                 //надо * перед ptr  
 for (int i = 0; i < sizeof(array); ++i) //лучше size_t вместо int, не критично
 std::cout << " Значение элемента " << i << ": " << array +i << '\n'; i надо в []
}
```
### V Исправленый
```cpp
int main(){                
 short array[]{1,3,5,7,9}; 
 short *ptr = array;
 *ptr = 111;
 for (size_t i = 0; i < sizeof(array)/sizeof(array[0]); ++i)
 std::cout << " Значение элемента " << i << ": " << array [i] << '\n';
 }
```

## b)
### X С ошибками
```cpp
//не обьявлена void Func
int main() {
 int array[size]{1,3,5,7,9};  //не указан size
 Func(&array, size);          //& не надо
}
void Func(int *ptr, int size) {
 for (int i = 0; i < size; ++i)
//русские буквы недопустимы
 std::cout << " Значение элемента " ББ<< ptr[i] << '\n';
// для получения адреса нужен &. после i надо ] 
 std::cout << " Адрес элемента " << ptr[i << '\n';
}
```
### V Исправленый
```cpp
### V Исправленый
```cpp
int main(){                
 short array[]{1,3,5,7,9}; 
 short *ptr = array;
 *ptr = 111;
 for (size_t i = 0; i < sizeof(array)/sizeof(array[0]); ++i)
 std::cout << " Значение элемента " << i << ": " << array [i] << '\n';
 }
```

## c)
### X С ошибками
```cpp
#include <iostream>
int main() {
 short value;
 short *p;
 p = value;  //надо & перед value
 *p = value;
 *p = &value;//Qt выдаёт ошибку
 *p = *&value;
}
```
### V Исправленый
```cpp
int main() {
 short value=5;
 short *p;
 p = &value;
 *p = value;
 *p = *&value;
}
```

## d)
### X С ошибками
```cpp
int main() {
 char cvalue;  //надо присвоить значение, иначе выведется мусор
 int ivalue;   //надо присвоить значение, иначе выведется мусор
 short * ps;   //указатель ни на что не указывает
 char *pc;     //указатель ни на что не указывает
 void *pv {(int*)(cvalue)};      //у cvalue тип данных char, а не int
 void *pv_1 {(char*)(&ivalue)};  //у ivalue тип данных int, а не char
               //нельзя преобразовать в выводе. 
               //Сначала надо преобразовать, потом выводить
 std::cout << "pv->int" << *static_cast<int>(pv) << std::endl;
 int *pi = {(int)(pv)};
               //преобразовали pv, а выводят pv_1
 std::cout << "pi=" << pv_1 << std::endl;
}
```

### V Исправленый
```cpp
int main() {
 char cvalue=5;
 int ivalue=15;
 short * ps;
 char *pc;
 void *pv {(int*)(cvalue)};
 void *pv_1 {(char*)(&ivalue)};
 pv = static_cast<int*>(pv);
 std::cout << "pv->int " << pv << std::endl;
 int pi = (int)(pv);
 std::cout << "pi " << pv << std::endl;
}
```

## e)
### X С ошибками
```cpp
int main() {
short value, value1(3);   //без значения - выведется мусор
 short &ref;               //нельзя делать указатель без инициализации
 const short &ref1 = value;
 const short &ref2 = 78;
 ref1 = 3;                 //нельзя присвоить другое значение константе
 *&value = 4;
//* надо после типа данных, второй const лишний
 const *short const p3; 
}
```
### V Исправленый
```cpp
short value, value1(3);
 // short &ref;
 const short &ref1 = value;
 const short &ref2 = 78;
 //ref1 = 3;
 *&value = 4;
 const short* p3;
}
```

# Исправьте ошибки можно что-то добавлять а удалять нельзя.
## g)
### X С ошибками
```cpp
 int main() {
int value1 45;     //надо = перед r-value 
int value 63;      //надо = перед r-value
int *ptr = &value; 
*ptr = &value;     //надо  без * в r-value
ptr = value;       //надо * в r-value
                   //надо * перед ptr
std::cout << "Результат value1 + value2 : " << value1 + ptr << '\n';
}
```
### V Исправленый
```
 int main() {
  int value1 = 45;
    int value = 63;
    int *ptr = &value;
    ptr = &value;
    *ptr = value;
    std::cout << "Результат value1 + value2 : " << value1 + *ptr << '\n';
}
```

# Исправьте ошибки можно что-то добавлять а удалять нельзя.
## a)
### X С ошибками
```
 int main() {
std::cout << "Hi !\n";
 //если надо, чтобы следующая строка не выполнялась,
 // то надо писать (0) после exit
 exit;
 std::cout << 3 //надо ; после 3
//программа выведет Hi !, в следующей строке 3
```

### V Исправленый
```
int main() {
std::cout << "Hi !\n";
 std::cout << 3;  
}
```

## b)
### X С ошибками
```
int main() {
switch (2) {
//после case надо : , и break (кроме случаев,
//когда надо выполнить все кейсы, но это должно
//быть отражено в комментарии к коду
 case 1
 std::cout << 1 << '\n';
 case 2                  //после case надо :
 std::cout << 2 << '\n'  //надо ; в конце стейтмента
 case                    // надо номер кейса
 std::cout << 3 << '\n';
 case 4                   //после case надо :
 std::cout << 4 << '\n'   //надо ; в конце стейтмента
 default:
 std::cout << 5 << '\n';
 //надо } в конце switch
 //надо } в конце тела функции
```

### V Исправленый
```
int main() {
switch (2) {
     case 1:
     std::cout << 1 << '\n';
     break;
     case 2:
     std::cout << 2 << '\n';
     break;
     case 3:
     std::cout << 3 << '\n';
     break;
     case 4:
     std::cout << 4 << '\n';
     break;
     default:
     std::cout << 5 << '\n';
     break;
    }
}
```

## c)
### X С ошибками
```
const int size = 5;
void Func(int ptr, int size) { //надо * перед ptr
 for (int i = 0; i < size; ++i)
//чтобы первому элементу массива присвоить значение 5,
// строку *ptr = 5; надо над cout << ptr[i];
//для увеличения следующих элементов кратно первому, 
// надо писать ptr[i+1]=*ptr+ptr[i]; вместо cout << *ptr++;
 std::cout << ptr[i] << '\n';  
 ptr = 5;                      //надо * перед ptr
 std::cout << '\n';
 for (int i = 0; i < size; ++i)
//чтобы первому элементу массива присвоить значение 55,
// строку *ptr = 55; надо над cout << *ptr++;
//для увеличения следующих элементов кратно первому, 
// надо писать ptr[i+1]=*ptr+ptr[i]; вместо cout << *ptr++;
/*такой вариант приведет к выводу *ptr из 1-го цикла,
*если он не закомментирован. Если закомментирован,
*то выведется 1-й элемент массива из int main, а остальные
* элементы все будут равны значению *ptr из этого цикла*/
 std::cout << *ptr++ << '\n';  
 *ptr = 55; 
 std::cout << '\n';
}

int main() {
 int array[];
 Func(array, size);
//лишние строки, будет повторный вывод 2-го  цикла
 for (int i = 0; i < size; ++i)
 std::cout << array[i] << '\n';
}

```

### V Исправленый
```
const int size = 5;
void Func(int *ptr, int size) { 
 for (int i = 0; i < size; ++i)
 {
     *ptr = 5;
     ptr[i+1]=*ptr+ptr[i];
     std::cout << ptr[i] << '\n';
 } // вывод элементов масива в цикле
  // первому элементу массива присваиваем значение 5
 std::cout << '\n';
 for (int i = 0; i < size; ++i)
 {
     *ptr = 55;
     ptr[i+1]=*ptr+ptr[i];
     std::cout << ptr[i] << '\n';
 }// вывод элементов масива в цикле
  // первому элементу массива присваиваем значение 55
 std::cout << '\n';
}

int main() {
    int array[size]{10,20,30,40,50};
 Func(array, size); 
}
```
