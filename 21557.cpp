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
	vector<int> v(9);
	
	for(int i=0; i<=N; i++) {
		cin >> v[i];
	}
	while(v.size() >2){

		if( v[0] >= v[v.size()]) {
			v[0]--;
			v[2]--;
			v.erase(v.begin()+1);
			N--;
		}
		else{
			v[v.size()]--;
			v[v.size()-2]--;
			
			v.erase(N-1);
			N--;
		}
	}
	
	int max = v[0]>=v[1]?v[0]:v[1];
	cout << max << endl;
	return 0;
		
	
}