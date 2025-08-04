#include <cmath>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
sDisplay = ""; // clear value
cAction = ' '; // clear
sValue1 = sValue2 ="";

connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(pushButton_clicked())); /* связываем слот с сигналом кнопки 1 */
connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(pushButton_2_clicked())); //2
connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(pushButton_3_clicked())); //3
connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(pushButton_4_clicked())); //4
connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(pushButton_5_clicked())); //5
connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(pushButton_6_clicked())); //6
connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(pushButton_7_clicked())); //7
connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(pushButton_8_clicked())); //8
connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(pushButton_9_clicked())); //9
connect(ui->pushButton_10, SIGNAL(clicked()), this, SLOT(pushButton_10_clicked())); //0
connect(ui->pushButton_11, SIGNAL(clicked()), this, SLOT(pushButton_11_clicked())); //CL
connect(ui->pushButton_12, SIGNAL(clicked()), this, SLOT(pushButton_12_clicked())); //=
connect(ui->pushButton_13, SIGNAL(clicked()), this, SLOT(pushButton_13_clicked())); //+
connect(ui->pushButton_14, SIGNAL(clicked()), this, SLOT(pushButton_14_clicked())); //-
connect(ui->pushButton_15, SIGNAL(clicked()), this, SLOT(pushButton_15_clicked())); //\*
connect(ui->pushButton_16, SIGNAL(clicked()), this, SLOT(pushButton_16_clicked())); //\/
connect(ui->pushButton_17, SIGNAL(clicked()), this, SLOT(pushButton_17_clicked())); //V
connect(ui->pushButton_18, SIGNAL(clicked()), this, SLOT(pushButton_18_clicked())); //^
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::pushButton_12_clicked()
{
 double dValue1 = sValue1.toDouble(); // преобразуем строку в double
 double dValue2 = sValue2.toDouble(); // преобразуем строку в double
 double dResult = 0;
 // выявляем какую операцию необходимо выполнить
 if (cAction == '+')
 {
 dResult = dValue1 + dValue2;
 }
 if (cAction == '-')
 {
 dResult = dValue1 - dValue2;
 }
 if (cAction == '*')
 {
 dResult = dValue1 * dValue2;
 }
 if (cAction == '/')
 {
 dResult = dValue1 / dValue2;
 }
 if (cAction == 'V')
 {
 dResult = std::sqrt(dValue1);
 }
 if (cAction == '^')
 {
 dResult = std::pow(dValue1, dValue2);
 }
 sDisplay += "=" + QString::number(dResult); // добавляем в строку символ "=" и результат
 ui->lineEdit->setText(sDisplay); // выводим текст с полученным результатом
}
void MainWindow::pushButton_clicked()
{
 sDisplay += "1";
 sValue2 += "1"; //
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_2_clicked()
{
 sDisplay += "2";
 sValue2 += "2";
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_3_clicked()
{
 sDisplay += "3";
 sValue2 += "3"; //
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_4_clicked()
{
 sDisplay += "4";
 sValue2 += "4";
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_5_clicked()
{
 sDisplay += "5";
 sValue2 += "5"; //
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_6_clicked()
{
 sDisplay += "6";
 sValue2 += "6";
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_7_clicked()
{
 sDisplay += "7";
 sValue2 += "7"; //
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_8_clicked()
{
 sDisplay += "8";
 sValue2 += "8";
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_9_clicked()
{
 sDisplay += "9";
 sValue2 += "9"; //
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_10_clicked()
{
 sDisplay += "0";
 sValue2 += "0";
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_13_clicked()
{
 cAction = '+'; // устанавливаем символ операции +
 sValue1 = sDisplay; // сохраняем первую переменную
 sDisplay += "+";
 sValue2 = "";
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_14_clicked()
{
 cAction = '-'; // устанавливаем символ операции -
 sValue1 = sDisplay;
 sDisplay += "-";
 sValue2 = "";
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_15_clicked()
{
 cAction = '*'; // устанавливаем символ операции +
 sValue1 = sDisplay; // сохраняем первую переменную
 sDisplay += "*";
 sValue2 = "";
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_16_clicked()
{
 cAction = '/'; // устанавливаем символ операции -
 sValue1 = sDisplay;
 sDisplay += "/";
 sValue2 = "";
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_17_clicked()
{
 cAction = 'V'; // устанавливаем символ операции +
 sValue1 = sDisplay; // сохраняем первую переменную
 sDisplay += "V";
 sValue2 = "";
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_18_clicked()
{
 cAction = '^'; // устанавливаем символ операции -
 sValue1 = sDisplay;
 sDisplay += "^";
 sValue2 = "";
 ui->lineEdit->setText(sDisplay); // вывод строки в окно ввода (lineEdit)
}
void MainWindow::pushButton_11_clicked()
 {
 sDisplay = ""; //clear value
 ui->lineEdit->setText(""); // clear окно ввода (lineEdit)
 sValue1 = ""; //clear value
 sValue2 = ""; //clear value
 }
