#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;
bool cmp(int a, int b){
	return a<b;
}

int main() {	
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	cin >> N;
	long long int A, B, C, D,E,F;
	cin >> A >> B >> C >> D >> E >> F;
	long long int arr[] = {A,B,C,D,E,F};
	long long int double_min[] = {A+B, A+C, A+D, A+E, B+D, B+C, B+F, F+E, F+D, F+C, E+D, E+C};
	long long int triple_min[] = {A+B+C, A+D+E, A+D+B, A+E+C, F+B+D, F+C+B, F+E+C, F+E+D};
	
	
	sort(double_min, double_min+12);
	sort(triple_min, triple_min+8);
	sort(arr, arr+6);
	unsigned long long ans=0;
	ans +=  ((long long int)(N-2)*(N-2)+(long long int)(N-2)*(N-1)*4)*(long long int)arr[0];
	ans += triple_min[0] * 4;
	ans += double_min[0]*(8*N-12);
	
	
	if(N==1){
		cout << arr[0]+arr[1]+arr[2]+arr[3]+arr[4] <<endl;
	}
	else {
		cout << ans << endl;
		
	}
		
	return 0;
	
}