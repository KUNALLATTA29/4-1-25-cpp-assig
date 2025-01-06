#include<bits/stdc++.h>

using namespace std;

bool checkprime(int num){
    if(num==0 or num==1){
        return false;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
} 

int main(){
    
    int a = 10;
    int ans = 0;
    
    
    for(int i=2;i<=a;i++){
        bool result = checkprime(i);
        if(result==true){
            ans++;
        }
        
        
    }
    cout<<ans;
    
    return 0;
}
