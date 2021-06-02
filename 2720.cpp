#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

int main() {	
	int arr[6]={500,100,50,10,5,1};
	int cnt[6]= {0,};
	int N;
	cin >> N;
	N = 1000-N;
	for(int i=0; i<5; i++) {
		if(N/arr[i] >0) {
			cnt[i] = N/arr[i];
			N = N%arr[i];
		}
	}
	cnt[5] = N;
	int ans=0;
	for(int i=0; i<6; i++) {
		ans+= cnt[i];		
	}
	cout << ans <<endl;
	return 0;
	
}
