#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
#include <queue>

using namespace std;

void push_front(queue<int> &q, int X) {
	queue<int> v;
	int T = q.size();
	v.push(X);
	for(int i=0; i<T; i++){
		v.push(q.front());
		q.pop();
	}
	q = v;
	return;
}

void pop_back(queue<int> &q) {
	queue<int> v;
	int T = q.size();
	for(int i=0; i<T-1; i++){
		v.push(q.front());
		q.pop();
	}
	cout << q.front() << endl;
	q = v;
	return;
}

void back(const queue<int> &q){
	queue<int> v = q;
	int T = q.size();
	for(int i=0; i<T-1; i++){
		v.pop();
	}
	cout << v.front() << endl;
	return;
	
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	cin >> N;
	
	queue<int> q;
	for(int i=0; i<N; i++){
		string str; int X;
		cin >> str;
		
		
		if(str == "push_front")
		{
			cin >> X;
			push_front(q, X);
			
		}	
		else if(str == "push_back"){
			cin >> X;
			q.push(X);
			
		}
		else if(str == "pop_front"){
			if(q.empty()){
				cout << -1 << endl;
			}
			else {
				cout << q.front() << endl;
				q.pop();	
			}
		}
		else if(str == "pop_back"){
			if(q.empty()){
				cout << -1 << endl;
			}
			else {
				pop_back(q);	
			}
		}
		else if(str == "size"){
			cout << q.size() << endl;
		}
		else if(str == "empty"){
			cout << q.empty() << endl;
		}
		else if(str == "front"){
			if(q.empty())
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else if(str == "back"){
			if(q.empty())
				cout << -1 << endl;
			else 
				back(q);
		}
		
		
		
	}
	
	
	
	return 0;	
}