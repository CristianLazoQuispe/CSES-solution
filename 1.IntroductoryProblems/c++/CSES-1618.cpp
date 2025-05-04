#include <bits/stdc++.h>

using namespace std;

// base idea is to count 5 factors 5^x because it creates trailing zeros
int main(){
    int cnt=0;
    long n;
    cin>>n;

    while(n>1){
        n=(int)n/5;
        cnt+=n;
    }
    cout<<cnt;
    return 0;
}