/*TASK
The current price of petrol is X rupees, and the current price of diesel is Y rupees. At the start of each month, the price of petrol increases by A rupees and the price of diesel increases by B rupees.

Chef is curious to know which fuel costs less at the end of the Kth month. If petrol is cheaper than diesel at the end of Kth month, then print PETROL. If diesel is cheaper than petrol at the end of the Kth month, then print DIESEL. If both the fuels have the same price at the end of the Kth month, then print SAME PRICE.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line of input, containing five space-separated integers X,Y,A,B,K.
Output Format
For each test case,

Print PETROL if petrol is cheaper than diesel.
Print DIESEL if diesel is cheaper than petrol.
Print SAME PRICE otherwise.
Note: The output is case-insensitive. You can print each character in either lower-case or upper-case.

Constraints
1≤T≤1000
1≤K≤1000
0≤X,Y,A,B≤1000
Subtasks
Subtask 1 (100 points): Original constraints
Sample Input 1 
3
1 1 1 1 1
2 1 2 1 2
2 2 1 1 2
Sample Output 1 
SAME PRICE
DIESEL
SAME PRICE
Explanation
Test case 1:

Initially, the price of petrol is 1 rupee and the price of diesel is 1 rupee. Since A=1 and B=1, the prices of both petrol and diesel increase by 1 rupee at the start of every month. So, at the start of the first month, the price of petrol becomes 1+1=2 rupees and the price of diesel becomes 1+1=2 rupees. By the end of the first month, the price of petrol and diesel are both 2 rupees and hence they both have the same price.

Test case 2:

Initially, the price of petrol is 2 rupees and the price of diesel is 1 rupee. Since A=2 and B=1, the price of petrol increases by 2 rupee and the price of diesel increases by 1 rupee at the start of every month. It follows that at the start of the first month, the price of petrol becomes 2+2=4 rupees and the price of diesel becomes 1+1=2 rupees. And by the start of the second month, the price of petrol becomes 4+2=6 rupees and the price of diesel becomes 2+1=3 rupees. By the end of the second month, the prices of petrol and diesel are 6 rupees and 3 rupees respectively and hence diesel is cheaper than petrol.

Test case 3:

Initially, the price of petrol is 2 rupee and the price of diesel is 2 rupee. Since A=1 and B=1, the price of petrol increases by 1 rupee and the price of diesel increases by 1 rupee at the start of every month. It follows that at the start of the first month, the price of petrol becomes 2+1=3 rupees and the price of diesel becomes 2+1=3 rupees. And by the start of the second month, the price of petrol becomes 3+1=4 rupees and the price of diesel becomes 3+1=4 rupees. By the end of the second month, the prices of petrol and diesel are both 4 rupees and hence both have the same prices. */

#include<stdio.h>
int main()
{
    int t,x,y,a,b,k,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d %d",&x,&y,&a,&b,&k);
        if(x+k*a>y+k*b)
        {
            printf("DIESEL\n");
        }
        else if(x+k*a<y+k*b)
        {
            printf("PETROL\n");
        }
        else
        {
            printf("SAME PRICE\n");
        }
    }
    return 0;
}
