#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <cmath>
#define PI 3.1415926535897932846

using namespace std;


// 6.6.1 Вычислить объем и площадь поверхности куба.
// 6.6.2 Даны два круга с общим центром и радиусами R1 и R2 (R1 > R2).
// Найти площади этих кругов S1 = π·(R 21) и S2 = π·(R2)2, а также площадь кольца
// S3 = S1 − S2, внешний радиус которого равен R1, а внутренний радиус равен R2.


int main()
{
    setlocale(LC_ALL, "rus");
    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));
    cout << "*******************************" << endl;
    cout << "** Вычисление степеней числа **" << endl;
    cout << "*******************************" << endl;
    // SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
    
    int cudeSize;
    
    cout << "Задание 1: Введите длину сторону куба:" << endl;
    cin >> cudeSize;
    cout << "Объем куба = " << pow(cudeSize, 3) << endl;
    cout << "Площадь поверхности куба = " << pow(cudeSize, 2) * 6 << endl << endl;
    
    
    int R1, R2;
    
    while (true) {
        cout << "Задание 2(R1 < R2): Введите радиус первого круга(R1):" << endl;
        cin >> R1;
        cout << "Введите радиус второго круга(R2):" << endl;
        cin >> R2;
        if (R1 > R2) {break;};
        cout << "Введены не правильные данные" << endl << endl;
    }
    
    cout << "Площадь первого(R1) круга = " << PI * pow(R1, 2) << endl;
    cout << "Площадь второго(R2) круга = " << PI * pow(R2, 2) << endl;
    cout << "Площадь кольца = " << PI * pow(R1 - R2, 2) << endl;
    cout << endl;
    
    _getch();
    return 0;
}
