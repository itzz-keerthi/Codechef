'''TASK
A great deal of energy is lost as metabolic heat when the organisms from one trophic level are consumed by the next level.
Suppose in Chefland the energy reduces by a factor of K .e, if initially, the energy is X then the transfer of energy to the next tropic level is floor(X/K) . This limits the length of foodchain which is defined to be the highest level receiving non-zero energy.
E is the energy at the lowest tropic level. Given E and K for an ecosystem, find the maximum length of foodchain.

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains a single line of input, two integers E,K.
Output Format
For each testcase, output in a single line answer to the problem.

Constraints:
1<=T<=10^4
1<=E<=10^9
2<=K<=10^9

Sample 1:
Input
Output
3
5 3
6 7
10 2
2
1 
4   '''

t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    c=0
    while(a!=0):
        c=c+1
        a=a//b
    print(c)
        

