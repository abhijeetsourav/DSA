#include <bits/stdc++.h>
using namespace std;

// pairs are also a datatype
// lies inside the utility library


void explainPair(){
    pair<int, int> p0 = {1,2};
    cout << p0.first << " " << p0.second << endl;
    // p0.first = 10;

    pair<int, pair<int, int>> p1 = {1, {5,6}};
    cout << p1.first << " " << p1.second.second << " " << endl;

    pair<int, char> arr[] = {{1,'a'}, {2,'b'}, {3,'c'}};
    cout << arr[1].second << endl;
}

int main(){
    explainPair();
}