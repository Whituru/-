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
	vector<int> v;
	int tmp;
	for(int i=0; i<N; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());	//오름차순 정렬
	
	
	int cnt=0;
	while(v.size()>1){
		cnt++;
		v[0]--;
		v.pop_back();
		vector<int>::iterator itr= v.begin();
		if(v[0]==0){
			v.erase(itr, itr+1);
		}	
	}
	
	cout << cnt << endl;
	
	
	
	
	
	return 0;
	
}