#include<bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> arr = {2,0,2,1,1,0};
    int z = 0,o=0,t=0;
    for(auto it:arr){
        if(it==0){
            z++;
        }else if(it==1){
            o++;
        }else{
            t++;
        }
    }
    
    for(int i=0;i<z;i++){
        arr[i]=0;
    }
    for(int i=z;i<z+o;i++){
        arr[i]=1;
    }
    for(int i=z+o;i<z+o+t;i++){
        arr[i]=2;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}