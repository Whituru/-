#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
#include <cmath>

using namespace std;
bool cmp(int a, int b){
	return a<b;	//오름차순
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	cin >> N;
	
	vector<int> v;
	
	int arr[8001]={0,};
	int lower=4000; int upper=-4000;	//범위를 위한 변수
	int tmp; long long int sum=0;
	
	for(int i=0; i<N; i++){
		cin >> tmp;
		v.push_back(tmp);
		sum+=tmp;				//합 구하기
		arr[tmp+4000]++;			//개수 구하기
		if(upper < tmp){
			upper = tmp;
		}
		if(lower > tmp){
			lower = tmp;
		}
	}
	
	sort(v.begin(), v.end());	//중앙값 구하기.
	float mean = (float)sum/N;
	
	int idx1=-1, idx2;
	int max=0;
	for(int i=0; i<=8000; i++){
		if(arr[i] > max){
			max = arr[i];
			idx1 = i;	//최빈값 갱신
			idx2 = -1;	//두번째 최빈값은 발견 안됨
		}
		else if(arr[i] == max && idx2 == -1){//두번째 최빈값
			idx2 = i;
		}
	}
	
	//답 출력
	printf("%d\n", (int)round(mean));
	printf("%d\n", v[N/2]);
	
	if(idx2 == -1){
		printf("%d\n", idx1-4000);
	}
	else {
		printf("%d\n", idx2-4000);
	}
	
	printf("%d\n", upper-lower);
	
	
	return 0;
	
}