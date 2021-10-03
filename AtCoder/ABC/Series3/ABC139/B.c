#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <complex.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>

#define DBG_INT(arg) fprintf(stderr,"*DEBUG* " #arg "...%d\n",arg)
#define DBG_DOUBLE(arg) fprintf(stderr,"*DEBUG* " #arg "...%f\n",arg)
#define DBG_CHAR(arg) fprintf(stderr,"*DEBUG* " #arg "...%c\n",arg)
#define DBG_STRING(arg) fprintf(stderr,"*DEBUG* " #arg "...%s\n",arg)

int ans=0;

void dengen(int a,int b){
    extern int ans;
    if(ans>0){
        b-=a-1;
    }else{
        b-=a;
    }
    if(b<=0){
        ans++;
    }else{
        ans++;
        dengen(a,b);
    }
}

int main(void){
    int A,B;
    extern int ans;
    scanf("%d %d",&A,&B);
    if(B==1){
       printf("%d\n",ans);
       return 0; 
    }
    dengen(A,B);
    printf("%d\n",ans);
    return 0;
}