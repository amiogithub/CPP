#include<bits/stdc++.h>
using namespace std;

int sumOfFirstAndLast(vector<int>& nums) {
        if (nums.size()==0) {
            cout<<"No element present"<<endl;
            return 0;
        }
        int first=nums[0];
        int last=nums[nums.size()-1];
        return first+last;
                                                                                                 



        }



int main() {

    vector<int> nums = {2}; // Example input
    // Call the method and print the result
    cout << "Sum of first and last element: " << sumOfFirstAndLast(nums) << endl;
    return 0;
}