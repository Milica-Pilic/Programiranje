#include <iostream>

using namespace std;

int main()
{
    int n, suma, cubNum;
    for(int i = 100; i <= 999; i++)
    {
        suma = 0;
        n = i;
        while(n > 0)
        {
            cubNum = n % 10;
            n /= 10;
            suma += cubNum * cubNum * cubNum;
        }
        if(suma == i)
            cout << suma << endl;
    }
    return 0;
}
