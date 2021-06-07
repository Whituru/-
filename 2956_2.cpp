#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;
char arr[30000][30000];
int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N, K;
	cin >> N >> K;
		
	map<char, int> m;
	
	char a; int b;
	int cnt =0;	//홀수의 갯수를 세기 위한 변수
	for(int i=0; i< K; i++){
		cin >> a >> b;
		m.insert(make_pair(a, b));
		if(b%2 == 1){
			cnt++;	//홀수를 세기
		}
	}
	
	map<char,int>::iterator iter;
	iter = m.begin();
	
	cnt = 0;	//탈출 조건을 위한 변수
	int tmp=0;	//이중 for문 탈출을 위한 변수
	
	if(cnt > 1 ){
		cout << "IMPOSSIBLE" <<endl;
		return 0;
	}
	
	
	else if(N%2==1 && cnt == 1) {
		//good
	}
	
	
	else if(N%2==0 && cnt == 0) {
		//also good
		for(int i=0; i<N; i++){	//행
			for(int j=0; j<N; j++){	//열
				if(iter == m.end()||cnt ==(N*N)/2){
					tmp = 1;
					break;
				}
				
				iter -> second -= 2;
				arr[i][j] = iter -> first;
				arr[j][i] = iter -> first;
				
				cnt++;
				
				if(iter->second < 2) {
					iter++;
				}
				
			
				if(tmp ==1 ){
					break;
				}
			}
		}
	}

	

	else {
		cout << "IMPOSSIBLE" <<endl;
		return 0;
	}
	
	for(int i=0; i<N; i++){	//행
		for(int j=0; j<N; j++){	//열
			cout << arr[i][j];
			
		}
		cout <<endl;
	}

	
	return 0;
}
