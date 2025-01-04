#include<bits/stdc++.h>

using namespace std;


int main(){
    
    vector<int> arr = {1,2,2,1,1,0};
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]==arr[i+1]){
            arr[i]=arr[i]*2;
            arr[i+1]=0;
        }
    }
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