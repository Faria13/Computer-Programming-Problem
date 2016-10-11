#include <stdio.h>
#include <math.h>
int main()
{
    int T,i,x,num;
    scanf("%d",&T);

    for(i = 1; i <= T; i++){
        scanf("%d",&num);

        x = sqrt(num);

        if(x*x == num)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
