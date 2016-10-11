#include <stdio.h>
int main()
{
    int T,i,num;

    scanf("%d",&T);

    for(i = 1; i <= T; i++){

        scanf("%d",&num);

        if(num%2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}
