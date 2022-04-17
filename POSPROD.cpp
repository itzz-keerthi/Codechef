/*TASK
You are given an array A of length N. Find the number of pairs of indices (i,j) such that

1≤i<j≤N
Ai⋅Aj>0
Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N - the size of the array A.
The second line of each test case contains N space-separated integers A1,A2,…,AN denoting the array A.
Output Format
For each test case, output the number of pairs which satisfy the above conditions.

Constraints
1≤T≤1000
2≤N≤105
−104≤Ai≤104
Sum of N over all test cases does not exceed 2⋅105
Sample Input 1 
3
5
1 -3 0 2 -1
4
-1 -1 -1 -1
4
0 1 2 3
Sample Output 1 
2
6
3
Explanation
Test case 1: The pairs which satisfy the conditions are (1,4) and (2,5).

Test case 2: The pairs which satisfy the conditions are (1,2), (1,3), (1,4), (2,3), (2,4) and (3,4).

Test case 3: The pairs which satisfy the conditions are (2,3), (2,4) and (3,4).  */

#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int a[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long int count_pos=0,count_neg=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                continue;
            }
            else if(a[i]<0)
            {
                count_neg++;
            }
            else
            {
                count_pos++;
            }
        }
        cout<<count_pos*(count_pos-1)/2+count_neg*(count_neg-1)/2<<endl;
    }
    return 0;
}
