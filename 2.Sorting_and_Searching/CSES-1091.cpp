#include <bits/stdc++.h>

using namespace std;


int main(){

    /*** First idea using vector (TIME LIMIT)
    int n,m;

    cin>>n>>m;

    vector<long int> h(n);
    vector<long int> t(m);

    int v[n];
    memset(v,0,sizeof(v));

    for (int i =0; i<n; i++) cin>>h[i]; //prices
    for (int i =0; i<m; i++) cin>>t[i];
    
    sort(h.begin(),h.end());

    for (int i=0; i<m; i++){
        
        // look for upper bound (binary search )
        int l = 0;
        int r = h.size()-1;
        int m = 0;
        while(l<r){
            m = (l+r+1)/2;
            if (h[m]>t[i]){
                r = m-1;
            }
            else if (h[m]<t[i]) {
                l = m;
            }
            else {
                r = m;
                break;
            }
        }
        bool flag = false;
        if (h[r]<=t[i]) {
            cout<<h[r]<<endl;
            h.erase(h.begin() + r);
        }
        else {
            cout<<-1<<endl;
        }
        

    }
    */

    // The same idea using multiset (accepted)
    int n, m, h, t;
    multiset<int> tickets;

	cin >> n >> m;

    for (int i = 0; i < n; ++i) {
		cin >> h;
		tickets.insert(h);
	}
	for (int i = 0; i < m; ++i) {
		cin >> t;
		auto it = tickets.upper_bound(t);
		if (it == tickets.begin()) {
			cout<< -1 <<endl;
		}
        else {
			cout<< *(--it) <<endl;
			tickets.erase(it);
		}
	}



}