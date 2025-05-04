#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,prev,x;
    long long ans = 0;
    cin>>n;
    cin>>prev;
    for ( int i=0; i<(n-1);i++){
        cin>>x;
        if (x<prev){
            ans+= prev-x;
        }
        else {
            prev = x;
        }
    }
    cout<<ans<<endl;


}