// You are given an array arr[] containing positive integers. These integers can be from 1 to p, and some numbers may be repeated or absent. Your task is to count the frequency of all numbers that lie in the range 1 to n.

// Do modify the array in-place changes in arr[], such that arr[i] = frequency(i) and assume 1-based indexing.
// The elements greater than n in the array can be ignored when counting.

// Input: n = 5, arr[] = [2, 3, 2, 3, 5], p = 5
// Output: [0, 2, 2, 0, 1]
// Explanation: Counting frequencies of each array element We have: 1 occurring 0 times. 2 occurring 2 times. 3 occurring 2 times. 4 occurring 0 times. 5 occurring 1 time, all the modifications done in the same given arr[].

void frequencyCount(vector<int> &arr, int N, int P)
{

    int hash[100000] = {0};
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = hash[i + 1];
    }
}