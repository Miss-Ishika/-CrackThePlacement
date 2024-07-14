#include <iostream>
#include <vector>
#include <algorithm>
#include "../../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/algorithmfwd.h"
#include <climits>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(), a.end());
        long long mn = LLONG_MAX;
        
        // 5 7 11 12 13 13 // 4
        
        for(int i=0; i<n-m; i++){
            mn = min(mn, (a[i+m-1]-a[i]));
        }
        for(int i=n-1; i>m-2; i--){
            mn = min(mn, (a[i]-a[i-(m-1)]));
        }
        
        return mn;
    } 

int main(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    long long m;
    cin>>m;
    long long ans = findMinDiff(arr, n, m);
    cout<<ans;
    return ans;
}