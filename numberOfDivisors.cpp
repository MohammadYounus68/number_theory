#include <bits/stdc++.h>
using namespace std;
#define ll long long
// using = ll long long;
// typedef long long int ll;
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define pb push_back

int main() {
    int n; cin >> n;
    vector<int> v;
    /*
		1 is not compositive number or not divisor
		i * i using not need full value checkup 
		bcz n = 20 than 
		1 * 20 = 20;
		2 * 10 = 20;
		4 * 5 = 20
    */
    for(int i = 2; i * i <= n; i++) {
    	if(n % i == 0) {
    		v.push_back(i);
    		if(i != (n / i)) {
    			v.push_back(n / i);
    		}
    	}
    }
    sort(v.begin(),v.end());
    for(auto i : v) {
    	cout << i << " ";
    }
    return 0;
}