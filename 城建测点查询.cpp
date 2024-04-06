#include<iostream>
#include<algorithm>
using namespace std;
int n, X, Y;
struct jian{
	int id;
	int x;
	int y;
} jiance[202];

bool cmp (jian a, jian b) {
	int ad = (a.x - X) * (a.x - X) + (a.y - Y) * (a.y - Y);
	int bd = (b.x - X) * (b.x - X) + (b.y - Y) * (b.y - Y);
	if(ad < bd) return 1;
	else if (ad == bd) {
		return a.id < b.id;
	} else {
		return 0;
	}
}

int main() {
	cin >> n >> X >> Y;
	for(int i = 1; i <= n; i++){
		cin >> jiance[i].x >> jiance[i].y;
		jiance[i].id = i;
	}
	sort(jiance + 1, jiance + n + 1, cmp);
	for(int i = 1; i <= 3; i++){
		cout << jiance[i].id << endl;
	}



	return 0;
} 
