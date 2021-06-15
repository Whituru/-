#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

bool cmp(int a, int b){
	return a<b;	//오름차순 설정
	
}
int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N, M;
	cin >> N >> M;
	vector<long long int> v;
	long long int tmp;
	for(int i=0; i<N; i++){
		cin >> tmp;
		v.push_back(tmp);
	}
	
	while(M > 0) {
		sort(v.begin(), v.end());
		tmp = v[0] + v[1];
		v[0] =tmp;
		v[1] =tmp;
		M--;
	}
	
	long long int ans=0;
	for(int i=0; i<N; i++){
		ans += v[i];
	}
	
	cout << ans << endl;
	return 0;
}

