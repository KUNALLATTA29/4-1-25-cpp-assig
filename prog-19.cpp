
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=27;

    if (n <= 0) {
        cout<<n<<"not a power";
    } else {
        while (n % 3 == 0) {
            n/=3;
        }
        if (n == 1) {
            cout<<"it is a power";
        } else {
            cout<<"not a power";
        }
    }

    return 0;
}