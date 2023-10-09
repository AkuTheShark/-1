#include <iostream>
using namespace std;

int main()
{
    setlocale(0,"");
    cout << "Введите число: " << endl;
    
    int u_num;
    cin >> u_num;
    
    cout << "Квадрат введенного вами числа: " << endl;
    cout << u_num * u_num << endl;
    
    cout << "Куб введеного вами числа: " << endl;
    cout << u_num * u_num * u_num << endl;

    return 0;
}
