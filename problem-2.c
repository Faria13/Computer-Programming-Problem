#include <stdio.h>
int main()
{
    int T,i,num,pos_num=0,neg_num=0;
    scanf("%d",&T);

    for(i = 1; i <= T; i++){
        scanf("%d",&num);
        if(num > 0)
            pos_num++;
        else
            neg_num++;
    }
    printf("%d %d\n",pos_num,neg_num);

    return 0;
}
