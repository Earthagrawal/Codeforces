#include <stdio.h>

int main(){
    int n, count=0,m,l,o ;
    scanf("%d", &n);

    for (int i=0; i<n ; i++ ){
        for (int a=0; a<1; a++ ){
            scanf("%d",&m);
            printf(" ");
        }
        for (int b=0; b<1; b++ ){
            scanf("%d",&l);
            printf(" ");
        }
        for (int c=0; c<1; c++ ){
            scanf("%d",&o);
        }

        if ((m==1 && l==1) || (m==1 && o==1) || (l==1 && o==1)){
            count++ ;
        }
    }
    printf("%d", count);
}