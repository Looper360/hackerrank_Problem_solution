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
int main(){
    int hour; int minute; int second; string m;
    scanf("%d:%d:%d", &hour, &minute, &second);cin>>m;

    if(m.find("PM")!=-1 && hour!=12 || (m.find("AM")!=-1 && hour==12))
            hour += 12;
    hour %= 24;
    printf("%02d:%02d:%02d\n", hour, minute, second);
    return 0;
}
