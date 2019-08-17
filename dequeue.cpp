#include <bits/stdc++.h>

using namespace std;


int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        deque<int>q;
        vector<int>v;
        vector<int>::iterator it;


        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            q.push_back(a);
            if(q.size()==k)
            {
                 int Max=0;
               int cnt=0;
               while(cnt!=k)
               {
                   int f=q.front();
                   q.pop_front();
                   q.push_back(f);

                   Max=max(Max,f);
                   cnt++;
               }
               q.pop_front();

                v.push_back(Max);

            }

        }
        for(it=v.begin();it!=v.end();it++)
            cout<<(*it)<<" ";
        cout<<endl;


    }
}
