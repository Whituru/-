#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

int cnt_zero(string str){
	int cnt =0;
	for(int i=0; i<str.length(); i++){
		if(str[i] == '0')
			cnt++;
	}	
	return cnt;
	
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N, M;
	cin >> N >> M;
	
	string arr[50];
	int zero_arr[50];
	for(int i=0; i<N; i++){
		cin>> arr[i];
		zero_arr[i] = cnt_zero(arr[i]);
	}
	
	int K;
	cin >> K;
	
	int max = 0;
	for(int i=0; i<N; i++) {
		int cnt =0;
		for(int j=0; j<N; j++){
			if(arr[i] == arr[j]){
				cnt++;
			}
		}
		if(cnt > max && zero_arr[i] <= K && (zero_arr[i]-K)%2 == 0){
			max = cnt;
		}
	}
	
	cout << max << endl;
	
	
	
	return 0;
}

	