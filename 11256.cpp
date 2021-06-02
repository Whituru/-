#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

bool compare(int a, int b) {
	return a > b; //내림차순
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int T;
	cin >> T;
	int box[1000];
	for(int i=0; i<T; i++){
		int a, b;
		int J, N;
		int cnt=0;
		cin >> J >> N;
		
		fill_n(box, 1000, 0);
		for(int j=0; j<N; j++){
			cin >> a >> b;
			box[j] = a*b;
		}
		sort(box, box+N, compare);
		
		while(J>0) {
			J -= box[cnt];
			cnt++;
		}
		
		cout << cnt << endl;
		
	}
	
	return 0;
	
	
	
}