/*TASK
Problem
There are 100100 questions in a paper. Each question carries +3 marks for correct answer, -1 marks for incorrect answer and 0 marks for unattempted question.

It is given that Chef received exactly XX (0 \leq X \leq 100)(0≤X≤100) marks. Determine the minimum number of problems Chef marked incorrect.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each testcase contains of a single integer XX, marks that Chef received.
Output Format
For each test case, output the minimum number of problems Chef marked incorrect.

Constraints
1<=T<=100
0<=X<=100

Sample 1:
Input
Output
4
0
100
32
18
0
2
1
0
Explanation:
Test Case 11: It might be possible that Chef didn't attempt any question in which case he didn't get any question incorrect.

Test Case 22: For the case when Chef got 3434 questions correct and 22 questions incorrect, Chef marked minimum incorrect questions.

Test Case 33: For the case when Chef got 1111 questions correct and 11 question incorrect, Chef marked minimum incorrect questions.

Test Case 44: For the case when Chef got 66 questions correct and no question incorrect, Chef marked minimum incorrect questions.*/

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int sum=0;
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
		    int a=sc.nextInt();
		    if(a%3==0)
		    {
		        System.out.println("0");
		    }
		    else
		    {
		        sum=0;
		        for(int j=1;j<=a;j++)
		        {
		            sum+=3;
		            if(sum>a)
		            {
		                System.out.println(sum-a);
		                break;
		            }
		        }
		    }
		}
	}
}
