#include<iostream>
using namespace std;

struct info{
	string name;
	int ch;
	int en;
	int math;
	int sum;
};
info stu[1024];
int main(){
	int cnt,i = 0;
	cin>>cnt;
	while(i < cnt){
		cin >> stu[i].name >> stu[i].ch >> stu[i].en >> stu[i].math;
		stu[i].sum = stu[i].ch + stu[i].en + stu[i].math;
		i++;
	}
	for(int i = 0; i < cnt; i++){
		for(int j = 0; j < cnt - i - 1; j++){
			if(stu[j].sum < stu[j+1].sum){
				info temp = stu[j + 1];
				stu[j + 1] = stu[j];
				stu[j] = temp;
			}
		}
	}
	cout << stu[0].name << " " << stu[0].ch << " " << stu[0].en << " " << stu[0].math;
}
