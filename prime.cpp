#include <bits/stdc++.h>
using namespace std;
#define ll long long
// using = ll long long;
// typedef long long int ll;
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define pb push_back
int isPrime(int n) {
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
    cout << isPrime(7);
    return 0;
}

