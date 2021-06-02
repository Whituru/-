#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

bool compare(int a, int b) {
	return a<b;
}


int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N, L;
	cin >> N >> L;
	
	int h[1000];
	for(int i=0; i<N; i++){
		cin >> h[i];
	}
	
	sort(h, h+N, compare);
	
	int i=0;
	while(1) {
		if(i>=N){
			break;
		}
		if(L >= h[i]) {
			L++;
			i++;
		}
		else {
			break;
		}
		
	}
	cout << L << endl;
}