//RAYHAN VITO GUSTIANSYAH
//20051397042
//MI_B_2020
#include <stdio.h>
#include <stdlib.h>

void urutan();
int main()
{
 int n, x=0;

 printf("RAYHAN VITO GUSTIANSYAH\n");
 printf("20051397042\n");
 printf("MI_B_2020\n");
 printf("Input n : ");scanf("%d", &n);
 urutan();
 return 0;
}

void urutan(int x,int n){
 printf("%d\n", x);
 if(x==n)
 return;
 urutan(x+1,n);
}
//RAYHAN VITO GUSTIANSYAH
//20051397042
//MI_B_2020
