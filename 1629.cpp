#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;
long long int A, B, C;
long long int ans =0;

long long int pow(long long int x, long long int m){
	if(m==0)
		return 1;
	else if(m==1){
		return x;
	}
	if(m%2>0) //홀수
		return pow(x,m-1)*x;
	long long int half = pow(x, m/2);
	half %= C;
	return (half*half)%C;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	
	cin >> A >> B >> C;
	ans = pow(A,B)%C;
	cout << ans << endl;
	
	return 0;	
}