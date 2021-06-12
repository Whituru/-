#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

//초직사각형
using namespace std;

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N, K;
	cin >> N >> K;
	
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	
	int U[200001];
	char T[200001];
	
	vector<int> A_v, B_v, C_v, D_v;
	
	for(int i=1; i<=N; i++){
		int tmp;
		cin >> T[i] >> tmp;
		if(T[i]=='A'){A_v.push_back(tmp);}
		else if(T[i]=='B'){B_v.push_back(tmp);}
		else if(T[i]=='C') {C_v.push_back(tmp);}
		else { D_v.push_back(tmp);}
	}
	
	
	
	
}