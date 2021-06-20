#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
#include <queue>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	cin >> N;
	
	queue<int> q;
	
	for(int i=1; i<=N; i++){
		q.push(i);
	}
	
	while(q.size() > 1){
		q.pop();
		int tmp =q.front();
		q.pop();
		q.push(tmp);
	}
	cout << q.front() << endl;
	
	
	return 0;	
}