/*TASK
Chef has A units of solid and B units of liquid. He combines them to create a mixture. What kind of mixture does Chef produce: a solution, a solid, or a liquid?

A mixture is called :

1) A solution if A>0 and B>0,

2) A solid if B=0, or

3) A liquid if A=0.

Input Format
The first line contains T denoting the number of test cases. Then the test cases follow.
Each test case contains two space-separated integers A and B on a single line.
Output Format
For each test case, output on a single line the type of mixture Chef produces, whether it is a Solution, Solid, or Liquid. The output is case sensitive.

Constraints
1≤T≤20
0≤A,B≤100
A+B>0
Subtasks
Subtask 1 (100 points): Original constraints
Sample Input 1 
3
10 5
0 3
3 0
Sample Output 1 
Solution
Liquid
Solid
Explanation
Test case 1: Chef adds both solid and liquid to the mixture, hence the mixture is a solution.

Test case 2: Chef does not add solid to the mixture, hence the mixture is liquid.

Test case 3: Chef does not add liquid to the mixture, hence the mixture is solid.*/

#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>0&&b>0)
        {
            printf("Solution\n");
        }
        else if(b==0)
        {
            printf("Solid\n");
        }
        else if(a==0)
        {
            printf("Liquid\n");
        }
    }
    return 0;
}
