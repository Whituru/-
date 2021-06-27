#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
#include <queue>
using namespace std;

void circle_back(queue<int> &q){	//한바퀴 돌려주기
	int tmp = q.front();
	q.pop();
	q.push(tmp);
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N, K;
	cin >> N >> K;	
	
	queue<int> q;
	vector<int> v;
	
	for(int i=1; i<=N; i++){
		q.push(i);
	}
	
	while(1) {
		
		
		
		for(int i=0; i<K-1; i++){
			circle_back(q);
		}
		
		v.push_back(q.front());
		q.pop();
		
		if(q.size() == 0)
			break;
	}
	cout << "<";
	for(int i=0; i<N-1; i++){
		cout << v[i] << ", ";
	}
	cout << v[N-1]<< ">" << endl;
	
	return 0;	
}