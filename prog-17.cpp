
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "IDID";
    int n=s.size();
        int mini=0,maxi=n;
        vector<int> arr(n+1);
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                arr[i] = mini++; 
            }else if(s[i]=='D'){
                arr[i] = maxi--;
            }
        }
        arr[n] = mini;
        for(auto it:arr){
            cout<<it<<" ";
        }

    return 0;
}