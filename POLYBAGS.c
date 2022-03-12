/*TASK
Chef bought N items from a shop. Although it is hard to carry all these items in hand, so Chef has to buy some polybags to store these items.

1 polybag can contain at most 10 items. What is the minimum number of polybags needed by Chef?

Input Format
The first line will contain an integer T - number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer N - the number of items bought by Chef.
Output Format
For each test case, output the minimum number of polybags required.

Constraints
1≤T≤1000
1≤N≤1000
Sample Input 1 
3
20
24
99
Sample Output 1 
2
3
10
Explanation
Test case-1: Chef will require 2 polybags. Chef can fit 10 items in the first and second polybag each.

Test case-2: Chef will require 3 polybags. Chef can fit 10 items in the first and second polybag each and fit the remaining 4 items in the third polybag.*/

#include<stdio.h>
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%10==0)
        {
            printf("%d\n",a/10);
        }
        else
        {
            b=((((a/10)*10)+10))/10;
             printf("%d\n",b);
        }
    }
    return 0;
}
