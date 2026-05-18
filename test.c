#include <stdio.h>

void swap (int *a,int *b ){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
        printf("before swap,a=%d,b=%d\n",a,b);
    swap(&a,&b);
        printf("after swpa,a=%d,b=%d\n",a,b);
        printf("swap finish!\n");
    return 0;
}