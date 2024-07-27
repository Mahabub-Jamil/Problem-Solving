#include <vector>
using namespace std;

class Solution
{
private:
    void merge(vector<int> &nums, int left, int mid, int right)
    {
        vector<int> temp(right - left + 1);
        int i = left, j = mid + 1, k = 0;

        while (i <= mid && j <= right)
        {
            if (nums[i] <= nums[j])
            {
                temp[k++] = nums[i++];
            }
            else
            {
                temp[k++] = nums[j++];
            }
        }

        while (i <= mid)
        {
            temp[k++] = nums[i++];
        }

        while (j <= right)
        {
            temp[k++] = nums[j++];
        }

        for (int i = 0; i < temp.size(); i++)
        {
            nums[left + i] = temp[i];
        }
    }

    void mergeSort(vector<int> &nums, int left, int right)
    {
        if (left < right)
        {
            int mid = left + (right - left) / 2;
            mergeSort(nums, left, mid);
            mergeSort(nums, mid + 1, right);
            merge(nums, left, mid, right);
        }
    }

public:
    vector<int> sortArray(vector<int> &nums)
    {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int nums[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (nums[j] > nums[j + 1])
//             {
//                 int temp = nums[j];
//                 nums[j] = nums[j + 1];
//                 nums[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << nums[i];
//     }
// }