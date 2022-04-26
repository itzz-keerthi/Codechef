/*TASK
Chef is playing badminton today. The service rules of this singles game of badminton are as follows:

The player who starts the game serves from the right side of their court.
Whenever a player wins a point, they serve next.
If the server has won an even number of points during a game, then they will serve from the right side of the service court for the subsequent point.
Chef will be the player who begins the game.

Given the number of points P obtained by Chef at the end of the game, please determine how many times Chef served from the right side of the court.

Please see the sample cases below for explained examples.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line containing one integer P, the points obtained by Chef.
Output Format
For each test case, output in a single line the number of times Chef served from the right side of the court.

Constraints
1≤T≤103
0≤P≤109
Sample Input 1 
4
2
9
53
746
Sample Output 1 
2
5
27
374
Explanation
Test case 1: Chef obtained 2 points at the end of the game. This means he served two times from the right side of the court, once when his score was 0 and once again when his score was 2.

Test case 2: Chef obtained 9 points at the end of the game. This means he served 5 times from the right side of the court. The points when he had to serve from right were: 0,2,4,6,8.  */

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        cout<<(p/2)+1<<endl;
    }
    return 0;
}
