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
	
	int N, M;
	cin >> N >> M;
	
	vector<int> A[100];
	vector<int> B[100];
	vector<int> ANS[100];
	int num;
	for(int i=0; i<N; i++){	//줄
		for(int j=0; j<M; j++){ //칸
			cin >> num;
			A[i].push_back(num);
		}
	}
	int P, Q;
	cin >> P >> Q;
	for(int i=0; i<P; i++){	//줄
		for(int j=0; j<Q; j++){ //칸
			cin >> num;
			B[i].push_back(num);
		}
	}
	
	for(int i=0; i<N; i++){
		
		for(int j=0; j<Q; j++){
			int ans=0;
			for(int k=0; k<P; k++){
				ans+=A[i][k] * B[k][j];
			}
			ANS[i].push_back(ans);
			cout << ans << " ";
		}
		cout << endl;
	}

	
	return 0;	
}