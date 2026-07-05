#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, k;
    cin >> n >> k;
    long long x, a, b, c;
    cin >> x >> a >> b >> c;
    vector<long long> arr(n);
    arr[0] = x;
    for(int i = 1; i < n; i++) {
        arr[i] = (a * arr[i - 1] + b) % c;
    }
    long long sum = 0;
    for(int i = 0; i < k; i++) sum += arr[i];
    long long res = sum;
    for(int i = k; i < n; i++) {
        sum -= arr[i - k];
        sum += arr[i];
        res ^= sum;
    }
    cout << res;
    return 0;
}   