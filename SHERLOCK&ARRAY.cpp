#include<bits/stdc++.h>
#define ll long long
//#define clr(arr, 0) memset(arr, 0, sizeof(arr))
#define vll vector<long long>
#define lne '\n'
#define spc ' '
#define fst first
#define sec second
#define inout ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fileopen system("input.txt"); freopen("input.txt","r",stdin); FILE *f=freopen("output.txt","w",stdout);
#define fileclose fclose(f); system("output.txt");
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--) {
		int N;
		cin>>N;
		ll A[100010], sumLeft[100010],sumRight[100010];
		cin>>A[0];
		sumLeft[0] = 0;
		sumRight[N-1] = 0;
		for(int i = 1; i < N; i++) {
			cin>>A[i];
			sumLeft[i] = sumLeft[i-1] + A[i-1];
		}
		for(int i = N-2; i >= 0; i--) {
			sumRight[i] = sumRight[i+1] + A[i+1];
		}

		bool exists = false;
		for(int i = 0; i < N; i++) {
			if(sumLeft[i] == sumRight[i]) {
				exists = true;
				break;
			}
		}
		if(exists) {
			cout<<"YES\n";
		} else {
			cout<<"NO\n";
		}

	}
    return 0;
}
