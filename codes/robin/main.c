#include<stdio.h>
int main(){
    int i,j,m[10][10];
    for(i=0;i<3;i++){
        printf("Enter the resouce for p %d",i);
        for(j=0;j<3;j++){
            scanf("%d",m[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d",m[i][j]);
        }
        printf("\n");
    }


return 0;
}
