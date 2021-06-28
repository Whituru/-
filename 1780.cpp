#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;
int N;
int arr[2187][2187];
int cnt1, cnt2, cnt3;
void solve(int x, int y, int size){
	if(size==1){
		if(arr[x][y]==-1){
			cnt1++;
		}
		else if(arr[x][y] == 0){
			cnt2++;
		}
		else if (arr[x][y] == 1){
			cnt3++;
		}
	}
	
	else {
		int sum=0;
		int cnt=0;
		for(int i=x;i<x+size; i++){
			for(int j=y; j<y+size; j++){
				sum+=arr[i][j];
				if(arr[i][j] == 0){
					cnt++;
				}
			}
		}
		int sqr = size*size;
		if(sum == (-1)*sqr){ //모두 -1인 경우
			cnt1++;
		}
		else if(sum == sqr){	//모두 1인경우
			cnt3++;
		}
		else if(cnt == sqr){
			cnt2++;
		}
		else {
			solve(x,y,size/3);
			solve(x+size/3, y, size/3);
			solve(x+size*2/3, y, size/3);
			solve(x,y+size/3,size/3);
			solve(x+size/3, y+size/3, size/3);
			solve(x+size*2/3, y+size/3, size/3);
			solve(x, y+size*2/3, size/3);
			solve(x+size/3, y+size*2/3, size/3);
			solve(x+size*2/3, y+size*2/3, size/3);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	cin >> N;
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cin >> arr[i][j];
		}
	}
	
	
	solve(0,0,N);
	
	cout << cnt1 <<endl;
	cout << cnt2 <<endl;
	cout << cnt3 <<endl;
	
	
	
	return 0;	
}