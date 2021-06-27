#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
#include <vector>

using namespace std;

const int MAX = 100001;

vector<int> v[MAX];
int parent[MAX];
int visited[MAX] ={0,};

void line(int i){
	visited[i] = 1; //방명록 작성
	for(int j=0; j<v[i].size(); j++)
	{
		int next = v[i][j];
		if(visited[next] != 1){
			parent[next] = i;
			line(next);	
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	cin >> N;
	
		//원소가 vector인 배열
	int a, b;
	for(int i=1; i<N; i++){
		cin >> a >> b;
		v[a].push_back(b);	//간선 연결
		v[b].push_back(a);
	}
	//부모 -> 자식, 자식 -> 부모. 자식->부모만 남기자.
	//재귀적으로 구현
	
	line(1);	
	for(int i=2; i<=N; i++){
		cout << parent[i] << "\n";
	}
	
	return 0;	
}