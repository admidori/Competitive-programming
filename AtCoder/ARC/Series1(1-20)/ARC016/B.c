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
    int N;
    scanf("%d",&N);
    char **x;
    x=malloc(sizeof(char *)*N);
    rep(i,N){
        x[i]=mal(char,10);
    }
    int cnt=0,flag=0;
    rep(i,N){
        scanf("%s",x[i]);
    }
    int tmp[10];
    rep(i,10){
        tmp[i]=0;
    }
    rep(i,N){
        rep(j,9){
            if(x[i][j]=='x'){
                cnt++;
            }
            if(x[i][j]=='o'){
                if(tmp[j]==0){
                    tmp[j]=1;
                    cnt++;
                }else{
                    if(i+1>=N){
                    }else{
                    if(x[i+1][j]!='o'){
                        tmp[j]=0;
                    }}
                }
            }
        }
    }
    
    printf("%d\n",cnt);

}