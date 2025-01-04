#include<bits/stdc++.h>

using namespace std;

int main(){
    
    vector<string> str = {"alice and bob love leetcode", "i think so too", 
    "this is great thanks very much"};
    int maxi = 0;
    for(int i=0;i<str.size();i++){
        int temp=0;
        istringstream stream(str[i]);
        string word;
        while(stream >> word){
            temp++;
        }
        if(temp>maxi){
            maxi=temp;
        }
    }
    
    cout<<maxi;
    return 0;
}