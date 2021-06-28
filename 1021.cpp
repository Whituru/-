#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
#include <queue>

using namespace std;

int current(queue<int> &q, int A){
	queue<int> p;
	int idx;
	p = q;
	for(int i=0; i<q.size(); i++){
		if(p.front() == A){
			idx = i;
			break;
		}
		p.pop();
	}
	return idx;
}

void push_front(queue<int> &q){
	int tmp = q.front();
	q.pop();
	q.push(tmp);
	return;
}

void push_back(queue<int> &q){
	queue<int> p;
	p.push(q.back());
	int T=q.size();
	
	for(int i=0; i<T-1; i++){
		p.push(q.front());
		q.pop();
	}
	q = p;
	
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N, M;
	cin >> N >> M;
	
	queue<int> q;
	for(int i=1; i<=N; i++){
		q.push(i);
	}
	
	int A; 	//빼야할놈
	
	int ans=0;
	for(int i=0; i<M; i++){
		cin >> A;
		int idx = current(q, A)+1; //요소의 현재 위치
		if(idx-1 < q.size()-idx+1 ) 	//앞으로 당기는게 유리함.
		{
			for(int j=0; j<idx-1; j++){
				push_front(q);	
				ans++;
			}
		}
		else {
			for(int j=0; j<q.size()-idx+1; j++){
				push_back(q);
				ans++;
			}
		}
		q.pop();
	}
	
	cout << ans << endl;
	
	return 0;	
}