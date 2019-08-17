#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec;
     vector<int>::iterator it;

    for (int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }

    sort(vec.begin(), vec.end());



    int diff =numeric_limits<int>::max();

    for (int i = 1; i < vec.size(); ++i) {

        diff =min(diff, abs(vec[i] - vec[i-1]));
    }

    cout << diff << '\n';

    return 0;
}
