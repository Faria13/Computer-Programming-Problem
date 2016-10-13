#include <stdio.h>
int main()
{
    int T,i,a,b,c,d,e;

    scanf("%d",&T);

    for(i = 1; i <= T; i++){

        int sum=0,average;

        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

        sum = a+b+c+d+e;

        average = sum/5;

        printf("%d\n",average);
    }

    return 0;
}
