#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string str = "   fly me   to   the moon  ";
    int n =0;
    int start = str.size()-1;
    
    while(start>=0 && str[start]==' '){
        start--;
    }
    for(int i=start;i>=0;i--){
        if(str[i]!=' '){
            n++;
        }else{
            break;
        }
    }
    cout<<n;
    return 0;
}