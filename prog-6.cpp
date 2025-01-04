#include<bits/stdc++.h>

using namespace std;


int main(){
    
    vector<int> arr = {1,1,1,2,2,3};
    
    int u=2;
    for(int i=2;i<arr.size();i++){
        if(arr[i]!=arr[u-2]){
            arr[u]=arr[i];
            u++;
        }
    }
    
    cout<<u;
    return 0;
}