#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;
int arr[50][50];
int cnt = 0;
void flip(int x, int y){
	if(arr[x][y] == 1){
		//다르니까 뒤집자.
		cnt++;
		for(int i=x; i<x+3; i++){
			for(int j=y; j<y+3; j++){
				if(arr[i][j] == 1){
					arr[i][j] = 0;
				}
				else {
					arr[i][j] = 1;
				}
			}
		}
	}
}



int main() {	

	int N, M;
	cin >> N >> M;
	
	string A[50]; 
	string B[50];
	
	
	for(int i=0; i<N; i++){
		cin >> A[i];
	}
	for(int i=0; i<N; i++){
		cin >> B[i];
	}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			if(A[i][j] == B[i][j]){
				arr[i][j] = 0;
			}
			else {
				arr[i][j] = 1;
			}
		}
	}
	
	for(int i=0; i<N-2; i++){
		for(int j=0; j<M-2; j++){
			flip(i,j);
		}
	}
	int tmp= 0;
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			if(arr[i][j] == 1)
			{tmp = 1;}
		}
	}
	if(tmp == 1){
		cout << -1 << endl;
	}
	else {
		cout << cnt << endl;
	}
	
	return 0;
	
}
	