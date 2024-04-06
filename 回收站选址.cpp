#include<iostream>
#include<map>
using namespace std;

struct zuobiao{
	long long x, y;
	// 重载小于运算符，用于结构体的比较
    bool operator<(const zuobiao& other) const {
        if (x != other.x)
            return x < other.x;
        return y < other.y;
    }
}zb[1002];

map <zuobiao, int > mp;

int main(){
	int n, num[6] = {0};
	long long x, y;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> zb[i].x >> zb[i].y;
		mp[zb[i]] = 1;
	}
	for(int i = 1; i <= n; i++){
		zuobiao  zbu, zbd, zbr, zbl, zbul, zbur, zbdl, zbdr;
		zbu = {zb[i].x, zb[i].y + 1}, zbd = {zb[i].x, zb[i].y - 1};
        zbl = {zb[i].x - 1, zb[i].y}, zbr = {zb[i].x + 1, zb[i].y};
        zbul = {zb[i].x - 1, zb[i].y + 1}, zbur = {zb[i].x + 1, zb[i].y + 1};
        zbdl = {zb[i].x - 1, zb[i].y - 1}, zbdr = {zb[i].x + 1, zb[i].y - 1};
        
        if (mp[zbu] == mp[zbd] && mp[zbd] == mp[zbr] && mp[zbr] == mp[zbl] && mp[zbl] == 1) {
            int con = mp[zbul] + mp[zbur] + mp[zbdl] + mp[zbdr];
            num[con % 5]++;
        }
	}
	for(int i = 0; i < 5; i++){
		cout << num[i] << endl;
	}
	return 0;
}
