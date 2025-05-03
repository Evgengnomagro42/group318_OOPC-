/*
* Лабораторная работа No 2
* Тема: 
*
* Developer: Марков Евгений Сергеевич
* OS: Windows
* locale (кодировка): IBM 866
*/
#include <iostream>
#include <cmath>
#include <climits>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main() {
#if 0
Задание 1 - Калькулятор веса
#endif
    cout << "Задание 1 - Калькулятор веса \n";
    cout << "Введите возраст, полных лет, целое число: \n";
    short age;
    cin >> age;
    cout << "Введите вес, кг: \n";
    float ves;
    cin >> ves;
    cout << "Введите рост в метрах (м,см): \n";
    float rost ;
    cin >> rost;
    float index = ves/pow(rost, 2);
    cout << "Если мужчина, введите 1, женщина - 0 \n";
    short pol;
    cin >> pol;
    cout << "Выберите метод и введите его код:\n\
формула Брока - введите 2, \n\
индекс массы тела (ИМТ) для М и Ж - введите 3, \n\
ИМТ для М и Ж с учётом возраста - введите 4, \n
если хотите увидеть результаты всех методов - введите 5\n";
    short kod;
    cin >> kod;
    if (kod==2 || kod==5){
      if (pol==1){
         int ideal_ves = (((rost*100)-100)*0.9);
        cout << "Оптимальный вес - формула Брока, кг: " <<
        ideal_ves << endl;
    } else if (pol==0) {
          int ideal_ves = (((rost*100)-100)*0.85);
          cout << "Оптимальный вес - формула Брока, кг: " <<
          ideal_ves << endl;
    }
  } else if (kod==3 || kod==5) {
        if ((pol==1) || (pol==0)){
    if (index <16.0) {
        cout << "Выраженный дефицит массы, \n"
        "Ваш нынешний ИМТ: " << index << endl;
    } else if (index>16.0 && index<18.5) {
        cout << "Недостаточная (дефицит) масса тела, \n"
    "Ваш нынешний ИМТ: " << index << endl;
    } else if (index>18.5 && index<25.0) {
        cout << "Норма. Ваш нынешний ИМТ: " << index << endl;
    } else if (index>25 && index<30) {
        cout << "Избыточная масса тела (предожирение) \n"
        "Ваш нынешний ИМТ: " << index << endl;
    } else if (index>30 && index<35) {
        cout << "Ожирение первой степени \n"
        "Ваш нынешний ИМТ: " << index << endl;
    } else if (index>35 && index<40) {
        cout << "Ожирение второй степени \n"
        "Ваш нынешний ИМТ: " << index << endl;
    } else if (index>40) {
        cout << "Ожирение третьей степени (морбидное) \n"
        "Ваш нынешний ИМТ: " << index << endl;
        }
      }
    } else if (kod==4 || kod==5) {
        if (pol==1) {
          if (age >19 && age<=25) {
          cout << "Норма ИМТ = 21,4 \n"
          "Ваш нынешний ИМТ: " << index << endl;
    } else if (age >25 && age<=35) {
        cout << "Норма ИМТ = 21,6 \n"
        "Ваш нынешний ИМТ: " << index << endl;
    } else if (age >35 && age<=45) {
        cout << "Норма ИМТ = 22,9 \n"
        "Ваш нынешний ИМТ: " << index << endl;
    } else if (age >45 && age<=55) {
        cout << "Норма ИМТ = 25,8 \n"
        "Ваш нынешний ИМТ: " << index << endl;
    } else if (age >55) {
        cout << "Норма ИМТ = 26,6 \n"
        "Ваш нынешний ИМТ: " << index << endl;
      }
    }
  } else if (kod==4 || kod==5) {
      if (pol==0){
        if (age >19 && age<=25) {
          cout << "Норма ИМТ = 19,5 \n"
          "Ваш нынешний ИМТ: " << index << endl;
    } else if (age >25 && age<=35) {
        cout << "Норма ИМТ = 23,2 \n"
        "Ваш нынешний ИМТ: " << index << endl;
    } else if (age >35 && age<=45) {
            cout << "Норма ИМТ = 23,4 \n"
            "Ваш нынешний ИМТ: " << index << endl;
    } else if (age >45 && age<=55) {
        cout << "Норма ИМТ = 25,2 \n"
        "Ваш нынешний ИМТ: " << index << endl;
    } else if (age >55) {
        cout << "Норма ИМТ = 27,3 \n"
        "Ваш нынешний ИМТ: " << index << endl;
        }
      }
   } else if (kod==5){
      if (index <16.0) {
        cout << "Выраженный дефицит массы, \n"
        "Ваш нынешний ИМТ: " << index << endl;
    } else if (index>16.0 && index<18.5) {
      cout << "Недостаточная (дефицит) масса тела, \n"
      "Ваш нынешний ИМТ: " << index << endl;
    } else if (index>18.5 && index<25.0) {
      cout << "Норма. Ваш нынешний ИМТ: " << index << endl;
    } else if (index>25 && index<30) {
      cout << "Избыточная масса тела (предожирение) \n"
      "Ваш нынешний ИМТ: " << index << endl;
    } else if (index>30 && index<35) {
      cout << "Ожирение первой степени \n"
      "Ваш нынешний ИМТ: " << index << endl;
    } else if (index>35 && index<40) {
      cout << "Ожирение второй степени \n"
      "Ваш нынешний ИМТ: " << index << endl;
    } else if (index>40) {
      cout << "Ожирение третьей степени (морбидное) \n"
      "Ваш нынешний ИМТ: " << index << endl;
    }
      if (pol==1){
        cout << "Оптимальный вес - формула Брока, кг: " <<
        (((rost*100)-100)*0.9) << '\n';
      if (age >19 && age<=25) {
         cout << "Норма ИМТ = 21,4 \n"
         "Ваш нынешний ИМТ: " << index << endl;
    } else if (age >25 && age<=35) {
      cout << "Норма ИМТ = 21,6 \n"
      "Ваш нынешний ИМТ: " << index << endl;
    } else if (age >35 && age<=45) {
      cout << "Норма ИМТ = 22,9 \n"
      "Ваш нынешний ИМТ: " << index << endl;
    } else if (age >45 && age<=55) {
      cout << "Норма ИМТ = 25,8 \n"
      "Ваш нынешний ИМТ: " << index << endl;
    } else if (age >55) {
      cout << "Норма ИМТ = 26,6 \n"
      "Ваш нынешний ИМТ: " << index << endl;
      }
    } else if (pol==0){
      cout << "Оптимальный вес - формула Брока, кг: " <<
      (((rost*100)-100)*0.85) << endl;
      if (age >19 && age<=25) {
        cout << "Норма ИМТ = 19,5 \n"
        "Ваш нынешний ИМТ: " << index << endl;
     } else if (age >25 && age<=35) {
       cout << "Норма ИМТ = 23,2 \n"
       "Ваш нынешний ИМТ: " << index << endl;
     } else if (age >35 && age<=45) {
       cout << "Норма ИМТ = 23,4 \n"
       "Ваш нынешний ИМТ: " << index << endl;
     } else if (age >45 && age<=55) {
       cout << "Норма ИМТ = 25,2 \n"
       "Ваш нынешний ИМТ: " << index << endl;
     } else if (age >55) {
       cout << "Норма ИМТ = 27,3 \n"
       "Ваш нынешний ИМТ: " << index << endl;
        }
      }if (std::cin.fail()) { // если предыдущее извлечение оказалось неудачным,
std::cin.clear(); // то возвращаем cin в 'обычный' режим работы
std::cin.ignore(32767,'\n'); // и удаляем значения предыдущего ввода из входного буфера
}
else // если всё хорошо, то возвращаем a
break;
    }

