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
int main()
{
    inout
     int n;
    scanf("%d",&n);
    for(int i=0; i<n;++i){
        for (int j= 0;j<((n-i)-1);++j){
            printf(" ");
        }
        for (int k=0;k<(i+1);++k){
            printf("#");
        }
        printf("\n");
    }
}
