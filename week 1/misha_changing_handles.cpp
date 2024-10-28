#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    map<string, string> store_map, final_map;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (store_map.find(a) != store_map.end())
        {
            string realUser = store_map[a];
            final_map[realUser] = b;
            store_map.erase(a);
            store_map[b] = realUser;
        }
        else{
            final_map[a] = b;
            store_map[b] = a;
        }
    }
    
    cout << final_map.size() << endl;
    for(auto [x, y] : final_map){
        cout << x << " " << y << endl;
    }

    return 0;
}