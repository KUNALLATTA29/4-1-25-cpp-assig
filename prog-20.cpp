
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=16;

    if (n <= 0) {
        cout<<n<<" not a power";
    } else {
        while (n % 2 == 0) {
            n/=2;
        }
        if (n == 1) {
            cout<<"it is a power";
        } else {
            cout<<"not a power";
        }
    }

    return 0;
}