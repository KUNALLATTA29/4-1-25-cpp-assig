
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 9669;
     string s = to_string(num);
        for(auto &it:s){
            if(it=='6'){
                it='9';
                break;
            }
        }
        cout<<stoi(s);

    return 0;
}