#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

char **arr;	
void read(int a, int b, char** arr);
int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N, K;
	cin >> N >> K;
	map<char, int> m;
	char key; int value;
	for(int i=0; i<K; i++){
		cin >> key >> value;
		m.insert(make_pair(key, value));
	}	
	
	static char **arr;	
	arr = (char**)malloc(sizeof(char*)*N);
	
	
	map<char,int>::iterator iter = m.begin();
	int tmp =0;
	
	for(int i=0; i<N; i++) {
		arr[i] = (char*)malloc(sizeof(char)*(N-i));
		for(int j=0; j<N-i; j++){
			if(iter->second == 0){
				iter++;
				j--;
				continue;
			}
			if( j==0) {
				arr[i][j] = iter->first;
				iter->second--;
			}
			
			else if(j!=0){
				int cnt = 0;
				while(iter->second<2) {
					iter++;
					cnt++;
					if(iter == m.end()){
						tmp = 1;
						break;
					}
				}
				arr[i][j] = iter->first;
				iter->second -= 2;
				
				for(int k=0; k<cnt; k++){
					iter--;
				}
			}
			if(tmp == 1){
				break;
			}
			printf("%d %d\n", i, j);
		}
		if(tmp == 1){
			break;
		}
	}

	
	if(tmp == 1){
		cout << "IMPOSSIBLE" << endl;
	}
	
	
	int P;
	cin >> P;
	int b[50];
	for(int i=0; i<P; i++){
		cin >> b[i];
	}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N-i; j++){
			read(i, j, arr);
			cout << 1 ;
		}
		cout << endl;
	}
	return 0;
}

void read(int i, int j, char** arr){
	if(i >= j) {
		cout << arr[i][j-i];
		
	}
	else { 
		cout <<arr[j][i-j];
		}
}