#if 0
Задание 2 - Вывод размеров основных типов данных
Вывод данных по разным модификациям длины и размера
#endif        
    // вывод размеров основных типов данных
    cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
    cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
    cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes" << endl;
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    // вывод по разным модификациям длины и размера
    cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
    cout << "signed int:\t" << sizeof(signed int) << " bytes" << endl;
    cout << "unsigned int:\t" << sizeof(unsigned int) << " bytes" << endl;
    cout << "signed long:\t" << sizeof(signed long) << " bytes" << endl;
    cout << "unsigned long:\t" << sizeof(unsigned long) << " bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes" << endl;
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    cout << "long double:\t" << sizeof(long double) << " bytes" << endl;
    //вывод наименьшего и наибольшего чисел диапазона
     cout << "Наименьшее число char : \n" <<
    static_cast<int>(numeric_limits<char>::min()) << '\n';
     cout << "Наибольшее число char : \n" <<
    static_cast<int>(numeric_limits<char>::max()) << '\n';
     cout << "Наименьшее число short : \n" << 
     numeric_limits <short>::min()<< '\n';
     cout << "Наибольшее число short : \n" <<
    numeric_limits <short>::max() << '\n';   
    cout << "Наименьшее число signed int : \n" << 
    numeric_limits<signed>::min() << '\n';
     cout << "Наибольшее число signed int : \n" <<
    numeric_limits<signed>::max() << '\n';
    cout << "Наименьшее число unsigned int : \n" << 
    numeric_limits<unsigned>::min() << '\n';
    cout << "Наибольшее число unsigned int : \n" <<
    numeric_limits<unsigned>::max() << '\n';
     cout << "Наименьшее число long long int : \n" << 
    numeric_limits<long long>::min() << '\n';
     cout << "Наибольшее число long long int : \n" <<
    numeric_limits<long long>::max() << '\n';
    cout<<"Наименьшее число float \n: "<<numeric_limits<float>::lowest()<<'\n';
    cout <<"Наибольшее число float \n: "<<numeric_limits<float>::max()<<'\n';
    cout<<"Наименьшее число double \n: "<<numeric_limits<double>::lowest()<<'\n';
    cout<<"Наибольшее число double \n: "<<numeric_limits<double>::max()<<'\n';
    //Вывод пределов диапазона
     cout << "Числовой диапазон в 10-м формате" << "\n";
    cout << "Числовой диапазон char: от "<<
    static_cast<int>(numeric_limits<char>::min())<<
    " до "<<static_cast<int>(numeric_limits<char>::max())<<" ;\n";
    cout << "Числовой диапазон short int: от " <<
    numeric_limits <short>::min() <<
    " до " << numeric_limits <short>::max() << " ;\n";
    cout << "Числовой диапазон signed int: от " <<
    numeric_limits<signed int>::min() <<
    " до " << numeric_limits<signed int>::max() << " ;\n";
    cout << "Числовой диапазон unsigned int: от " <<
    numeric_limits<unsigned>::min() <<
    " до " << numeric_limits<unsigned>::max() << " ;\n";
    cout << "Числовой диапазон long long int: от " <<
    numeric_limits<long long>::min() << " до " <<
    numeric_limits<long long>::max()<<" .\n\n";

    %с Символ типа char
