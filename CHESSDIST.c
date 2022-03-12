/*TASK
The Chessboard Distance for any two points (X1,Y1) and (X2,Y2) on a Cartesian plane is defined as max(|X1−X2|,|Y1−Y2|).

You are given two points (X1,Y1) and (X2,Y2). Output their Chessboard Distance.

Note that, |P| denotes the absolute value of integer P. For example, |−4|=4 and |7|=7.

Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input containing 4 space separated integers - X1,Y1,X2,Y2 - as defined in the problem statement.
Output Format
For each test case, output in a single line the chessboard distance between (X1,Y1) and (X2,Y2)
Constraints
1≤T≤1000
1≤X1,Y1,X2,Y2≤105
Subtasks
Subtask #1 (100 points): original constraints

Sample Input 1 
3
2 4 5 1
5 5 5 3
1 4 3 3
Sample Output 1 
3
2
2
Explanation
In the first case, the distance between (2,4) and (5,1) is max(|2−5|,|4−1|)=max(|−3|,|3|)=3.

In the second case, the distance between (5,5) and (5,3) is max(|5−5|,|5−3|)=max(|0|,|2|)=2.

In the third case, the distance between (1,4) and (3,3) is max(|1−3|,|4−3|)=max(|−2|,|1|)=2.*/

#include<stdio.h>
#include<math.h>
int
main ()
{
  int num, i, arr1[100000], arr2[100000], arr3[100000], arr4[100000];
  double a,b;
  scanf ("%d", &num);
  for (i = 0; i < num; i++)
    {
      scanf ("%d %d %d %d", &arr1[i], &arr2[i], &arr3[i], &arr4[i]);
    }
  for (i = 0; i < num; i++)
    {
      a = arr1[i] - arr3[i];
      b = arr2[i] - arr4[i];
      if (fabs (a) > fabs (b))
	{
	  printf ("%.lf\n",fabs(a));
	}
      else
	{
	  printf ("%.lf\n",fabs(b));
	}

    }
  return 0;
}
