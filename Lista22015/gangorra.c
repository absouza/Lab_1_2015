#include <stdio.h>

int main (){
    int p1,p2,c1,c2, esq,dir;
    scanf("%d %d %d %d", &p1,&c1,&p2,&c2);
    esq = p1*c1;
    dir = p2*c2;
    if (esq==dir){
        printf("0\n");
    }
    else{
        if (esq<dir){
            printf("1\n");
        }
        else{
            printf("-1\n");
        }
    }

return 0;
}


