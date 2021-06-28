#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
#include <queue>
using namespace std;
//전역변수 선언
char arr[64][64];
int N;
queue<char> s;

void solve(int x, int y, int size){
	if(size==1){
		if(arr[x][y]-'0' == 1)
			s.push('1');
		else 
			s.push('0');
		return;	
	}	
	
	else {
		int sum=0;
		for(int i=x; i<x+size; i++){
			for(int j=y; j<y+size; j++){
				sum+=arr[i][j]-'0';
			}
		}
		
		if(sum == 0){ //모두 0일때
			s.push('0');
			return;
		}
		else if(sum == size*size){
			s.push('1');
			return;
		}
		else {
			s.push('('); //좀더 작은사이즈로 진입할때
			solve(x, y, size/2);
			solve(x, y+size/2, size/2);
			solve(x+size/2, y, size/2);
			solve(x+size/2, y+size/2, size/2);
			s.push(')'); //큰 사이즈로 나올때
			return;
		}		
	}
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	cin >> N;
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++)
			cin >> arr[i][j];
	}

	solve(0, 0, N);
	int T= s.size();
	for(int i=0; i<T; i++){
		cout << s.front();
		s.pop();
	}
	return 0;	
}