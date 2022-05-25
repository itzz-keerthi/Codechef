/*TASK
The ZCO Scholarship Contest has just finished, and you finish with a rank of RR. You know that Rank 11 to Rank 5050 will get 100 \%100% scholarship on the ZCO exam fee and Rank 5151 to Rank 100100 will get 50 \%50% percentage scholarship on the ZCO exam fee. The rest do not get any scholarship.
What percentage of scholarship will you get ?

Input
Input consist of single line of input containing one integer RR.
Output
Output a single line containing one integer — the percentage of scholarship you will get.
Constraints
10^91≤R≤10 
 
Example Input 1
49
Example Output 1
100
Explanation 1
Since 1 \le 49 \le 501≤49≤50, answer is 100100 percentage scholarship.

Example Input 2
317
Example Output 2
0
Explanation 2
Since 317 > 100317>100, you do not get any scholarship. */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int R;
    cin>>R;
    if(R>=1 and R<=50)
    {
        cout<<"100"<<endl;
    }
    else if(R>=51 and R<=100)
    {
        cout<<"50"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
