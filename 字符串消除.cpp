#include <iostream>
#include <string>
#include <vector>
using namespace std;
string test;
string del(string s){
	int len = s.size();
	vector <char> res;
	for(int i = 0; i < len; i++){
		if(i != len-1 && s[i] == s[i+1]) continue;
		if(i != 0 && s[i] == s[i-1]) continue;
		res.push_back(s[i]);
	}
	return string(res.begin(), res.end());
}
int main(){
	int n;
	char ins[3] = {'A', 'B', 'C'};
	while(cin >> n){

		for(int i = 0; i < n; i++){
			string s;
			cin >> s;
			int max = s.size();
			int min = max;
			for(int j = 0; j <= s.size();j++){
				for(int k = 0; k < 3;k++){
					string b = s;
					b.insert(b.begin()+j, ins[k]);
					int len = b.size();
					b = del(b);
					while(len > b.size() ){
						len = b.size();
						b = del(b);
					}
					if(min > len){
						min = len;
					}

				}
			}
			cout << max - min+1<<endl;
		}
	}
	system("PAUSE");
	return 0;
}