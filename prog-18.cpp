
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 12;
    while (n > 0) {
            if (n % 3 == 2) {
                cout<< false;
            }
            n /= 3;
        }
            cout<<true;

    return 0;
}