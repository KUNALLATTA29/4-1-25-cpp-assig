#include<bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> arr = {0,1,2,2,3,0,4,2};
    int v = 2;
    int u = 0;
    
    
    for( int i=0;i<arr.size();i++){
        if(arr[i]!=v){
            arr[u]=arr[i];
            u++;
        }
    }
    cout<<u;
    
    return 0;
}