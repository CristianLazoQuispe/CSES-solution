#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m;

    cin>>n>>m;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int cnt = 0;

    int j = n-1;
    int i = 0;

    while(i<j){

        if ((arr[j]+arr[i])<=m){
            cnt++;
            i++;
            j--;
        }
        else{
            if (arr[j]>=m){
                cnt++;
                j--;
            }
            else if (arr[i]>=m){
                break;
            }
            else {
                cnt++;
                j--;
            }
        }
    }

    cout<< (cnt + j - i + 1) <<endl;
}