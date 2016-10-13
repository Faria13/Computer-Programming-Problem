#include <stdio.h>
int main()
{
    int T,i,n,j,num;

    double average,sum;

    scanf("%d",&T);

    for(i = 1; i <= T; i++){
        scanf("%d",&n);

        sum = 0;

        for(j = 1;j <= n; j++){
            scanf("%d",&num);
            sum += num ;
        }
         average = sum/n;
         printf("%0.2lf\n",average);
    }

    return 0;
}
