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
	
	int kang[3];
	while(scanf("%d", &kang[0])!= EOF) {
		cin >> kang[1] >> kang[2];
		int max =((kang[1] - kang[0]) > (kang[2] - kang[1]) ? (kang[1] - kang[0]) : (kang[2] - kang[1]));
		
		if(max <= 0) {
			printf("0\n");
		}
		else {
			printf("%d\n", max-1);
	
		}
	}
	return 0;
}
 //다시 공부해볼 필요가 있음, cin 과 scanf의 차이