#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a,b) (a > b ? a : b)
#define MIN(a,b) (a < b ? a : b)

typedef struct{
    int x;
    int y;
}Ponto;

typedef struct{
    Ponto A;
    Ponto B;
}Retangulo;

int main(){
    Ponto P, Q, P1, Q1;
    Retangulo rect1, rect2;

    scanf("%d %d %d %d", &rect1.A.x, &rect1.A.y, &rect1.B.x, &rect1.B.y);
    scanf("%d %d %d %d", &rect2.A.x, &rect2.A.y, &rect2.B.x, &rect2.B.y);

    P.x = MIN(rect1.A.x, rect1.B.x);
    P.y = MIN(rect1.A.y, rect1.B.y);
    Q.x = MAX(rect1.A.x, rect1.B.x);
    Q.y = MAX(rect1.A.y, rect1.B.y);
    P1.x = MIN(rect2.A.x, rect2.B.x);
    P1.y = MIN(rect2.A.y, rect2.B.y);
    Q1.x = MAX(rect2.A.x, rect2.B.x);
    Q1.y = MAX(rect2.A.y, rect2.B.y);

    printf("%d\n", ((Q.x >= P1.x) && (Q1.x >= P.x) && (Q.y >= P1.y) && (Q1.y >= P.y)) ? 1 : 0);

    return EXIT_SUCCESS;
}