%d Десятичное число целого типа со знаком
%i Десятичное число целого типа со знаком
%f Десятичное число с плавающей точкой
%g Использует код %е или %f — тот из них, который короче (при использовании %g используется е
нижнего регистра)
%G Использует код %Е или %f — тот из них, который короче (при использовании %G используется
Е верхнего регистра)
%о Восьмеричное целое число без знака
%s Строка символов
%u Десятичное число целого типа без знака
%х Шестнадцатиричное целое число без знака (буквы нижнего регистра)
%Х Шестнадцатиричное целое число без знака (буквы верхнего регистра)
%р Выводит на экран значение указателя
%n Ассоциированный аргумент — это указатель на переменную целого типа, в которую помещено
количество символов, записанных на данный момент

     //Организуйте вывод числового диапазона типов данных в hex, dec, bin (хотя бы пять типов):
cout.unsetf(ios::dec);//8-naya
cout.setf(ios::oct);
cout << "Числовой диапазон в 8-м формате" << "\n";
cout << "Числовой диапазон char: от "<<
static_cast<int>(numeric_limits<char>::min())<<
" до "<<static_cast<int>(numeric_limits<char>::max())<<" ;\n";
cout << "Числовой диапазон short int: от " <<
numeric_limits <short>::min() <<
" до " << numeric_limits <short>::max() << " ;\n";
cout << "Числовой диапазон signed int: от " <<
numeric_limits<signed int>::min() <<
" до " << numeric_limits<signed int>::max() << " ;\n";
cout << "Числовой диапазон unsigned int: от " <<
numeric_limits<unsigned>::min() <<
" до " << numeric_limits<unsigned>::max() << " ;\n";
cout << "Числовой диапазон long long int: от " <<
numeric_limits<long long>::min() << " до " <<
numeric_limits<long long>::max() << " .\n\n";


