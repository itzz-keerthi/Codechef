/*TASK
Ada's classroom contains N⋅M tables distributed in a grid with N rows and M columns. Each table is occupied by exactly one student.

Before starting the class, the teacher decided to shuffle the students a bit. After the shuffling, each table should be occupied by exactly one student again. In addition, each student should occupy a table that is adjacent to that student's original table, i.e. immediately to the left, right, top or bottom of that table.

Is it possible for the students to shuffle while satisfying all conditions of the teacher?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers N and M.
Output
For each test case, print a single line containing the string "YES" if it is possible to satisfy the conditions of the teacher or "NO" otherwise (without quotes).

Constraints
1≤T≤5,000
2≤N,M≤50
Sample Input 1 
2
3 3
4 4
Sample Output 1 
NO
YES */

#include <iostream>
using namespace std;
int main()
{
    int t,i,n,m;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        if(n*m%2==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
