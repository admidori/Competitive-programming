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

int main(void){
    int H,W;
    char **C;
    scanf("%d %d",&H,&W);
    C=malloc(H*sizeof(char *));
    for(int i=0;i<H;i++){
        C[i]=malloc(W*sizeof(char));
    }

    for(int i=0;i<H;i++){
        scanf("%s",C[i]);
    }

    char **map;
    map=malloc(2*H*sizeof(char *));
    for(int i=0;i<H*2;i++){
        map[i]=malloc(W*sizeof(char));
    }

    int tmp=0;
    for(int i=0;i<H;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<W;k++){
                strcpy(&map[tmp][k],&C[i][k]);
            }
            tmp++;
        }
    }

    for(int i=0;i<2*H;i++){
        printf("%s",map[i]);
        printf("\n");
    }
    return 0;
}