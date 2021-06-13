#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

	
static int arr1[100000] = {0,};
static int arr2[100000] = {0,};

void flip1(int i){
	if(i ==0 ){
		for(int j=i; j<i+2; j++){
			if(arr1[j] == 1){
				arr1[j] = 0;
			}
			else {
				arr1[j] = 1;
			}
		}
	}
	else {
		for(int j=i-1; j<i+2; j++){
			if(arr1[j] == 1){
				arr1[j] = 0;
			}
			else {
				arr1[j] = 1;
			}
		}
	}
}

void flip2(int i){
	if(i ==0 ){
		for(int j=i; j<i+2; j++){
			if(arr2[j] == 1){
				arr2[j] = 0;
			}
			else {
				arr2[j] = 1;
			}
		}
	}
	else {
		for(int j=i-1; j<i+2; j++){
			if(arr2[j] == 1){
				arr2[j] = 0;
			}
			else {
				arr2[j] = 1;
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
		if(cur[i] == goal[i]){
			arr1[i] = 0;
			arr2[i] = 0;
		}
		else {
			arr1[i] = 1;
			arr2[i] = 1;
		}
	}
	int cnt1=0; int cnt2=0;
	//0번 전구를 키는 경우 
	cnt1++;
	flip1(0);
	for(int i=1; i<N; i++){
		if(arr1[i-1] == 0){
			continue;
		}
		else if(arr1[i] == 1 || arr1[i-1] == 1) {
			flip1(i);
			cnt1++;
		}
	}
	

	
	//0번 전구를 켜지 않는 경우

	for(int i=1; i<N; i++){
		if(arr2[i-1] == 0){
			continue;
		}
		else if(arr2[i] == 1 || arr2[i-1] == 1) {
			flip2(i);
			cnt2++;
		}
	}
	
	//정답 출력
	int ans;
	int sum1 =0; int sum2=0;
	for(int i=0; i<N; i++){
		sum1 += arr1[i];
		sum2 += arr2[i];
	}
	
	if(sum1 + sum2 == 0){
		ans = cnt1 <= cnt2 ? cnt1:cnt2;
	}
	else if(sum1 == 0 && sum2 !=0){
		ans = cnt1;
	}
	else if(sum2 == 0 && sum1 !=0){
		ans = cnt2;
	}
	else if(sum2 != 0 && sum1 !=0){
		ans = -1;
	}
	
	cout << ans <<endl;
	return 0;
}

	