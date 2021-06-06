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
	
	while(1){
		cin >> N;
		if(N ==0){
			break;
		}
		
		
		vector <int> v;
		
		int zero_cnt=0;
		int k;
		for(int i=0; i<N; i++) {
			cin >> k;
			v.push_back(k);
			
			if(k==0) {
				zero_cnt++;
			}
		}
		
		sort(v.begin(), v.end());	//오름차순
		
		int sum=0;
		
		if(zero_cnt == 1 && v.size()%2==0) {
			v[0] = v[2];
			v[2] = 0;
		}
		else if(zero_cnt == 1) {
			v[0] = v[1];
			v[1] = 0;
		}
		else if(zero_cnt >1) {
			int a = v[zero_cnt] ;
			int b = v[zero_cnt+1];
			v[0] = a;
			v[1] = b;
			v[zero_cnt] = 0;
			v[zero_cnt+1] = 0;
		}
		
		int mul = 1;
		while(1) {
			
			sum += mul * v.back();
			v.pop_back();
			sum += mul * v.back();
			v.pop_back();
			
			mul *= 10;
			if(v.size() < 2) {
				break;
			}
		}
		
		if(v.size() == 1) {
			sum += mul * v.back();
		}
		
		
		cout << sum << endl;
		 
		
		
	}
	return 0;
}

	