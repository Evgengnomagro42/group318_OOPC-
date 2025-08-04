#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
 void pushButton_clicked(); /* слот кнопки 1 */
 void pushButton_2_clicked(); /* слот кнопки 2 */
 void pushButton_3_clicked(); /* слот кнопки 3 */
 void pushButton_4_clicked(); /* слот кнопки 4 */
 void pushButton_5_clicked(); /* слот кнопки 5 */
 void pushButton_6_clicked(); /* слот кнопки 6 */
 void pushButton_7_clicked(); /* слот кнопки 7 */
 void pushButton_8_clicked(); /* слот кнопки 8 */
 void pushButton_9_clicked(); /* слот кнопки 9 */
 void pushButton_10_clicked(); /* слот кнопки 10 */
 void pushButton_11_clicked(); /* слот кнопки CL */
 void pushButton_12_clicked(); /* слот кнопки = */
 void pushButton_13_clicked(); /* слот кнопки + */
 void pushButton_14_clicked(); /* слот кнопки - */
 void pushButton_15_clicked(); /* слот кнопки * */
 void pushButton_16_clicked(); /* слот кнопки / */
 void pushButton_17_clicked(); /* слот кнопки V */
 void pushButton_18_clicked(); /* слот кнопки ^ */

private:
 Ui::MainWindow *ui;
 QString sDisplay; // переменная типа QString для хранения строки вывода
 QString sValue1, sValue2;
 char cAction; // переменная для хранения вычисленияоперации вычисления
};
#endif // MAINWINDOW_H
