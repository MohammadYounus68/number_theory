#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
// using = ll long long;
// typedef long long int ll;
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define pb push_back

int main() {
    int n = 100;
    vector<int> primes;
    bool f[n];
    f[1] = true; //bad delam bcz ata prime o na compositive o na
    for(int i = 2; i <= n; i++) {
    	if(!f[i]) {
    		primes.push_back(i);
    		for(int j = i + i; j <= n; j += i) {
    			f[j] = true;
    		}
    	}
    }
    for(auto i : primes) {
    	cout << i << " ";
    } 
    return 0;
}