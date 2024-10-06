#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int b=m*6;
    float r=(float)n/b;
    if (r<=6.0){
        printf("YES");
    }
    else{
                printf("NO");
    }
    return 0;
}