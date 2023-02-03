#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,i,j;
    printf("menu \n");
    printf("1.level 1\n");
    printf("2.level 2\n");
    printf("3.level 3\n");
    printf("4.exit\n");
    printf("Level : ");
    scanf("%d",&a);

    switch(a){
        case 1:
        system("cls");
            printf("input : ");
            scanf("%d",&n);

            for(i=0;i<=n;i++){
                for(j=0;j<=i;j++){
                printf("%d ",i+j);
                }
            printf("\n");
            }
            break;
        case 2:
            system("cls");
            printf("input : ");
            scanf("%d",&n);

            for(i=0;i<=n;i++){
                for(j=1;j<=i;j++){
                printf("%d ",i*j);
            }
            printf("\n");
            }
            break;
        case 3:
            system("cls");
            printf("input : ");
            scanf("%d",&n);

            for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                printf(" ");
            }
            for(j=0;j<=i;j++){
                printf("%d", j+1);
            }
            for(j=i;j>0;j--){
                 printf("%d", j);
            }
            printf("\n");
        }
        for(i=n-1;i>0;i--){
            for(j=i;j<=n;j++){
                printf(" ");
            }
            for(j=1;j<=i;j++){
                printf("%d",j);
            }
            for (j=i-1;j>=1;j--){
                 printf("%d",j);
            }
            printf("\n");
        }
        case 4:
            exit(0);
    }
    return 0;
}
