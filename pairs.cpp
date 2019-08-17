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

   int n,k;
   cin>>n>>k;

   map<int,bool>M;
   vector<int>vec;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       vec.push_back(a);
       M[a]=true;
   }
   int cnt=0;
    for(int i=0;i<n;i++)
    {
       int r=vec[i]+k;
       if(M[r])cnt++;

   }
   cout<<cnt<<lne;
}
