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
 int n,k,q,a,m;
 vector<int>ar;
 scanf("%d %d %d",&n,&k,&q);
 for(int i = 0; i < n; i++){
        scanf("%d",&a);
        ar.push_back(a);
 }
 k%=n;
 for(int i = 0; i < q; i++){
        scanf("%d",&m);

        if(m-k >= 0)printf("%d\n",ar[m-k]);
        else printf("%d\n",ar[m-k+n]);
 }
 return 0;
}
