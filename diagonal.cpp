#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    int i=0,sum=0,j,sum2=0;
    scanf("%d",&n);
    int a[n][n];

    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){

          scanf("%d",&a[i][j]);
       }
    }
     while(i<n)
     {
          sum=sum+a[i][i];
          i++;
     }
        j=n-1,i=0;
     while(i<n)
     {
      sum2=sum2+a[i][j];
      i++;
      j--;
     }
        printf("%d",abs(sum-sum2));
        return 0;
}
