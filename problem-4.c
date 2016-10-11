#include <stdio.h>
int main()
{
    int T,i,length,width,height,volume;
    scanf("%d",&T);
    for(i = 1; i <= T; i++){

        scanf("%d%d%d",&length,&width,&height);

        volume = length*width*height;

        printf("%d\n",volume);
    }

    return 0;
}
