3.1 Что выводят программы, если есть ошибки исправьте их:
а) 
# X код с ошибками
int return 5(){  // надо без пробела или с _
 return 5        // надо ;
}
int return8(){
 return;         //не указано, что надо вернуть
}
int main( {      //нужна )
 std::cout << return5() + return8() << ; //нужен std::endl или '\n'
 return 0        // надо ;
}
# V код с исправлениями
int return5(){ 
 return 5;
}
int return8(){
 return 8;
}
int main() {
 std::cout << return5() + return8() << endl;
 return 0;
}

b) 
# X код с ошибками
int return() { // ключевое слово С++ нельзя брать для имени функции
 return 5;     //надо }
 int return()  // ключевое слово С++ нельзя брать для имени функции
 {
 int k ;
 k{3};         //Qt пишет expected ';' after expression
 return k;
 }
}              //лишняя }
int main(){
 std::cout << return() << //нужен std::endl или '\n'
 std::cout << return() << //нужен std::endl или '\n' и изменить имя функции
}
# V код с исправлениями
 int return_5() {
 return 5;      
 }
 int return_k()    
 {
 int k ;
 k{3};
 return k;
 }
 int main(){
 std::cout << return_5() << endl;
 std::cout << return_k() << endl; 
}

c)
# X код с ошибками
void prints
()
{
 std::cout << 'O_o' << ;  //нужен std::endl или '\n'
                          // надо " " вместо ' '
}
int main ()
{
 std::cout << prints() << //std::cout << и << не нужен
                          // в конце строки надо ;
 return 0;
}
# V код с исправлениями
void prints
()
{
 std::cout << "O_o" << '\n';
}
int main ()
{
 prints();
 return 0;
}

d)
# X код с ошибками
int getNumbers()
{
 return 6;
 return;   // функция может вернуть только одно значение
}
int main()
{
 std::cout << getNumbers( // надо ) и std::endl или '\n' или '\t' и ;
 std::cout << getNumbers) // надо ( и std::endl или '\n' или '\t' и ;
 std::cout << getNumbers  // надо () и std::endl или '\n' или '\t' и ;
 return 0;
}
# V код с исправлениями
int getNumbers()
{
 return 6;
}
int main()
{
 std::cout << getNumbers() << '\n';
 std::cout << getNumbers() << '\n';
 std::cout << getNumbers() << '\n';
 return 0;
}

e)
# X код с ошибками
int main()          // в файле должен быть только один вызов int main()
                    /* вызов multiply в int main() до её объявления,
                    * файл не скомпилируется */
{
 std::cout << multiply(7, 8) // надо std::endl или '\n' или '\t' и ;
 return 0;
}
void multiply(int a) // не совпадает количество параметров в объявлении и определении функции
{
 return a * b        /* функция void ничего не возвращает, пишется без return.
                     * Надо поменять тип функции на тот же тип данных, что у 
                     * параметров. Или написать std::cout << a*b << std::endl; */
                     // в конце строки надо ;
}
int main() {         /* вызов и ввод данных для аргументов multiply надо делать 
                     * здесь, после объявления, чтобы файл скомпилировался */
 int x;
 std::cin >> x;
 constexpr y(x);     /*constexpr нельзя инициализировать пользовательской переменной runtime,
                     * это переменная compiletime. Только сразу присвоить значение.
                     * В этом случае надо const вместо constexpr */
 std::cout << y << std::endl;
return 0;
}
# V код с исправлениями
int multiply (int a, int b)
{
 return a * b;
}
int main() {
 int x;
 std::cin >> x;
 const y(x);
 std::cout << y << std::endl;
 std::cout << multiply(7, 8) << '\n';
return 0;
}

f)
# X код с ошибками
#define VALUE //не присвоено значение, которым препроцессор заменит директиву
int main() {
#if (VALUE == 0)
 std::cout << VALUE <<"\n";
#elif (VALUE == 1)
 std::cout << VALUE <<"\n";
#                           // elif надо писать в той же строке, что и значок \#
elif                        // здесь должен быть #else
 std::cout << VALUE <<"\n";
                            // здесь должен быть #endif
}
# V код с исправлениями
#define VALUE 1 
int main() {
#if (VALUE == 0)
 std::cout << VALUE <<"\n";
#elif (VALUE == 1)
 std::cout << VALUE <<"\n";
# else
 std::cout << VALUE <<"\n";
#endif
}

