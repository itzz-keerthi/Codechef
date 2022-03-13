/*TASK
Vacations have arrived and Chef wants to go to his home in ChefLand. There are two types of routes he can take:

Take a flight from his college to ChefArina which takes X minutes and then take a bus from ChefArina to ChefLand which takes Y minutes.
Take a direct train from his college to ChefLand which takes Z minutes.
Which of these two options is faster?

Input Format
The first line of the input contains a single integer T - the number of test cases. The test cases then follow.
The first line of the test case contains three space-separated integers X, Y, and Z.
Output Format
For each test case, if Chef takes the train output TRAIN, if Chef takes the plane and the bus output PLANEBUS, if both are equal output EQUAL.

You may print each character of the string in uppercase or lowercase (for example, the strings train, tRAiN, TrAin, and TRAIN will all be treated as identical).

Constraints
1≤T≤1000
1≤X,Y,Z≤109
Subtasks
Subtask 1 (100 points): Original constraints
Sample Input 1 
3
10 12 11
3 5 15
9 4 13
Sample Output 1 
TRAIN
PLANEBUS
EQUAL
Explanation
Test Case 1: It will take 10+12=22 minutes to travel using Plane and Bus. The train journey takes 11 minutes. Since the train is faster, Chef will choose the train.
Test Case 2: It will take 3+5=8 minutes to travel using Plane and Bus. The train journey takes 15 minutes. Since the plane and bus are faster, Chef will choose the plane and bus.
Test Case 3: It will take 9+4=13 minutes to travel using Plane and Bus. The train journey takes 13 minutes. Since they both are equal, Chef can choose either.*/

#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a+b)<c)
        {
            printf("PLANEBUS\n");
        }
        else if((a+b)>c)
        {
            printf("TRAIN\n");
        }
        else
        {
            printf("EQUAL\n");
        }
    }
    return 0;
}

