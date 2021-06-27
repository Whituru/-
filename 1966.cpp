#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
#include <queue>
using namespace std;

bool judge(queue<pair<int,int>> q){
	int j = q.size();
	int tmp = q.front().second;
	for(int i=0; i<j; i++){
		if(tmp < q.front().second)
			return false;
		q.pop();
	}
	
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int T;
	cin >> T;
	
	//테스트 케이스 반복
	for(int i=0; i<T; i++){
		queue<pair<int,int>> q;
		int N, M;
		cin >> N >> M;
		//M이 목표의 인덱스를 나타낸다
		
		int P;
		for(int j=0; j<N; j++){
			cin >> P;
			q.push(make_pair(j,P));
		}
		int cnt =0;
		
		while(1) {
			if(judge(q) && q.front().first == M){
				cnt++;
				break;
			}
			
			if(judge(q)){ //출력 가능하다면
				q.pop();
				cnt++;
			}
			else {
				q.push(q.front());
				q.pop();
			}
			
		}
		
		cout << cnt << endl;
		
	}

	
	
	
	
	return 0;	
}