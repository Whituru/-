#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
#include <cmath>

using namespace std;

static int r1, r2, c1, c2;
static int MAX;
static int arr[5][50];
static int max_digit;
void tornado(int N);
void solve(int value, int x, int y);

int cnt_digit(int N){
	int cnt = 0;
	while(1){
		N = N/10;
		cnt++;
		if(N == 0){
			break;
		}
	}
	return cnt;
}

void blank(int i){
	if(max_digit == cnt_digit(i)) {}
	else {

		for(int k=0; k < max_digit-cnt_digit(i); k++){
			printf(" ");
		}
	}
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	cin >> r1 >> c1 >> r2 >> c2;
	
	MAX = max(max(abs(r1), abs(r2)),max(abs(c1), abs(c2)));
	
	for(int i=0; i<=MAX; i++){
		tornado(i);	
	}
	
	
	MAX = 0;
	for(int j=r1-r1; j<=r2-r1; j++){
		for(int i=c1-c1; i <= c2-c1; i++){
			if( arr[i][j] > MAX ){MAX = arr[i][j];}
		}
	}
	
	max_digit = cnt_digit(MAX); 
	
	for(int j=r1-r1; j<=r2-r1; j++){
		
		for(int i=c1-c1; i <= c2-c1; i++){
			blank(arr[i][j]);
			printf("%d ", arr[i][j]);
			
		}
		printf("\n");
	}
	
	
	return 0;
}


void tornado(int N){
	int x, y;
	
	int num;
	if(N==0){
		num = 1;
		solve(num, 0, 0);
	}
	
	else {
		num = (2*N-1)*(2*N-1);
				//시작하는 수
		x = N; y = N;	//시작 좌표
		for(int i=N; i>=(-1)*N; i--) {	//오른쪽 변
			solve(num, x, i);
			num++;
		}
		x = N; y = (-1)*N;	//윗변
		for(int i=N-1; i >= (-1)*N; i--){
			solve(num, i, y);
			num++;
		}
		x = (-1)*N; y = (-1)*N;	//왼쪽 변
		for(int i=(-1)*N+1; i <= N; i++){
			solve(num, x, i);
			num++;
		}
		x = (-1)*N; y = N;	//아랫 변
		for(int i=(-1)*N+1; i <= N; i++){
			solve(num, i, y);
			num++;
		}
	}
}

void solve(int value, int x, int y){
	
	if(x-c1>=0 && y-r1>=0 && x<=c2 && y<=r2){
		
		arr[x-c1][y-r1] = value;
	}
	
}
