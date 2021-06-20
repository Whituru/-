#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N, K;
	cin >> N >> K;
	queue<int> q;
	
	for(int i=1; i<=N; i++){
		q.push(i);
	}
	
	while(q.size() >0){
		while(q.size() > K){
			q.pop(K);
		}
	}
	
	
	
	return 0;	
}