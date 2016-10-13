#include <stdio.h>
int main()
{
    int arr[5],i,T;

    scanf("%d",&T);

    while(T--){
       for(i = 0; i < 5; i++){
          scanf("%d",&arr[i]);
    }
          int min,max = 0;

        for(i = 0; i < 5; i++){
            if(arr[i] < min)
            min = arr[i];
            if(arr[i] > max)
            max = arr[i];
        }
        printf("%d %d\n",max,min);
    }

    return 0;
}
