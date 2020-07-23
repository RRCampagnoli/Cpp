#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, int> par;
    par=make_pair(10,5);
    cout << par.first << " - " << par.second << endl;

    vector<int>vt = {1,3,5,7,9};    
    for(auto x:vt)
    {
        cout << x << " - ";
    }
    cout << endl;

    int tam = vt.size();
    size_t maxSize = vt.max_size();
    cout << "size: " << tam << endl;
    cout << "max_size: " << maxSize << endl;

    double x = 10;
    cout << pow(x,2) << endl;
}