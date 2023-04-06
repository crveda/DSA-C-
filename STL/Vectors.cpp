#include <bits/stdc++.h>
using namespace std;

void printVect(vector<int> c)
{
    for (int i = 0; i < c.size(); i++)
        cout << c[i] << " ";
    cout << endl;
}

void vectorpair()
{
    vector<pair<int, int>> v;
    for (int i = 0; i < 5; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    for (int i = 0; i < 5; i++)
        cout << v[i].first << " " << v[i].second << endl;
}

void vectorofvector()
{
    vector<vector<int>> v;
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        int x = 2;
        vector<int> temp;
        int val = 4;
        for (int j = 0; j < x; j++)
            temp.push_back(val);
        v.push_back(temp);
    }
    v[0].push_back(5);
    v[1].push_back(10);
    // v.push_back(vector<int>());  inserting one empty vector
    for (int i = 0; i < n; i++)
    {
        printVect(v[i]);
    }
}

int main()
{
    vector<int> w;
    int nw = 5;
    for (int i = 0; i < nw; i++)
    {
        int x = rand();
        w.push_back(x);
    }
    vector<int>::iterator it = w.begin();
    for (it = w.begin(); it != w.end(); ++it) // it++ -> Next iteartor ++it -> Next location
        cout << "Iterator: " << (*it) << endl;
    vector<pair<int, int>> vp = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator itp;
    for (itp = vp.begin(); itp != vp.end(); ++itp)
        cout << (itp->first) << " " << (*itp).second << endl; //(*itp).first <==> (it->first)
    printVect(w);
    for (int value : w) // range based loop , for all containers
    {
        value++;
        cout << value << " ";
    }
    printVect(w);
    auto a = 1;
    // cout << endl;
    // vector<int> v(4, 4);
    // v.push_back(10);
    // printVect(v);
    // v.pop_back();
    // printVect(v);
    // vector<int> v2 = v; // O(n)
    // v2.push_back(19);
    // printVect(v2);
    // cout << "\nNested Vectors\n";
    // vectorpair();
    cout << endl;
    int q;
    cin >> q;
    vector<int> vee[q];
    for (int i = 0; i < q; i++)
    {
        int s;
        cin >> s;
        for (int j = 0; j < s; j++)
        {
            int x;
            cin >> x;
            vee[i].push_back(x);
        }
    }

    for (int i = 0; i < q; i++)
    {
        printVect(vee[i]);
    }
    cout << "vector: " << vee[0][0] << endl; // its a 2D ARRAY with N as size with row fixed and column dynamic changes
    vectorofvector();

    return 0;
}