#include <stdio.h>
#include <stdlib.h>

int main(){
int a;
printf("\tESTRELLAS/PIRAMIDE\n");
do{
    printf("Introduce el numero de estrellas: ");
    scanf("%d",&a);
}while(a<=0);
for (int i=0;i<a;i++){
        for (int j=a;j>i;j--){
        printf(" ");
        }
        for (int l=0;l<=i;l++){
            printf("* ");
        }
        printf("\n");
}
}
