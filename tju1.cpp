#include<iostream>
#include<cmath>
using namespace std;


void output(double x, double y){
	if(x > 0) {
		if(x - floor(x) > 0.5) cout << ceil(x);
		else{
			cout << floor(x);
		}
	}else{
		if(x - floor(x) <= 0.5) cout << floor(x);
		else{
			cout << ceil(x);
		}
	}
	cout << " ";
	if(y > 0) {
		if(y - floor(y) > 0.5) cout << ceil(y);
		else{
			cout << floor(y);
		}
	}else{
		if(y - floor(y) <= 0.5) cout << floor(y);
		else{
			cout << ceil(y);
		}
	}
	cout<<"\n";
}

int main(){
	//cout << ceil(-1.1);
	int n;
	cin >> n;
	
	double x, y;
	while(n--){
		cin >> x >> y;
		output(x, y);
	}
	
} 
