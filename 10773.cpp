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
	
	int K;
	cin >> K;
	
	int N;
	
	vector<int> v;
	for(int i=0; i<K; i++) {
		cin >> N;
		if( N>0) {
			v.push_back(N);
		}
		else{ 
			v.pop_back();
		}
	}
	vector<int>::iterator it;
	int sum=0;
	for(it = v.begin(); it!=v.end();it++){
		sum= sum+ *it;
	}
	cout << sum << endl;
	return 0;
}