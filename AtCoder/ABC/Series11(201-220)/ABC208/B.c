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

int kaijou(int a){
    int ans=1;
    for(int i=1;i<=a;i++){
        ans*=i;
    }
    return ans;
}

int main(void){
    int P;
    scanf("%d",&P);
    int ans=0;
    int coin[10][2];
    for(int i=0;i<10;i++){
        coin[i][0]=100;
        coin[i][1]=kaijou(i+1);
        DBG_INT(coin[i][1]);
    }

    for(int i=9;i>=0;i--){
        while(1){
            int tmp=P-coin[i][1];
            if(tmp<0){
                break;
            }
            P-=coin[i][1];
            ans++;
            coin[i][0]--;
            if(coin[i][0]==0){
                break;
            }
        }
    }
    printf("%d\n",ans);
}

