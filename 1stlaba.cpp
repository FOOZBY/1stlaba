#include <iostream>                               
#include <cmath>                                  
using namespace std;
int main()
{
    setlocale(0, "");
    double param;
    cout << "Введите степень: ";
    cin >> param;
    cout << "Экспонента числа " << param << " = " << exp(param) << endl; 
    system("pause");
    return 0;
}