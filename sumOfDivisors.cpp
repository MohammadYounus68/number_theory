#include <bits/stdc++.h>
using namespace std;
#define ll long long
// using = ll long long;
// typedef long long int ll;
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define pb push_back
int d[104];
int main() {
    int n = 100;
    for(int i = 1; i <= n; i++) {
    	for(int j = i; j<= n; j+= i) {
    		d[j]++;
    	}
    }
    for(int i = 1; i <= n; i++) {
    	// cout << d[i] << " ";
    }
    cout << d[1]++;
    return 0;
}