/*-------------------------------------------------------------------------
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]
-------------------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

void moveZeroesToEnd(vector<int>& values)
{
    int nonZeroAddr=0;
    for (int i=0; i< values.size();i++)
    {
        if(values[i]!=0)
        {
            int temp = values[i];
            values[i]=values[nonZeroAddr];
            values[nonZeroAddr]=temp;
            nonZeroAddr++;
        }
    }
}

void printArray(const vector<int>& arr)
{
    cout << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}


int main()
{
    vector<int> nums ;
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    nums.resize(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << "Original array: ";
    printArray(nums);
    moveZeroesToEnd(nums);
    
    cout << "After moving zeroes to the end: ";
    printArray(nums);

    return 0;
}