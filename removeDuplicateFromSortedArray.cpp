#include <iostream>
#include <vector>
#include <algorithm>
#include "../../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/algorithmfwd.h"
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;

    if (n == 0) return ans;

    for (int i = 1; i < n;) {
        if (nums[i] == nums[i - 1]) {
            ans++;
            nums.erase(nums.begin() + i);
            n--;  // Decrease the size of the vector
        } else {
            i++;
        }
    }
 
    return n;
 }

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = removeDuplicates(arr);
    cout<<ans;
    return ans;
}