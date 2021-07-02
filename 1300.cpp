#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

int N;
int K;

int row_sum(int n){
	if(n<=N){
		return n*(n+1)/2;
	}
	else if(n>N){
		int res = 0;
		int i = 2*N-1-n;
		return N*N-(i)*(i+1)/2;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	//입력단계
	cin >> N;
	cin >> K;
	
	//이분탐색으로 줄 찾기
	int end = N;
	int start = 1;
	int n;
	while(end-start>=0){
		n = (end+start)/2;
		if( K <= row_sum(n+1) && row_sum(n) < K){
			break;
		}
		else if(K < row_sum(n)){ //더 앞줄로
			end = n-1;
		}
		else if( row_sum(n+1) <= K){ //더 뒷줄로
			start = n+1;
		}
		
	}
	int column = K - row_sum(n);
	if(n+1 <= N){
		
	}
	else if(n+1 > N){
		
	}
	
	
	return 0;	
}