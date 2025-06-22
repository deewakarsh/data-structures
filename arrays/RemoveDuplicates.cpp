/*
Remove Duplicates from Sorted Array: 
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each 
unique element appears only once. The relative order of the elements should be kept the same. 
Then return the number of unique elements in nums.
Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
Change the array nums such that the first k elements of nums contain the unique elements in the order 
they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 
*/
#include <iostream>
#include <vector>

using namespace std;
int removeDuplicates(vector<int>& values)
{
    int k=1;
    int nonDuplicatePath=1;
    for(int i=1;i<values.size();i++)
    {
        if(values[i-1] != values[i])
        {   
            values[nonDuplicatePath] = values[i];
            nonDuplicatePath++;
            k++;
        }
    }
    return k;
}

void printArray(const vector<int>& arr, int n)
{
    cout << "[";
    for (size_t i = 0; i < n; ++i) {
        cout << arr[i];
        if (i < n - 1) {
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
    printArray(nums,n);
    int k =removeDuplicates(nums);
    
    cout << "After moving zeroes to the end: ";
    printArray(nums,k);

    return 0;
}