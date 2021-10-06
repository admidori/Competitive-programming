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

typedef long long ll;

signed main(void){
    int H,W;
    scanf("%d %d",&H,&W);

    char **a;
    a=malloc(H*sizeof(char *));
    for(int i=0;i<H;i++){
        a[i]=malloc(W*sizeof(char));
    }

    for(int i=0;i<H;i++){
        scanf("%s",a[i]);
    }

    char **ans;
    int newH=H+2,newW=W+2;
    ans=malloc(newH*sizeof(char *));
    for(int i=0;i<newH;i++){
        ans[i]=malloc(newW*sizeof(char));
    }

    for(int i=0;i<newW;i++){
        ans[0][i]='#';
        ans[newH-1][i]='#';
    }
    for(int i=1;i<newH-1;i++){
        for(int j=0;j<newW;j++){
            if(j==0||j==newW-1){
                ans[i][j]='#';
            }else{
                ans[i][j]=a[i-1][j-1];
            }
        }
    }

    for(int i=0;i<H+2;i++){
        printf("%s",ans[i]);
        puts("");
    }

    return 0;
}