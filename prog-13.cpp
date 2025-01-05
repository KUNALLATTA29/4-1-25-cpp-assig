
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3,0,1};
    int n=arr.size();
    int result = 0;
    int sum = n*(n+1)/2;
    
    for(auto it:arr){
        result+=it;
    }
    
    
    
    
    cout<<sum-result;
    return 0;
}