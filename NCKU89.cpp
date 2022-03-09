#include <iostream>
#include <vector>
using namespace std;
int main(){
	long long cake_num = 0, money = 0;
	cin >> cake_num >> money ;
	float full = 0;
	//cout << cake_num << " " << money << endl;
	float sort[cake_num];
	long long input[200000][5] = {0};
	vector<long long> ex;
	for(int i = 0; i < cake_num; i++){
		int fufil = 0 ,cost = 0;
		cin >> fufil >> cost;
		if(cost != 0 ){
			input[i][0] = fufil;
			input[i][1] = cost;
		}
		else if(cost == 0){
			ex.push_back(fufil);
		}
		sort[i] = (float)input[i][0] / (float)input[i][1];
	}
	for(int i = 0; i < cake_num; i++){
		for(int j = i+1; j < cake_num; j++){
			if(sort[i] < sort[j]){
				swap(sort[j],sort[i]);
				swap(input[i],input[j]);
			}
		}
	}
	/*for(int i = 0; i < cake_num; i++){
		cout << input[i][0] << " " << input[i][1] <<endl;
	}*/
	int last = 0;
	for(int i = 0;money > 0 ; i++){
		money -= input[i][1];
		full += input[i][0];
		last = i;
		if (i == cake_num -1){
			break;
		}
	}
	money += input[last][1];
	full -= input[last][0];
	full += money * sort[last];
	if (last == cake_num -1){
		full = 0;
		for(int i = 0;i < cake_num;i++){
			full += input[i][0];
		}
	}
	for(int i = 0; i < ex.size();i++){
		full += ex[i];
	}
	cout << full << endl;
}
