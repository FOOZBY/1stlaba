#include <iostream>                               
#include <cmath>                                  
using namespace std;
int main()
{
    setlocale(0, "");
    double param,z;
    cout << "Введите степень: ";
    cin >> param;
    z = exp(param);
    cout << "Экспонента числа " << param << " = " << z << endl; 
    system("pause");
    return 0;
}