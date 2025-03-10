#include <iostream>
#include <string>
using namespace std;

// Функция для ввода натурального числа X
int EnterNaturalNumber() 
{
    int X;
    cout << "Введите натуральное число X: ";
    cin >> X;
    return X;
}

// Функция для ввода цифры N (которая меньше числа разрядов числа X)
void EnterDigitN(int X) 
{

}

// Функция для вычисления произведения последних N цифр числа X
void ProductOfLastNDigits(int X, int N) 
{
    
}

// Функция для определения количества цифр в числе X
void CountDigits(int X) 
{
    
}

int main() {
    int choice;
    int X = 0, N = 0;

    do {
        cout << "Меню:" << endl;
        cout << "1. Ввести натуральное число X" << endl;
        cout << "2. Ввести цифру N (которая меньше числа разрядов числа X)" << endl;
        cout << "3. Определить произведение последних N цифр числа X" << endl;
        cout << "4. Определить количество цифр в числе X" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1:
                X = EnterNaturalNumber();
                break;
            case 2:
                if (X == 0) {
                    cout << "Сначала введите число X (пункт 1)." << endl;
                } else {
                    N = EnterDigitN(X);
                }
                break;
            case 3:
                if (X == 0 || N == 0) {
                    cout << "Сначала введите число X и цифру N (пункты 1 и 2)." << endl;
                } else {
                    ProductOfLastNDigits(X, N);
                }
                break;
            case 4:
                if (X == 0) {
                    cout << "Сначала введите число X (пункт 1)." << endl;
                } else {
                    CountDigits(X);
                }
                break;
            case 0:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    } while (choice != 0);

    return 0;
}