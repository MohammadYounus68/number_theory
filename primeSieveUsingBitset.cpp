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
    bool f[n];
    f[1] = true;
    vector<int> primes;
    for(int i = 2; i * i <= n; i++) {
    	if(!f[i]) {
    		for(int j = i * i; j <= n; j += i) {
    			f[j] = true; // divisor so not prime number
    		}
    	}
    }
    for(int i = 2; i <= n; i++) {
    	if(!f[i]) {
    		primes.push_back(i);
    	}
    }
    for(auto i : primes) {
    	cout << i << " ";
    }


    return 0;
}

/*
	100 number of primes
	2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/