#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;
//전역변수 선언
int arr[130][130];
int white=0, blue=0;
int N;

void solve(int x, int y, int size){
	if(size == 1){
		if(arr[x][y] == 1){
			blue++;
		}
		else {
			white++;
		}
		return;
	}
	else {
		int sum=0;
		for(int i=x; i<x+size; i++){
			for(int j=y; j<y+size; j++){
				sum+=arr[i][j];
			}
		}
		if(sum == 0) {
			white+=1;
			return;
		}
		else if(sum == size*size){
			blue+=1;
			return;
		}
		else {
			solve(x, y, size/2);
			solve(x, y+size/2, size/2);
			solve(x+size/2, y, size/2);
			solve(x+size/2, y+size/2, size/2);
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
	
	solve(0, 0, N);
	
	cout << white << endl;
	cout << blue << endl;
	return 0;	
}