#include <stdio.h>

int main(void){
    int H,W;

    while(1){
        scanf("%d %d",&H, &W);
        if(H==0 && W==0)break;

        for(int j=0; j<H; j++){
            for(int i=0; i<W; i++){
                if( i==0 || i==W-1 || j==0 || j==H-1){
                    printf("#");
                }else printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}