g)
# X код с ошибками
namespace Mix {
enum class Fruits {
 LEMON,
 APPLE
}                     // надо ;
enum class Colors {
 RED,
 BLACK
}                     // надо ;
};                    // здесь не надо ;
int main() {
 Fruits fruit = Fruits::LEMON;  // не указан доступ к пространству имён Mix::
 std::cout << "MIX\n";    // выведется имя пространства имён вместо номера перечислителя
                          /* Если надо вывести название одного из перечислителей, то в 
                          * кавычках надо писать его, а не название пространства имён.
                          * Если надо вывести значение перечислителя, надо использовать
                          * static_cast< целочисленный тип данных>                            
 return 1;                // возвращать надо 0
}
# V код с исправлениями
namespace Mix {
enum class Fruits {
 LEMON,
 APPLE
};
enum class Colors {
 RED,
 BLACK
  };
}
int main() {
 Mix::Fruits fruit = Mix::Fruits::LEMON;                  
 std::cout << "MIX\n";                                 /*вывод имени пространства имён              
 std::cout << "LEMON\n";                               * вывод имени перечислителя
 cout << static_cast<int>(Mix::Fruits::LEMON) << '\n'; * вывод значения перечислителя
 cout << static_cast<int>(fruit) << '\n';              * вывод значения перечислителя */
 return 0;
}

h)
# X код с ошибками
namespace DoMath
{
 int subtract(int x, int y)
 {
 return x , y;        /* вернуть можно только одно значение
                      * или надо знак арифметического действия
                      * вместо , между х и у */       
 }
namespace DoMath       // лишнее использование имени DoMath  
{                      // лишняя {
 int add(int x, int y)
 {
 return x | y;
 }
}
}                      // лишняя }
auto main()            // не хватает -> int
{
 std::cout << DoMath::add(5, 4) << '\n';
 std::cout << ::subtract(5, 4) << '\n';  // не хватает DoMath
 return 0;
}
# V код с исправлениями
namespace DoMath
{
 int subtract(int x, int y)
 {
 return x * y;
 }
 int add(int x, int y)
 {
 return x | y;
 }
}
auto main() -> int
{
 std::cout << DoMath::add(5, 4) << '\n';
 std::cout << DoMath::subtract(5, 4) << '\n';
 return 0;
}

3.2 Чтобы программа cкомпилировалась нужно что-то добавить, нельзя удалять или
комментировать программный код:
# X код с ошибками
int tmp 1;
int main() {
tmp 3;             // не указан тип данных, надо = или () или {} для инициализации
 std::cout << "Чтобы программа скомпилилась нужно что-то добавить а нельзя удалять //нужен \
здесь пустые строки или                                                            //нужен \
комментировать   //нужны " 
<< std::endl;
 return;
int getNumbers( {  /* недопустимое вложение одной функции в другую, надо )
                  * после имени функции */ 
int tmp = 1;
 return;          /* не указано, что надо возвращать, окончание выполнения
                  программы здесь не имеет смысла */
}                 // количество { не совпадает с количеством }
int getNumbers() {
 int tmp = 1;
 return tmp;
}
# V код с исправлениями
int tmp = 1;
int getNumbers() {
 return tmp;
}
int main() {
int tmp (3);
 std::cout << " zzz \":)\" Чтобы программа скомпилилась нужно что-то добавить а нельзя удалять\n"
"здесь пустые строки или \n"
"комментировать"
<< std::endl;
 cout << "Глобальная переменная tmp: " << ::tmp  << '\n';
 cout << "Локальная переменная tmp: " << tmp  << '\n';
 return 0;
}             

Вывод приложения должен быть:
Глобальная переменная tmp: 1
Локальная переменная tmp: 3
zzz ":)" Чтобы программа скомпилилась нужно что-то добавить а нельзя удалять
здесь пустые строки или
комментировать!