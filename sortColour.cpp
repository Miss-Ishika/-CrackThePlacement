#include <iostream>
#include <vector>
#include <algorithm>
#include "../../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/algorithmfwd.h"
using namespace std;

void sortColors(vector<int>& nums) {
        int a = 0;
        int b = 0;
        int n = nums.size()-1;
        while(b<=n){
            if(nums[b]==0){
                swap(nums[b], nums[a]);
                b++;
                a++;
            }
            else if(nums[b]==1){
                b++;
            }
            else{
                swap(nums[b], nums[n]);
                n--;
            }
        }
    }

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sortColors(arr);
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}