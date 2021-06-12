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
	
	string A, B;
	
	cin >> A >> B;
	
	if(A.length() != B.length()){
		cout << 0 << endl;
		return 0;
	}
	int cnt =0;
	for(int i=0; i<A.length(); i++){
		
		if(A[i]==B[i] && A[i] == '8'){
			cnt++;
		}
		
		if(A[i] != B[i] ){
			break;
		}
	}
	cout << cnt << endl;
	
	
	return 0;
}
