#include<iostream>

using namespace std;

int main(){
	int n, a, b;
	int x1, x2, y1, y2;
	int ans = 0;
	cin >> n >> a >> b;
	for(int i = 0; i < n; i++){
		cin >> x1 >> y1 >> x2 >> y2;
		if (x1 >= a || y1 >= b || x2 <= 0 || y2 <= 0){
			continue;
		} else {
			int x = max(x1, 0), y = max(y1, 0), X = min(x2, a), Y = min(y2, b);
			ans += (X - x) * (Y - y);
		}
	}
	cout << ans;
	return 0;
}
