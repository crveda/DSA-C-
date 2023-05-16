#include <bits/stdc++.h>
using namespace std;

void printmap(map<int, string> &m)
{
    cout << "SIZE: " << m.size() << endl;
    for (auto value : m)
        cout << value.first << " " << value.second << endl;
}

void lexiographic()
{
    // print the lexigrahic order of the unique strings and also print their frequency
    // only applicable when string size is less like 100
    // larger string size the insertion time is -> stringsize*log(n)
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        m[x]++;
    }
    for (auto val : m)
        cout << val.first << " " << val.second << endl;
}

void unorderedMap()
{
    // for strings input, then for each queries print the frequency of that string
    unordered_map<string, int> um;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        um[x]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << um[s] << endl;
    }
    for (auto val : um)
        cout << val.first << " " << val.second << endl;
}

int main()
{
    map<int, string> m;
    m[1] = "ABD"; // O(log(n))
    m[5] = "CBD";
    m[3] = "sksd";
    m.insert({2, "jsdh"});
    auto it = m.find(3); // O(log(n))
    m.erase(3);          // O(log(n)) put it in if case
    // m.clear(); deletes full map
    // cout << it->second << " " << it->first << endl;
    cout << "HEREE\n";
    for (auto vals : m)
        cout << vals.first << " " << vals.second << endl;
    // map<int, string>::iterator it;
    //  for (it = m.begin(); it != m.end(); ++it)
    //      cout << it->first << " " << it->second << endl;
    // printmap(m);
    // unorderedMap();
    return 0;
}