#include <iostream>
#include <cmath>
using namespace std;

bool isprime(long s) {
    if (s == 2) return true;
    if (s < 2 || s % 2 == 0) return false;
    for (long i = 3; i <= sqrt(s); i += 2) {
        if (s % i == 0) return false;
    }
    return true;
}

bool ispalindromes(long s) {
    long original = s;
    long reversed = 0;
    while (s > 0) {
        reversed = reversed * 10 + s % 10;
        s /= 10;
    }
    return original == reversed;
}

int main() {
    int l, m;
    cin >> l >> m;
    m = min(9989899, m);
    for (int i = l; i <= m; i++) {
        if (ispalindromes(i) && isprime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

