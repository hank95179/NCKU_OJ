#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n;
    cin >> n;
    long long score[n][3];
    for(int i=0; i<n; i++){
        cin >> score[i][0] >> score[i][1] >> score[i][2] ;
        // cout << score[i][0] << score[i][1] << score[i][2] << endl;
    }
    bool canlove = false;
    int best = 0;
    for(int i=0; i<n; i++){
        int cnt = 0;
        if (score[best][0] < score[i][0]) cnt++;
        if (score[best][1] < score[i][1]) cnt++;
        if (score[best][2] < score[i][2]) cnt++;
        if(cnt>1){
            best = i;
        } 
    }
    for(int i= 0; i<n; i++){
        int cnt = 0;
        if (score[best][0] > score[i][0]) cnt++;
        if (score[best][1] > score[i][1]) cnt++;
        if (score[best][2] > score[i][2]) cnt++;
        if(i == best) cnt = 3;
        if(cnt<2){
            // cout <<"hi\n";
            best = -2;   
            break;
        } 
    }  
    cout << best+1 << endl;
}