cout.unsetf(ios::oct);// 16-naya
cout.setf(ios::hex);
cout << "Числовой диапазон в 16-м формате" << "\n";
cout << "Числовой диапазон char: от "<<
static_cast<int>(numeric_limits<char>::min())<<
" до "<<static_cast<int>(numeric_limits<char>::max())<<" ;\n";
cout << "Числовой диапазон short int: от " <<
numeric_limits <short>::min() <<
" до " << numeric_limits <short>::max() << " ;\n";
cout << "Числовой диапазон signed int: от " <<
numeric_limits<signed int>::min() <<
" до " << numeric_limits<signed int>::max() << " ;\n";
cout << "Числовой диапазон unsigned int: от " <<
numeric_limits<unsigned>::min() <<
" до " << numeric_limits<unsigned>::max() << " ;\n";
cout << "Числовой диапазон long long int: от " <<
numeric_limits<long long>::min() << " до " <<
numeric_limits<long long>::max() << " .\n\n";

cout << "Числовой диапазон в 2-м формате" << "\n";
cout.unsetf(ios::hex);
bitset<8> bits_1(static_cast<int>(numeric_limits<char>::min()));
cout << "Минимальное число char: \n" << bits_1 << '\n';
bitset<8> bits_2(static_cast<int>(numeric_limits<char>::max()));
cout << "Максимальное число char: \n" << bits_2 << "\n\n";
bitset<16> morebits_16_3(numeric_limits <short>::min());
cout << "Минимальное число short: \n" << morebits_16_3 << '\n';
bitset<16> morebits_16_4(numeric_limits <short>::max());
cout << "Максимальное число short: \n" << morebits_16_4 << "\n\n";
bitset<32> morebits_32_5(numeric_limits<signed>::min());
cout << "Минимальное число signed: \n" << morebits_32_5 << '\n';
bitset<32> morebits_32_6(numeric_limits<signed>::max());
cout << "Максимальное число signed: \n" << morebits_32_6 << "\n\n";
bitset<32> morebits_32_7(numeric_limits<unsigned>::min());
cout << "Минимальное число unsigned: \n" << morebits_32_7 << '\n';
bitset<32> morebits_32_8(numeric_limits<unsigned>::max());
cout << "Максимальное число unsigned: \n" << morebits_32_8 << "\n\n";
bitset<64> morebits_64_9(numeric_limits<long long>::min());
cout << "Минимальное число long long: \n" << morebits_64_9 << '\n';
bitset<64> morebits_64_10(numeric_limits<long long>::max());
cout << "Максимальное число long long: \n" << morebits_64_10 << '\n';
#endif

 
#if 0
cout << "Задание 3" << endl;
// Реализация задание 3 или Вызов функции задания 3
Задание должно предложить пользователю ввести 10 чисел с плавающей точкой, а потом
вывести на экран их среднее арифметическое, используя числа с плавающей точкой.
Среднее арифметическое ? это сумма нескольких слагаемых, разделённая на количество этих слагаемых.
    cout << "Задание 3" << endl;
    cout << "Введите дробные числа, с точкой (например, 1.2)" << '\n';
    float a, b, c, d, e, f, g, h, k, l;
    cin >> a;
    cout << "Вы ввели 1-е число, осталось ещё 9, " << a << '\n';
    cin >> b;
    cout << "Вы ввели 2-е число, осталось ещё 8, " << b << '\n';
    cin >> c;
    cout << "Вы ввели 3-е число, осталось ещё 7, " << c << '\n';
    cin >> d;
    cout << "Вы ввели 4-е число, осталось ещё 6, " << d << '\n';
    cin >> e;
    cout << "Вы ввели 5-е число, осталось ещё 5, " << e << '\n';
    cin >> f;
    cout << "Вы ввели 6-е число, осталось ещё 4, " << f << '\n';
    cin >> g;
    cout << "Вы ввели 7-е число, осталось ещё 3, " << g << '\n';
    cin >> h;
    cout << "Вы ввели 8-е число, осталось ещё 2, " << h << '\n';
    cin >> k;
    cout << "Вы ввели 9-е число, осталось ещё 1, " << k << '\n';
    cin >> l;
    cout << "Вы ввели 10-е число, " << l << '\n';
    cout << "Среднее арифметическое введённых чисел равно: " <<
    (a+b+c+d+e+f+g+h+k+l)/10 << '\n';
    if (cin.fail()) { // не считает преобразование\
        //неудачным при вводе char
    cin.clear();
    cout << "Ошибка ввода, введите числа снова"
    " после нового входа в программу \n";
    cin.ignore(32767, '\n');
    }
