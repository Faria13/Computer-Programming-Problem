#include <stdio.h>
int main()
{
    int i,n,j,T,k;

    scanf("%d",&T);

    for(i = 1; i <= T; i++){
        scanf("%d",&n);
        for(j = 1; j <= n; j++){
            for(k = 1; k <= n; k++)
                printf("*");
                printf("\n");
        }
        printf("\n");
    }

    return 0;
}
