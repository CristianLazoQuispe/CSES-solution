#include <bits/stdc++.h>
#include <cmath> 
 
using namespace std;


int main(){

    int n;
    cin>>n;

    // Modular Exponentiation (a^b) mod p
    long long a=2,b=n;
    long long p = pow(10, 9) + 7;

    long long x=1;
    for (int i=1;i<=b;i++){
        x  = (a*x)%p;
    }
    cout<<x<<endl;

}