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
	
	int N;
	cin >> N;
	int a, b;
	
	if(N<5 && N%2 == 1) {
		printf("-1\n");
		return 0;
	}
	
	if((N%5)%2 !=0) {
		a = N/5 -1;
		b = (N-5*a)/2;
		
		
	}
	else {
		a = N/5;
		b = (N%5)/2;
	}
	printf("%d\n",a+b);
	return 0;
}