#endif


#if 0
cout << "Задание 4" << endl;
// Реализация задание 4 или Вызов функции задания 4
Задание должно переводить следующие числа из существующей записи в экспоненциальную
запись в стиле языка C++ (используя букву е, как символ экспонента). Определите, сколько
значащих цифр имеет каждое из следующих чисел, и выведите их на экран:
34.50 // 3.45e1
0.004000 // 4.0e-3
123.005 // 1.23005e2
146000 // 1.46e5
#endif
    double d1(34.50);   // 3 значащих числа
    double d2(0.004000);// 2 значащих числа
    double d3(123.005); /* 6 значащих чисел,
    * если нужна точность до тысячных.
    * 3 Значащих числа, если в мантиссе
    * достаточно только целых чисел */
    double d4(146000);  // 3 значащих числа
    cout << "d1:" << scientific << setprecision(2) << d1 << endl;
    cout << "d2:" << scientific << setprecision(1) << d2 << endl;
    cout << "d3:" << scientific << setprecision(5) << d3 << endl;
    cout << "d4:" << scientific << setprecision(2) << d4 << endl;
    cout << endl;
    /* Вывод другим способом, через флаг. Ускоряет
     * написание кода, но отбрасывает в мантиссе десятые, сотые и тд.
     * Допустимо, если не критично для точности расчётов. */
    cout.setf(ios::scientific);
    cout << "d1:" << d1 << endl;
    cout << "d2:" << d2 << endl;
    cout << "d3:" << d3 << endl;
    cout << "d4:" << d4 << endl;

cout << "Задание 5" << endl;
cout << "Задание 5.1" << endl;
1) Предположите результат следующих выражений теоретически:
    cout.setf(ios::boolalpha);
    cout << ((false && true) || true) << endl;         //true
    cout << ((false && true) || false || true) << endl;//true     
    cout << ((5 > 6 && 4 > 3) && (7 > 8)) << endl;     //false
    cout << (!(7 > 6 || 3 > 4)) << endl;               //false
    cout.unsetf(ios::boolalpha);
    cout << endl;
    cout << boolalpha << ((false && true) || true) << endl;
    cout << boolalpha << ((false && true) || false || true) << endl;
    cout << boolalpha << ((5 > 6 && 4 > 3) && (7 > 8)) << endl;
    cout << boolalpha << (!(7 > 6 || 3 > 4)) << endl;

2) Задайте 6 логических констант (с помощью const, constexpr, либо макросов) для пер-
вых трёх выражений. Для последнего выражения также задайте 6 целочисленных int констант в собственном целочисленном типе (с помощью enum).
Реализуйте вывод результатов следующих выражений, подставив в них Ваши константы
вместо пропусков (зелёных):
(( _ && _ ) || ( !_) && (_||_))
((_ &&_ ) || (_&&_) || (!_))
((_ || _) && (_ || _) && (_||_))
((_ >_) && (_<_) && (_!=_))
cout << "Задание 5.2" << endl;
bool const a = true;
    bool const b = false;
    bool const c = true;
    bool const d = false;
    bool const e = true;
    bool const f = false;

    enum SomeSymbol {
    A = 1,
    B = 2,
    C = 3,
    D = 4,
    E = 5,
    F = 0
    };

    cout.setf(ios::boolalpha);
    cout << "((a&&b) || (!c) && (d||e))" <<
    ((a&&b) || (!c) && (d||e)) << endl;
    cout << "((f&&a) || (b&&c) || (!d))" <<
    ((f&&a) || (b&&c) || (!d)) << endl;
    cout << "((e||f) && (a||b) && (c||d))" <<
    ((e||f) && (a||b) && (c||d)) << endl;
    cout << "((B>A) && (C<D) && (E!=F))" <<
    ((B>A) && (C<D) && (E!=F)) << endl;
     cout.unsetf(ios::boolalpha);
