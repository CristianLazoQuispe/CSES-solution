#include <bits/stdc++.h>
using namespace std;

/*
vector<int> arr(N);
for (int i = 0; i < N; i++) cin >> arr[i];
sort(arr.begin(), arr.end());

set<int> distinctNumbers;

*/

bool check(int a,int b, int k){

    if (((b-k)<=a) && (a<=(b+k))){
        return true;
    }
    return false;


}

int main() {
	long int n,m,k;
	long int j = 0;
    long int i =0;


    cin >> n>>m>>k;
    vector <long int> a(n),b(m);




    for ( int v=0; v<n; v++) cin>> a[v];
    for ( int v=0; v<m; v++) cin>> b[v];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long int cnt = 0;
    //cout << "m= "<< m << endl;

    while ((i<n) && (j<m)){        
    	//cout << a[i] <<" " << b[j];
        if (check(a[i],b[j],k)){
            j++;
            i++;
            cnt++;
        }
        else {
            if (b[j]<a[i]){
                j++;
            }
            else{
                i++;
            }
        }
    	//cout << " "<< cnt << endl;
    }
	cout << cnt << endl;
	return 0;
}