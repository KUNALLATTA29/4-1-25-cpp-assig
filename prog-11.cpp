
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4};
    int n =arr.size();
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum +=(arr[i-1]*arr[i-1]);
        }
    }
    
    cout<<sum;

    return 0;
}