3) Проверьте правильность законов де Моргана на практике. Законы де Моргана в
текстовой записи имеют следующий вид:
не (a и b) = (не a) или (не b) !(a&&b) = (!a) || (!b)
не (a или b) = (не a) и (не b) !(a||b) = (!a) && (!b)
cout << "Задание 5.3" << endl;
bool a = true
bool b = false
bool  a = true;
    bool  b = false;
    cout.setf(ios::boolalpha);
    cout << " Сравним Выражение 1: (!(a&&b))" << (!(a&&b)) << endl;
    cout << " и Выражение 2:((!a) || (!b))" << ((!a) || (!b)) << endl;
    cout << "Ответы совпадают, этот закон де Моргана доказан" << endl;
    cout << "Сравним Выражение 3:(!(a||b)) " << (!(a||b)) << endl;
    cout << " и Выражение 4:((!a) && (!b))" << ((!a) && (!b)) << endl;
    cout << "Ответы совпадают, этот закон де Моргана доказан" << endl;
    cout.unsetf(ios::boolalpha);
    
Задайте две логические переменные a и b и реализуйте программу, которая доказывает
равенство левой и правой частей в первом и во втором законе де Моргана.
4) Реализуйте ввод целочисленных переменных x, y, z, v через консоль. Также заготовьте
логическую переменную logicValue. Вам предстоит реализовать следующие выражения.
1. x = 3 + 4 + 5; //12
2. x = y = z; y = 12,// z = 12
3. z *= ++y + 5;// z = (12*(12+1))+5 = 171
4. logicValue = x || y && z || v;// или14 и13 или14, л п, те y!=z
При реализации в комментариях к каждому выражению кратко поясните, что делает
каждая операция. После выполнения выражения 1, 2, 3 необходимо вывести в консоль
значения трёх переменных: x, y, z (т.е. 3 раза). После выполнения выражения 4 необходимо
вывести в консоль значение переменной logicValue.
Вопрос по выражению 4: какие значения должны иметь переменные x, y, z, v, чтобы
переменная logicValue приняла значение false? Ответ на этот вопрос можно оставить в
комментарии к коду, либо сказать во время защиты.
cout << "Задание 5.4" << endl;
short x, y, z, v;
    x = 3 + 4 + 5; //12
    // х = сумме 3, 4 и 5
    cout << "x= " << x << "\n\n";
    // "\v" почему-то не помогло вывести х=2 с пробелом
    // от ответа в первом выражении
    x = y = z;
    /* x, y, z получат случайное значение
    * из буфера обмена
    * так как y и z в данном выражении
    * не инициализированы.
    * Если надо придать получившееся значение (х=12)
    * переменным y и z, то выражение надо писать так:
    * z = y = х, чтобы переменная с нужным значением
    * была в выражении справа, проверял выводом в консоль.
    * Тогда в следующем выражении у=13, а не 3, z=216, а не 8*/
    cout << "x= " << x << "\n" <<
    "y= " << y << "\n" <<
    "z= " << z << "\n" << "\v";
    z *= ++y + 5;
    /*  первоначальное значение (у=2)
     * умножается на выражение
     * (инкремент у+5, (то есть, 3
     * (первоначальное значение (у=2)+1)) + 5,
     *  в итоге 8), z=16*/
    cout << "x= " << x << "\n" <<
    "y= " << y << "\n" <<
    "z= " << z << "\v" << endl;
    cin >> v;
    auto logicValue = ((x||y) && (z||v));
    cout << "logicValue= " <<boolalpha << logicValue << endl;
    /* Какой должна быть переменная v,
     * чтобы logicValue = false, не представляю,
     * так как не понимаю логики выражения ((x||y) && (z||v))*/

