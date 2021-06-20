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
	
	int arr[100000][2];
	
	vector<vector<int>> arr(N, vector<int>(2,0));
	for(int i=0; i<N; i++){
		cin >> arr[i][0] >> arr[i][1];
	}
	
	
	
	return 0;	
}