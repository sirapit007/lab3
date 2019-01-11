#include <iostream>
using namespace std;
int main()

{
    double n = 6;
    double ans = 0;
    while(n <= 19)
    {
        ans = ans + 1/n;
        n = n + 1;
    }
    cout << ans;
}