5) Напишите программу, которая просит пользователя ввести число в диапазоне от 0 до
2^n, где n=4, затем просит пользователя ввести число на которое необходимо сдвинуть число
влево.
Результат вывести: в десятичном , в бинарном виде, 16-м виде, 8-м виде.
 cout << "Задание 5.5" << endl; 
cout.unsetf(ios::dec); /*Вывод величин в восьмеричной
*системе счисления (для этого нужно
*снять флаг вывод в десятичной)*/
  cout.unsetf(ios::dec);//8-naya
cout.setf(ios::oct);
cout << "Числовой диапазон в 8-м формате" << "\n";
cout << "Числовой диапазон char: от "<<
static_cast<int>(numeric_limits<char>::min())<<
" до "<<static_cast<int>(numeric_limits<char>::max())<<" ;\n";
cout << "Числовой диапазон short int: от " <<
numeric_limits <short>::min() <<
" до " << numeric_limits <short>::max() << " ;\n";
cout << "Числовой диапазон signed int: от " <<
numeric_limits<signed>::min() <<
" до " << numeric_limits<signed>::max() << " ;\n";
cout << "Числовой диапазон unsigned int: от " <<
numeric_limits<unsigned>::min() <<
" до " << numeric_limits<unsigned>::max() << " ;\n";
cout << "Числовой диапазон long long int: от " <<
numeric_limits<long long>::min() << " до " <<
numeric_limits<long long>::max() << " .\n\n";

cout.unsetf(ios::oct);// 16-naya
cout.setf(ios::hex);
cout << "Числовой диапазон в 16-м формате" << "\n";
cout << "Числовой диапазон char: от "<<
static_cast<int>(numeric_limits<char>::min())<<
" до "<<static_cast<int>(numeric_limits<char>::max())<<" ;\n";
cout << "Числовой диапазон short int: от " <<
numeric_limits <short>::min() <<
" до " << numeric_limits <short>::max() << " ;\n";
cout << "Числовой диапазон signed int: от " <<
numeric_limits<signed>::min() <<
" до " << numeric_limits<signed>::max() << " ;\n";
cout << "Числовой диапазон unsigned int: от " <<
numeric_limits<unsigned>::min() <<
" до " << numeric_limits<unsigned>::max() << " ;\n";
cout << "Числовой диапазон long long int: от " <<
numeric_limits<long long>::min() << " до " <<
numeric_limits<long long>::max() << " .\n\n";

    char c [37] = "Вывод пределов диапазона в printf \n\n";
    printf ("%s", c);
    char h [33] = "Числовой диапазон в 8-м формате\n";
    printf ("%s", h);
    char k1[34] = "Числовой диапазон short int: \nот ";
    short t1 = numeric_limits<short>::min();
    char k2[5] = " до ";
    short t2 = numeric_limits<short>::max();
    printf ("%s%xd%s%xd",k1,t1,k2,t2);
    char u [36] = "\n\nЧисловой диапазон в 16-м формате\n";
    printf ("%s", u);
    char s1[34] = "Числовой диапазон short int: \nот ";
    short d1 = numeric_limits<short>::min();
    char s2[5] = " до ";
    short d2 = numeric_limits<short>::max();
    printf ("%s%xd%s%xd",s1,d1,s2,d2);
    char s3[31] = "\nЧисловой диапазон float: \nот ";
    float d3 = numeric_limits<float>::min();
    char s4[5] = " до ";
    float d4 = numeric_limits<float>::max();
    printf ("%s%ad%s%%ad",s3,d3,s4,d4);

    cout << "Числовой диапазон в 2-м формате" << "\n";
    cout.unsetf(ios::hex);
    bitset<8> bits_1(static_cast<int>(numeric_limits<char>::min()));
    cout << "Минимальное число char: \n" << bits_1 << '\n';
    bitset<8> bits_2(static_cast<int>(numeric_limits<char>::max()));
    cout << "Максимальное число char: \n" << bits_2 << "\n\n";
    bitset<16> morebits_16_3(numeric_limits <short>::min());
    cout << "Минимальное число short: \n" << morebits_16_3 << '\n';
    bitset<16> morebits_16_4(numeric_limits <short>::max());
    cout << "Максимальное число short: \n" << morebits_16_4 << "\n\n";
    bitset<32> morebits_32_5(numeric_limits<signed>::min());
    cout << "Минимальное число signed: \n" << morebits_32_5 << '\n';
    bitset<32> morebits_32_6(numeric_limits<signed>::max());
    cout << "Максимальное число signed: \n" << morebits_32_6 << "\n\n";
    bitset<32> morebits_32_7(numeric_limits<unsigned>::min());
    cout << "Минимальное число unsigned: \n" << morebits_32_7 << '\n';
    bitset<32> morebits_32_8(numeric_limits<unsigned>::max());
    cout << "Максимальное число unsigned: \n" << morebits_32_8 << "\n\n";
    bitset<64> morebits_64_9(numeric_limits<long long>::min());
    cout << "Минимальное число long long: \n" << morebits_64_9 << '\n';
    bitset<64> morebits_64_10(numeric_limits<long long>::max());
    cout << "Максимальное число long long: \n" << morebits_64_10 << '\n';
