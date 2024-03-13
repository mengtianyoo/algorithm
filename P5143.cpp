#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
 
struct coor{
	int x, y, z;
}num[50001];
bool cmp(coor a, coor b){
	return a.z < b.z;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> num[i].x >> num[i].y >> num[i].z;
	}
	sort(num, num + n, cmp);
	double ans = 0;
	for(int i = 1; i < n; i++){
		double xt = (num[i].x - num[i - 1].x)*(num[i].x - num[i - 1].x);
		double yt = (num[i].y - num[i - 1].y)*(num[i].y - num[i - 1].y);
		double zt = (num[i].z - num[i - 1].z)*(num[i].z - num[i - 1].z);
		ans += sqrt(xt + yt + zt);
	}
	printf("%.3f", ans);
	return 0;
}
