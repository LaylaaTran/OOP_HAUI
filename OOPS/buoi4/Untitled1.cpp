#include <bits/stdc++.h>
 
using namespace std;
 
long long n, k;
long long a[30];
long long ans = 1e18;
string s = "";
 
bool isPrime(long long n) {
    if (n < 2) {
        return false;
    }
 
    if (n == 2 || n == 3) {
        return true;
    }
 
    if (n % 2 == 0) {
        return false;
    }
 
    for (int i = 3; i*i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
 
void getAnswer(long long a[], long long k) {
    long long num = 0;
    long long cnt = 0;
    for (int i = 1; i <= k; i++) {
        if (!a[i]) {
            num = num * 10 + (s[i] - '0');
        } else {
            cnt++;
        }
    }
    if (isPrime(num)) {
        ans = min(ans, cnt);
    }
}
 
void backTrack(long long i) {
    for (int j = 0; j < 2; j++) {
        a[i] = j;
        if (i == k) {
            getAnswer(a, k);
        } else {
            backTrack(i + 1);
        }
    }
}
 
int main() {
    cin >> n;
    while (n > 0) {
        char c = n % 10 + '0';
        s = char(c) + s;
        n /= 10;
    }
    k = s.size();
    s = " " + s;
    backTrack(1);
    cout << ans;
    return 0;
}