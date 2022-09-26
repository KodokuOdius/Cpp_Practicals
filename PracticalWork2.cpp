#include <iostream>
#include <Windows.h>
#include <conio.h>

// 6.6
// Дано число A. Вычислить A15, используя две вспомогательные
// переменные и пять операций умножения. Для этого последовательно
// находить A2, A3, A5, A10, A15. Вывести все найденные степени числа A.

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));
    cout << "*******************************" << endl;
    cout << "** Вычисление степеней числа **" << endl;
    cout << "*******************************" << endl;
    SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
    
    int A;
    cout << "Введите число A:" << endl;
    cin >> A;
    
    int A2 = A * A;
    int A3 = A2 * A;
    int A5 = A3 * A2;
    int A10 = A5 * A5;
    int A15 = A10 * A15;
    
    cout << "A 2 степень = " << A2 << endl;
    cout << "A 3 степень = " << A3 << endl;
    cout << "A 5 степень = " << A5 << endl;
    cout << "A 10 степень = " << A10 << endl;
    cout << "A 15 степень = " << A15 << endl;
    cout << endl;
    
    _getch();
    return 0;
}
