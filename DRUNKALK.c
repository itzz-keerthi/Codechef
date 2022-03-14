/*TASK
Faizal is very sad after finding out that he is responsible for Sardar's death. He tries to drown his sorrows in alcohol and gets very drunk. Now he wants to return home but is unable to walk straight. For every 3 steps forward, he ends up walking one step backward.

Formally, in the 1st second he moves 3 steps forward, in the 2nd second he moves 1 step backwards, in the 3rd second he moves 3 steps forward, in 4th second 1 step backwards, and so on.

How far from his initial position will Faizal be after k seconds have passed? Assume that Faizal's initial position is 0.

Input Format
The first line of input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer k, the number of seconds after which Faizal's position is to be calculated.
Output Format
For each test case, output a single line containing one integer - Faizal's position after k seconds.
Constraints
1≤T≤100000
0≤k≤100000
The sum of k over all test cases does not exceed 1000000
Sample Input 1 
3
5
11
23
Sample Output 1 
7
13
25
Explanation
1st Test Case

Faizal walks 3 steps forward in the 1st second, ending up at 3
Faizal walks 1 step backward in the 2nd second, ending up at 2
Faizal walks 3 steps forward in the 3rd second, ending up at 5
Faizal walks 1 step backward in the 4th second, ending up at 4
Faizal walks 3 steps forward in the 5th second, ending up at 7 */

#include<stdio.h>
int main()
{
    int n,i,j,a,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            if(j%2!=0)
            {
                c=c+3;
            }
            else
            {
                c=c-1;
            }
        }
        printf("%d\n",c);
        c=0;
    }
    return 0;
}
