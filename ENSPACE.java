/*TASK
Problem
Chef's computer has NN GB of free space. He wants to save XX files, each of size 1 GB and YY files, each of size 2 GB on his computer. Will he be able to do so?

Chef can save all the files on his computer only if the total size of the files is less than or equal to the space available on his computer.

Input Format
The first line contains an integer TT, denoting the number of test cases. The TT test cases then follow:
The first and only line of each test case contains three integers N, X, YN,X,Y, denoting the free-space in computer, the number of 1 and 2 GB files respectively.
Output Format
For each test case, print YES if Chef is able to save the files and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings yEs, yes, Yes and YES will all be treated as identical).

Constraints:
1<=T<=100
1<=N,X,Y<=100

Sample input and output:
4
6 3 1
2 2 2
4 3 2
5 1 2

YES
NO
NO
YES

Explanation:
Test case 11: The total size of files is 3 + 1 \cdot 2 =53+1⋅2=5, which is smaller than the remaining space on the computer. Thus Chef will be able to save all the files.

Test case 22: The total size of files is 2 + 2 \cdot 2 =62+2⋅2=6, which is greater than the remaining space on the computer. Thus Chef will not be able to save all the files.

Test case 33: The total size of files is 3 + 2 \cdot 2 =73+2⋅2=7, which is greater than the remaining space on the computer. Thus Chef will not be able to save all the files.

Test case 44: The total size of files is 1 + 2 \cdot 2 =51+2⋅2=5, which is equal to the remaining space on the computer. Thus Chef will be able to save all the files.*/

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
		    int a=sc.nextInt();
		    int b=sc.nextInt();
		    int c=sc.nextInt();
		    if(b+(c*2)<=a)
		    {
		        System.out.println("YES");
		    }
		    else
		    {
		        System.out.println("NO");
		    }
		}
	}
}


