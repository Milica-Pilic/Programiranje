#include <iostream>

using namespace std;

int main()
{
    int n, y;
    cin >> n;
    y = n;
    for(int i = 1; i <= y; i++)
        n*=i;
    cout << n;
    return 0;
}
