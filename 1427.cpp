#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

bool cmp(int a, int b){
	return a > b;	//내림차순
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	string N;
	getline(cin, N);
	vector<int> v;
	for(int i=0; i<N.length(); i++){
		v.push_back(N[i]-'0');
	}
	
	sort(v.begin(), v.end(), cmp);
	for(int i=0; i<N.length(); i++){
		cout << v[i];
	}
	
	return 0;	
}