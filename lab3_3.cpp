#include <iostream>
using namespace std;
int main()

{
    double n = 2;
    double ans = 0;
    while(n <= 69)
    {
        ans = ans + 1/n;
        n = n + 1;
    }
    cout << ans;
}