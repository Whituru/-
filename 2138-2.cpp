#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;
static int arr[100000] = {0,};

void flip(int i){
	
	if(i ==0 ){
		for(int j=i; j<i+2; j++){
			if(arr[j] == 1){
				arr[j] = 0;
			}
			else {
				arr[j] = 1;
			}
		}
	}
	else {
		for(int j=i-1; j<i+2; j++){
			if(arr[j] == 1){
				arr[j] = 0;
			}
			else {
				arr[j] = 1;
			}
		}
	}
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N; 
	cin >> N;
	string cur;
	string goal;
	
	cin >> cur;
	cin >> goal;
	
	for(int i=0; i<N; i++){
		if(cur[i] == goal[i]){	//같으면 0으로
			arr[i] = 0;
		}
		else {
			arr[i] = 1;	//다르면 1. 0으로 바꿔줘야함.
		}
	}
	
	
	if(N==2){
		if(arr[0] == arr[1] && arr[0] == 0){
			cout << 0 << endl;
			return 0;
		}
		else if( arr[0] == arr[1] && arr[0] == 1) {
			cout << 1 << endl;
			return 0;
		}
		else {
			cout << -1 << endl;
			return 0;
		}
	}
	
	
	int cnt=0;
	if(arr[0]== 1||arr[1] == 1){
		flip(0);
		cnt++;
	}
	for(int i=1; i<N; i++){
		if(arr[i-1] == 0){
			continue;
		}
		else if (arr[i] == 1 || arr[i+1] == 1 ||arr[i-1] == 1){
			flip(i);
			cnt++;
		}
			
	}
	
	
	
	
	int sum=0;
	for(int i=0; i<N; i++){
	
		sum += arr[i];
	}
	
	if(sum == 0){
		cout << cnt << endl;
	}
	else {
		cout << -1 << endl;
	}
	
	
	return 0;
	
}