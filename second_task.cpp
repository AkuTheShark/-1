#include <iostream>
using namespace std;

int main()
{
    cout << "Введите первое число: " << endl;
    int u_num1;
    cin >> u_num1;
    cout << "Введите второе число: " << endl;
    int u_num2;
    cin >> u_num2;
    
    cout << "Среднее арифметическое введенных вами чисел: " << endl;
    cout << (u_num1 * u_num2)/2 << endl;
    
    return 0;
}
