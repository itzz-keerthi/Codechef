/*TASK
Chef prepared a problem. The admin has rated this problem for x points.

A problem is called :

1) Easy if 1≤x<100

2) Medium if 100≤x<200

3) Hard if 200≤x≤300

Find the category to which Chef’s problem belongs.

Input Format
The first line contains T denoting the number of test cases. Then the test cases follow.
The first and only line of each test case contains a single integer x.
Output Format
For each test case, output in a single line the category of Chef's problem, i.e whether it is an Easy, Medium or Hard problem. The output is case sensitive.

Constraints
1≤T≤50
1≤x≤300
Subtasks
Subtask 1 (100 points): Original constraints
Sample Input 1 
3
50
172
201
Sample Output 1 
Easy
Medium
Hard
Explanation
Test case 1: The problem with rating x=50 is an easy problem as 1≤50<100.

Test case 2: The problem with rating x=172 is a medium problem as 100≤172<200.

Test case 3: The problem with rating x=201 is a hard problem as 200≤201≤300.*/

#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>=1&&a<100)
        {
            printf("Easy\n");
        }
        if(a>=100&&a<200)
        {
            printf("Medium\n");
        }
        if(a>=200&&a<=300)
        {
            printf("Hard\n");
        }
    }
    return 0; 
}
