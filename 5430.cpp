#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
#include <deque>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int T;
	cin >> T;
	
	for(int i=0; i<T; i++){
			//입력받기
		//명령
		string str;
		cin >> str;
		//원소 개수
		int N;
		cin >> N;
		//배열
		string str2;
		cin >> str2;
		
		deque<int> dq;
		int num=0;
		
		for(int j=0; j<str2.length(); j++){
			if(str2[j] == '[')
				continue;
			else if(str2[j] == ',' || str2[j] == ']' && N>0){
				dq.push_back(num);
				num =0;
				N--;
			}
			else {
				num*=10;
				num+=str2[j]-'0'; //수 갱신
			}
		}
		
		bool tmp = true; //정방향 false는 역방향
		bool cnt = true;
		for(int j=0; j<str.length(); j++){
			if(str[j] == 'R')
				tmp = !tmp;
			else if(str[j] == 'D'){
				if(dq.empty()){
					cnt = false;
					break;
				}
				if(tmp){ //정방향일때
					dq.pop_front();
				}
				else { //역방향일때
					dq.pop_back();
				}
			}
		}
		
		if(cnt){
			cout << '[';
			
			if(tmp) { //정방향일때
				int T=dq.size();
				for(int j=0; j<T-1; j++)
				{
					if(!dq.empty()){
						cout << dq.front();
						dq.pop_front();
						cout << ',';
					}
				}
				if(!dq.empty()){
					cout << dq.front();
				}
				cout << ']'<<endl;
			}
			else {
				int T=dq.size();
				for(int j=0; j<T-1; j++)
				{
					if(!dq.empty()){
						cout << dq.back();
						dq.pop_back();
						cout << ',';	
					}
				}		
				if(!dq.empty()){
					cout << dq.back();
				}
				cout << ']'<<endl;
			}	
		}
		
		
		
		else {
			cout << "error"<<endl;
		}
		
		
	}
	
	
	return 0;	
}