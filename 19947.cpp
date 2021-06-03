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
	
	double H;
	int Y;
	int A=0;int B=0; int C=0;
	
	cin >> H >> Y;
	int tmp = Y;
	if(tmp/5 > 0 ){
		A = tmp/5;
		tmp = tmp%5;
	}
	if (tmp/3 >0) {
		B = tmp/3;
		tmp = tmp%3;
	}
	
	C = tmp;
	
	for(int i=1; i<=A; i++) {
		H = (int)(H* 1.35);
	}
	for(int i=1; i<=B; i++) {
		H = (int)(H* 1.20);
	}
	for(int i=1; i<=C; i++) {
		H =  (int)(H* 1.05);
	}
	
	printf("%d\n", (int)H);
	return 0;
}