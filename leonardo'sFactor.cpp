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


vector<ll>primes;

bool visited[10050];

void PrimeGenerator(ll end_point)
{

    primes.push_back(2);
    for (ll i=4;i<=end_point;i+=2)
        visited[i] = true;
        for(ll i=3;i<=end_point;i+=2)
        {
            if (!visited[i])
            {
                primes.push_back(i);
                for (ll j=i*i;j<=end_point;j+=2*i)
                        visited[j] = true;
            }
    }
   // len = primes.size();
    ///cout<<primes[len-1]<<endl;
}
void primeCount(ll range)
{
    ll i;
    ll multiply=1;
    for( i=0;multiply<=range && i<16;i++)
    {
        multiply*=primes[i];
    }
    cout<<i-1<<lne;
}

int main()
{
inout

    PrimeGenerator(100);

   ll q;
   cin>>q;
   for(ll i=0;i<q;i++)
   {
       ll a;
       cin>>a;
       primeCount(a);
   }

}