#endif

6) Реализуйте вывод приоритета выражений и ассоциативности:
cout << "Задание 5.6" << endl;
int res1 = a + b * 1 – 128/5;
    /* 1) b*1
     * 2) 128/5
     * 3) a+(результат (b*1))
     * 4) (a+(результат (b*1)))-(результат (128/5)) */     
    int res2 = a | b >> 1;
    /* 1) b >> 1
     * 2) a|b */
    int res3 = a /b* k;
    /* 1) a/b
     * 2) (результат(a/b))*k

Дополнительно:
/*Задание 1.
*Реализуйте калькулятор.
*«V» как символ операции «извлечь квадратный корень» использовал как из-за отсутствия *специального знака этой операции на клавиатуре, так и благодаря тому, что тип char *поддерживает буквенные символы*/
  {
  cout << "Введите целое число или десятичную дробь: ";
  double a;
  while (true) {/*цикл продолжается до тех пор, пока пользователь
                * не введет корректное значение */
  cout << "Введите целое число или десятичную дробь: ";
  cin >> a;
  if (cin.fail()) { // если предыдущее извлечение оказалось неудачным,
    cin.clear(); // то возвращаем cin в 'обычный' режим работы
    cin.ignore(32767,'\n');// и удалим предыдущий ввод из входного буфера
    cout << "Ошибка при  вводе. Удалите неправильный ввод";
    }
  else // если всё хорошо, то возвращаем a
  break;
  }
  char sm;
  while (true) {/*цикл продолжается до тех пор, пока пользователь
                * не введет корректное значение */
    cout << "Введите действие: +, -, *, /, ^, V: ";
    cin >> sm;
    if (cin.fail()) { // если предыдущее извлечение оказалось неудачным,
    cin.clear(); // то возвращаем cin в 'обычный' режим работы
    cin.ignore(32767,'\n');// и удалим предыдущий ввод из входного буфера
    cout << "Ошибка при  вводе. Удалите неправильный ввод";
    }
  else // если всё хорошо, то возвращаем sm
  break;
  }
  cout << "Введите целое число или десятичную дробь: ";
  double b;
  while (true) {/*цикл продолжается до тех пор, пока пользователь
                * не введет корректное значение */
  cout << "Введите целое число или десятичную дробь, \n"
          "если извлекаете квадратный корень, то \n"
          "больше ничего не вводите: ";
    cin >> b;
    if (cin.fail()) { // если предыдущее извлечение оказалось неудачным,
    cin.clear(); // то возвращаем cin в 'обычный' режим работы
    cin.ignore(32767,'\n');// и удалим предыдущий ввод из входного буфера
    cout << "Ошибка при  вводе. Удалите неправильный ввод";
    }
  else // если всё хорошо, то возвращаем b
  break;
  }
  if (sm == '+')
    cout << a << " + " << b << " is " << a + b << '\n';
  else if (sm == '-')
    cout << a << " - " << b << " is " << a - b << '\n';
  else if (sm == '*')
    cout << a << " * " << b << " is " << a * b << '\n';
  else if (sm == '/')
    cout << a << " / " << b << " is " << a / b << '\n';
  else if (sm == '^')
    cout << a << " ^ " << b << " is " << pow(a, b) << '\n';
  else if (sm == 'V')
    cout << a << " V is " << sqrt(a) << '\n';
    }
  }




