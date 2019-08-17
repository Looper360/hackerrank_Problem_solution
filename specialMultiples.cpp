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

long long int binar(long long int n)
{
    if(n==1)
        return 1;
    if(n%2==0)
        return 10*binar(n/2);
    else
        return 10*binar(n/2)+1;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a=1,b=9;
        cin>>n;
        while(b%n!=0)
        {
            a++;
            b=binar(a);
            b*=9;
        }
        cout<<b<<endl;
    }
    return 0;
}
