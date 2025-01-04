#include<bits/stdc++.h>

using namespace std;


int main(){
    
    vector<int> arr = {1,1,2};
    int ans =0;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=arr[ans]){
            ans++;
            arr[ans]=arr[i];
        }
    }
    cout<<ans+1<<endl;
    
    
    return 0;
}