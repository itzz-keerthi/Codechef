/*TASK
Alice has recently learned in her economics class that the market is said to be in equilibrium when the supply is equal to the demand.

Alice has market data for N time points in the form of two integer arrays S and D. Here, Si denotes the supply at the ith point of time and Di denotes the demand at the ith point of time, for each 1≤i≤N.

Help Alice in finding out the number of time points at which the market was in equilibrium.

Input Format
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
Each test case contains three lines of input.
The first line of each test case contains an integer N, the length of the arrays S and D.
The second line of each test case contains N space-separated integers S1,S2,…,SN.
The third line of each test case contains N space-separated integers D1,D2,…,DN.
Output Format
For each test case, output the number of time points at which the market was in equilibrium.

Constraints
1≤T≤10
1≤N≤100
1≤Si,Di≤100 for every 1≤i≤N
Sample Input 1 
2
4
1 2 3 4
2 1 3 4
4
1 1 2 2
1 2 1 1
Sample Output 1 
2
1
Explanation
Test case 1: For i=3 and i=4, we have supply equal to demand, hence the market is in equilibrium.

Test case 2: For i=1, we have supply equal to demand, hence the market is in equilibrium.  */

#include<iostream>
using namespace std;
int main()
{
    int t,i,n,j,k,c=0,s[100],d[100];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>s[j];
        }
        for(j=0;j<n;j++)
        {
            cin>>d[j];
        }
        for(k=0;k<n;k++)
        {
            if (s[k]==d[k])
            {
                c+=1;
            }
        }
        cout<<c<<"\n";
        c=0;
    }
    return 0;
}
