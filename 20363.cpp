#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;
int max(int a, int b){
	if(a>=b){
		return a;
	}
	else {
		return b;
	}
}
int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int X, Y;
	cin >> X >> Y;
	int MAX, MIN;
	
	MAX = X >= Y? X:Y;
	MIN = X <= Y? X:Y;
	
	int ans=0;
	int a = MIN/10;
	ans += a+MAX+MIN; 
	
	cout << ans << endl;
	
	
	
	
}