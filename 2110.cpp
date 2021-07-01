#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

bool cmp(long long int a, long long int b){
	return a<b;
}

vector<long long int> x;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N, C;
	cin >> N >> C;
	
	for(int i=0; i<N; i++){
		long long int num;
		cin >> num;
		x.push_back(num);
	}
	
	sort(x.begin(), x.end(), cmp);
	
	for(int i=0; i<N-1; i++){
		
	}
	
	
	return 0;	
}