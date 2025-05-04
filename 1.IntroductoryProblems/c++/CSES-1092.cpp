#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    vector <int> a,b;
    /*
    1 : 1
    2 : no
    3 : 1 2 - 3
    4 : 2 3 - 4 1
    5 : no
    6 : no
    7 : 1 2 5 6 > 3 4 7 
    8 : 1 4 5 8 > 2 3 6 7

    11: 1 2 5 6 9 10 - 3 4 7 8 11
    12: 1 4 5 8 9 12 - 2 3 6 7 10 11
    */

    cin>>n;
    if (n%4 == 0){
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            if (i%4==1 || i%4==0){
                a.push_back(i);
            }
            else{
                b.push_back(i);
            }
        }
        cout<<a.size()<<endl;
        for(auto v: a) cout<<v<< " ";
        cout<<endl;
        cout<<b.size()<<endl;
        for(auto v: b) cout<<v<< " ";
        cout<<endl;
    }

    else if (n%4 == 3){
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            if (i%4==1 || i%4==2){
                a.push_back(i);
            }
            else{
                b.push_back(i);
            }
        }
        cout<<a.size()<<endl;
        for(auto v: a) cout<<v<< " ";
        cout<<endl;
        cout<<b.size()<<endl;
        for(auto v: b) cout<<v<< " ";
        cout<<endl;
    }
    else {
        cout<<"NO"<<endl;

    }
}