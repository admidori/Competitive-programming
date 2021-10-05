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
#define mal(type,size)  malloc(size*sizeof(type))
#define rep(i,N)    for(int i=0;i<N;i++)

typedef long long ll;

signed main(void){
    double m;
    scanf("%lf",&m);
    double tmp=m/1000.0;
    if(tmp<0.1){
        printf("00\n");
    }
    else if(0.1<=tmp&&tmp<=5){
        tmp=tmp*10;
        if(tmp<10){
            printf("0%.f\n",tmp);
        }else{
            printf("%.f\n",tmp);
        }
    }
    else if(6<=tmp&&tmp<=30){
        printf("%.f\n",tmp+50);
    }
    else if(35<=tmp&&tmp<=70){
        printf("%.f\n",((tmp-30)/5)+80);
    }
    else if(70<=tmp){
        printf("89\n");
    }
}