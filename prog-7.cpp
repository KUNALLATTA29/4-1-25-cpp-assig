#include<bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> arr = {1,2,3};
    string str = "";
    
    for(auto it:arr){
        str += to_string(it);
    }
    
    int a = stoi(str)+1;
    str = to_string(a);
    
    for(int i=0;i<str.size();i++){
        arr[i]=str[i] - '0';
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}