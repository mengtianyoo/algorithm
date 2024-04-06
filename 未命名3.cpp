#include<iostream>
#include<map>
using namespace std;

struct zuobiao {
    long long x, y;

    // 重载小于运算符，用于结构体的比较
    bool operator<(const zuobiao& other) const {
        if (x != other.x)
            return x < other.x;
        return y < other.y;
    }
};

map<zuobiao, int> mp;

int main() {
    int n, num[6] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        zuobiao temp;
        cin >> temp.x >> temp.y;
        mp[temp] = 1;
    }

    for (auto it = mp.begin(); it != mp.end(); ++it) {
        zuobiao zb = it->first;
        zuobiao zbu = {zb.x, zb.y + 1};
        zuobiao zbd = {zb.x, zb.y - 1};
        zuobiao zbl = {zb.x - 1, zb.y};
        zuobiao zbr = {zb.x + 1, zb.y};
        zuobiao zbul = {zb.x - 1, zb.y + 1};
        zuobiao zbur = {zb.x + 1, zb.y + 1};
        zuobiao zbdl = {zb.x - 1, zb.y - 1};
        zuobiao zbdr = {zb.x + 1, zb.y - 1};

		cout << zb.x << zb. y<< endl;
        if (mp[zbu] == mp[zbd] && mp[zbd] == mp[zbr] && mp[zbr] == mp[zbl] && mp[zbl] == 1) {
            int con = mp[zbul] + mp[zbur] + mp[zbdl] + mp[zbdr];
            num[con % 5]++;
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << num[i] << endl;
    }

    return 0;
}

