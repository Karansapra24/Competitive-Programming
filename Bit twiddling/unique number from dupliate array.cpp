#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> v;
	    
	    for(int i = 0; i < n; i++) {
	        int e;
	        cin >> e;
	        v.push_back(e);
	    }
	    
	    int res = v[0];
	    
	    for(int i = 1; i < n; i++) {
	        res ^= v[i];
	    }
	    
	    cout << res << endl;
	}
	return 0;
}