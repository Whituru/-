#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
#include <stack>

using namespace std;
bool pred(int a, int b){
	return a < b;	//오름차순
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int N;
	cin >> N;
	
	vector<pair<int,int>> v;
	int L, H;
	
	int max_H=0;	//최대 높이
	int idx1, idx2; //각각 최대높이의 시작점 끝점
	int min_length=1000, max_length=0;
	
	//입력 받으면서 범위 인식.
	for(int i=0; i<N; i++){
		cin >> L >> H;
		v.push_back(pair<int, int>(L,H));
		
		if(min_length > L){
			min_length = L;
		}
		if (max_length < L) {
			max_length = L;
		}
	}
	
	sort(v.begin(), v.end());
	//정렬 후 최대 높이의 위치를 구한다.
	for(int i=0; i<N; i++){
		if(max_H < v[i].second){
			max_H = v[i].second;
			idx1 = i;
			idx2 = -1;
		}
		else if (max_H == v[i].second) {
			idx2 = i;
		}
	}
	int j=0;
	int sum=0;
	
	for(int i=1; i<=idx1; i++){
		//높이가 높아질때 넓이가 적용됨
		if(v[i].second >v[j].second){
			sum += (v[i].first - v[j].first)*v[j].second;
			j = i;
		}
	}
	
	if(idx2 == -1) {	//최대기둥이 한개
		sum+=v[idx1].second;
		idx2 = idx1;
	}
	else {
		sum+=(v[idx2].first-v[idx1].first+1)*v[idx1].second;
	}
	
	j = N-1;
	
	for(int i=N-2; i>=idx2; i--){
		//높이가 높아질때 넓이가 적용됨
		if(v[i].second >v[j].second){
			sum += (v[j].first-v[i].first)*v[j].second;
			j = i;
		}
	}
	
	
	
	
	
	cout << sum << endl;
	
	
	return 0;
}
