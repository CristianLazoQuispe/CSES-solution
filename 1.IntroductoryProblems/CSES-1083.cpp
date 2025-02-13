#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    long long int sum = 0;
    cin>>n;
    for (int j=0; j <(n-1);j++){
        cin>>m;
        sum+=m;
    } 
    int val = long(n)*(n+1)/2 - sum;
    cout<<val<<endl;
}