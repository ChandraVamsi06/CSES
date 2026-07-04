#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, target;
    cin >> n >> target;
    vector<pair<int, int>> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++){
        int l = 0, r = n - 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            int tar = target - arr[i].first;
            if(i != mid && arr[mid].first == tar){
                cout << arr[i].second << " " << arr[mid].second;
                return 0;
            }
            else if(arr[mid].first < tar) l = mid + 1;
            else r = mid - 1;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}