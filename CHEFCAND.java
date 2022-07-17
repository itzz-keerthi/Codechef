/*TASK
Problem
There are NN children and Chef wants to give them 11 candy each. Chef already has XX candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 44 candies are available.

Determine the minimum number of candy packets Chef must buy so that he is able to give 11 candy to each of the NN children.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains two integers NN and XX — the number of children and the number of candies Chef already has.
Output Format
For each test case, output the minimum number of candy packets Chef must buy so that he is able to give 11 candy to each of the NN children.

Constraints
1<=T<=1000
1<=N,X<=100

Sample 1:
Input
Output
4
20 12
10 100
10 9
20 9
2
0
1
3
Explanation:
Test Case 11: Chef must buy 22 more packets after which he will have 2020 candies which will be enough to distribute 11 candy to each of the 2020 children.

Test Case 22: Chef does not need to buy more packets since he already has 100100 candies which are enough to distribute 11 candy to each of the 1010 children.

Test Case 33: Chef must buy 11 more packet after which he will have 1313 candies which will be enough to distribute 11 candy to each of the 1010 children.

Test Case 44: Chef must buy 33 more packets after which he will have 2121 candies which will be enough to distribute 11 candy to each of the 2020 children.*/

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i=0;i<n;i++)
		{
		    int a=sc.nextInt();
		    int b=sc.nextInt();
		    if((a-b)<0)
		    {
		        System.out.println("0");
		    }
		    else
		    {
		        if((a-b)%4==0)
		        {
		          System.out.println((a-b)/4);
		            
		        }
		        else
		        {
		          System.out.println(((a-b)/4)+1);
		        }
		    }
		}
	}
}
