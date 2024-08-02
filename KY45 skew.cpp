#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string num;
    while (cin >> num) {
        long long ans = 0;
        for (int i = num.length() - 1; i >= 0; i--) {
            // Convert character to integer
            int digit = num[i] - '0';
            long long power = pow(2, num.length() - 1 - i);
            cout << digit << " " << power << endl;
            ans += digit * power;
        }
        cout << ans << endl;
    }
    return 0;
}

