#include <iostream>

using namespace std;

int main()
{
    int a = 30;
    int b = 70;
    int c;
    
    c = a;
    a = b;
    b = c;
    
    cout<< " Nilai A adalah = " << a << endl;
    cout<< " Nilai B adalah = " << b << endl;


    return 0;
}