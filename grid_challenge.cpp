#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
	cin>>T;
	while(T--) {
		int N;
		cin>>N;
		string matrix[N];

		for(int i = 0; i < N; i++) {
			cin>>matrix[i];
			sort(matrix[i].begin(), matrix[i].end());
		}
        bool ck = true;
		for(int j = 0; j < N; j++) {
			for(int i = 1; i < N; i++) {
				if(matrix[i][j] < matrix[i-1][j]) {
					ck = false;
					break;
				}
			}


		}
		if(ck)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
