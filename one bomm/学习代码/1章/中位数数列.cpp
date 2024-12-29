#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    k = n/2;
    cout << n*n - k -k*(k + 1);
    return 0;
}