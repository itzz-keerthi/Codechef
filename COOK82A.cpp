/*TASK
Today is the final round of La Liga, the most popular professional football league in the world. Real Madrid is playing against Malaga and Barcelona is playing against Eibar. These two matches will decide who wins the league title. Real Madrid is already 3 points ahead of Barcelona in the league standings. In fact, Real Madrid will win the league title, except for one scenario: If Real Madrid loses against Malaga, and Barcelona wins against Eibar, then the La Liga title will go to Barcelona. In any other combination of results, Real Madrid will win the title.

You will be given multiple scenarios for these two games, where in each one you will be given the number of goals each team scored in their respective match. A team wins a match if it scores more than the opponent. In case they score the same number of goals, it's a draw. Otherwise, the team loses the game. You are asked to tell the winner of the La Liga title in each scenario.

Input
The first line contains a single number T, the number of scenarios. Each scenario is described by four lines. Each line starts with a team name followed by the number of goals this team scored in its corresponding match. (Barcelona plays Eibar and Real Madrid plays Malaga). The names are given in any arbitrary order within a scenario.

Output
For each scenario, output a single line showing the title winner in case this scenario happens. It should be either "RealMadrid" or "Barcelona".

Constraints
1 ≤ T ≤ 500
0 ≤ number of goals scored by a team in a match ≤ 20
Sample Input 1 
2
Barcelona 2
Malaga 1
RealMadrid 1
Eibar 0
Malaga 3
RealMadrid 2
Barcelona 8
Eibar 6
Sample Output 1 
RealMadrid
Barcelona   */

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,r,m,e;
        for(int i=0;i<4;i++)
        {
            int x;
            string s;
            cin>>s>>x;
            if(s=="Barcelona")
            {
                b=x;
            }
            else if(s=="RealMadrid")
            {
                r=x;
            }
            else if(s=="Malaga")
            {
                m=x;
            }
            else if(s=="Eibar")
            {
                e=x;
            }
        }
        if(b>e and r<m)
        {
            cout<<"Barcelona"<<endl;
        }
        else
        {
            cout<<"RealMadrid"<<endl;
        }
       
    }
    return 0;
}
