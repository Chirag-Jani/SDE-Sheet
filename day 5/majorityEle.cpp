

// -> first solution i found was to sort the array and return element at n/2 index

// -> striver's solution

// int count = 0;
//         int candidate = 0;

//         for (int num : nums) {
//             if (count == 0) {
//                 candidate = num;
//             }
//             if(num==candidate) count += 1;
//             else count -= 1;
//         }

//         return candidate;

// -> my hashmap solution - not working properly

// #include <bits/stdc++.h>
// using namespace std;

// int findMajority(int arr[], int n)
// {
//     int freq[10000];
//     for (int i = 0; i < n; i++)
//     {
//         freq[i] = 0;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         freq[arr[i]]++;
//         if (freq[arr[i]] > floor(n / 2))
//         {
//             return arr[i];
//         }
//     }

//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int ans = findMajority(arr, n);

//     cout << ans << endl;
// }
// // 1
// // 10
// // 10
// // 20 20 20 4 5 20 1 20 4 20
// // 5
// // 2 11 11 4 4
// // 6