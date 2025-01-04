#include<bits/stdc++.h>

using namespace std;


int main(){
    
    vector<int> arr = {0,1,0,3,12};
    
    int u=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            arr[u]=arr[i];
            u++;
        }
    }
    
    for(int i=u;i<arr.size();i++){
        arr[i]=0;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}