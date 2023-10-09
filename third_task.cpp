#include <iostream>
using namespace std;

int main()
{
    cout << "Введите диапазон: \n";
    int s_point;
    int e_point;
    int res;
    cin >> s_point >> e_point;
    
    for (int i = s_point; i <= e_point; i++)
    {
        if (i % 2 == 0)
        {
            res += i;
        }
    }

    cout << "Сумма четных чисел диапазона: \n" << res;

    return 0;
}
