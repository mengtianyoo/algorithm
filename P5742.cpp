#include<iostream>
using namespace std;

struct grade{
	string number;
	double aca;
	double dev;
};

string comparing(grade stu){
	if((stu.aca * 7 + stu.dev * 3 >= 800) && (stu.aca + stu.dev > 140)) return "Excellent";
	else return "Not excellent";
}

grade stu[1001];

int main(){
	int n, i = 0;
	cin >> n;
	while(i < n){
		cin >> stu[i].number >> stu[i].aca >>stu[i].dev;
		cout << comparing(stu[i]) << "\n";
		i++;
	}

}
