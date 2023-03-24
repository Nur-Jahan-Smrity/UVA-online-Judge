//Uva_World Cup Noise_(10450).cpp
#include<stdio.h>
int main()
{
    long long int
    a,b,i,j,k,l,A[52];

    A[0]=1;
    A[1]=1;

    for(i=2; i<52; i++)
        A[i]=A[i-1]+A[i-2];

    scanf("%lld",&a);

    for(i=1; i<=a; i++)
    {
        scanf("%lld",&b);
        printf("Scenario #%lld:\n%lld\n\n",i,A[b+1]);
    }
    return 0;
}
/*
Sample Input
2
3
1
Sample Output
Scenario #1:
5
Scenario #2:
2
*/
