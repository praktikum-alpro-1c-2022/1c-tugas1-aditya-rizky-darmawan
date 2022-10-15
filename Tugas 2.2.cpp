#include <iostream>

using namespace std;

int main()
{
    int a = 30;
    int b = 70;
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout<< " Nilai A adalah = " << a << endl;
    cout<< " Nilai B adalah = " << b << endl;


    return 0;
}