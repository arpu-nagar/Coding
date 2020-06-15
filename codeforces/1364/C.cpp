#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n); 

    for(auto &i : arr) cin >> i;
    set<int> s;
    set<pair<int,int>> ans;
    int c = -1;
    for(int i=0;i<n;i++){
       auto p =  s.find(arr[i]);
       if(p == s.size()){
           s.insert(arr[i]);
            if(c == -1){
                c++;
                ans.insert(make_pair())
            }
       }


    }
}