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
    int n = 10;
    int sumOfDivisors = 0;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            sumOfDivisors += i;
            if(i != n / i) {
                sumOfDivisors += n / i;
            }
        }
    }
    cout << sumOfDivisors << endl;
    return 0;
}