#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int getBeautifulPairsCount(vector<int> a, vector<int> b) {
    int count=0;
    vector<int>::iterator it;
    vector<int>::iterator bitr;

    for(it=a.begin();it!=a.end();it++) {
         bitr= find(b.begin(),b.end(),*it);

        if(bitr != b.end()) {
            count++;
            b.erase(bitr);
        }
    }
    if(b.size() == 0) count--;
    else count++;
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, temp;
    cin >> n;
    vector<int> a, b;
    for(int i=0; i < n; i++) {
        cin >> temp;
        a.push_back(temp);
    }
    for(int i=0; i < n; i++) {
        cin >> temp;
        b.push_back(temp);
    }
    cout << getBeautifulPairsCount(a, b);
    return 0;
}
