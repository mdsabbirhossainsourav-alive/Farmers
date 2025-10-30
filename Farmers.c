#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m1,m2,d;
        scanf("%d %d %d", &m1, &m2, &d);
        int work = m1 * d;
        int day = work /( m1 + m2); 
        int earlier = d-day;
        printf("%d\n",earlier);
    }
    return 0;
}
