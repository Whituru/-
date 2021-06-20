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
	
	int N;
	cin >> N;
	
	int arr[1000000];
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	stack<int> s;
	s.push(-1);
	int tmp;
	tmp = arr[N-1];
	for(int i=N-2; i>=0; i--){
		if(arr[i] >= tmp){
			s.push(-1);
		}
		else {
			s.push(tmp);
		}
		
	}
	
	return 0;
	
}