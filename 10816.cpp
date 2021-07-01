#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;
int N;
vector<int> arr;

bool cmp(int a, int b){
	return a<b;
}

int binarySearch(vector<int> &v, int target){
	int start=0;
	int end= v.size()-1;
	int mid = (end+start)/2;
	int lb = N-1;
	int hb = 0;
	
	while(end-start>=0){
		if(v[mid] == target){
			return 1;
		}
		else if(v[mid] <= target){
			start=mid+1;
		}
		else {
			end=mid-1;
		}
		mid=(end+start)/2;
	}
	return 0;
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	
	cin >> N;
	
	for(int i=0; i<N; i++){
		long long int num;
		cin >> num;
		arr.push_back(num);
		
	}
	int M;
	cin >> M;
	
	sort(arr.begin(), arr.end(), cmp);
	
	for(int i=0; i<M; i++){
		int num;
		cin >> num;
		cout << binarySearch(arr, num) <<"\n";
		
	
	}
	
	return 0;	
}