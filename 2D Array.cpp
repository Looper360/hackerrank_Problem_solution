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

 void Sum(ll arr[6][6]){
            //ROw
            int sum=-1000;
            for(int i =0 ; i<4;i++){
                for(int x =0 ; x<4; x++){

                    int top = arr[i][x]+arr[i][x+1]+arr[i][x+2];
                    int middle = arr[i+1][x+1];
                    int bottom = arr[i+2][x]+arr[i+2][x+1]+arr[i+2][x+2];
                    if(top+middle+bottom>sum){sum=top+middle+bottom;}
                }
            }
            cout<<sum<<lne;


}

int main()
{
inout
    ll arr[6][6];
  for(int i=0;i<6;i++)
  {
      for(int j=0;j<6;j++)
      {
          cin>>arr[i][j];
      }

  }
  Sum(arr);
}
