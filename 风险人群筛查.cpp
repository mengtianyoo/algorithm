#include<iostream>

using namespace std;

int main(){
	
	int n, k, t, xl, yd, xr, yu, xi, yi, jvmin[22] = {0}, douliu = 0, jingguo = 0;
	cin >> n >> k >> t >> xl >> yd >> xr >> yu;
	
	for(int i = 1; i <= n; i++) {
		int tmp = 0, f = 0;
		for(int j = 1; j <= t; j++){
			cin >> xi >> yi;
			if((xi >= xl && xi <= xr) && (yi >= yd && yi <= yu)){
				tmp++;
				jvmin[i]++;
				if (tmp >= k){
					f = 1;
				}
			} else {
				tmp = 0;
			}
//			cout <<"***" << tmp << endl;
//			cout << "###" << jvmin[i]<<endl;
		}
		if (f) {
			douliu++;
			jingguo++;
		} else if (jvmin[i] >= 1) {
			jingguo++;
		}
	}
	cout << jingguo << "\n" << douliu;
	return 0;
} 
