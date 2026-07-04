#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<vector<int>> movies;
    for(int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        movies.push_back({end, start});
    }
    sort(movies.begin(), movies.end());
    int res = 0, last = 0;
    for(auto i: movies) {
        if(i[1] >= last) {
            res++;
            last = i[0];
        }
    }
    cout << res;
    return 0;
}