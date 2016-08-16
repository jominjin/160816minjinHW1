#include <stdio.h>

int main() {
    int n=1; int i=0;

    printf("Enter the n (1-9):   ");
    scanf("%d",&n);

    while(n != 0){

        for(i=1;i<10;i++)
            printf("%d X %d = %d\n",n,i,n*i);
        printf("Enter the n (1-9):   ");
        scanf("%d", &n);
    }

    return 0;
}