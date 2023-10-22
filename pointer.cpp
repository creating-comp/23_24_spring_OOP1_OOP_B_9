#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int top=*a+*b;
    int fark;
    if(*a>*b){
    fark=(*a-*b) ;}
    else {
    fark=(*b-*a) ;
    }
   *a=top;
   *b=fark;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
