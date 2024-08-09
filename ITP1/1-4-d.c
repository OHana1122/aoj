#include<stdio.h>

int main(void){
    int input, num;

    int min=1000000,max=-1000000;
    long long sum = 0;
    
    scanf("%d",&num);
    
    for(int i=0; i<num; i++){

        scanf("%d",&input);
        sum += input;
        
        if(input > max){
            max = input;
        }
        if(input < min){
            min = input;
        }  
        // printf("%d : %d %d %lld\n", i, min, max, sum); 
    }
    printf("%d %d %lld\n", min, max, sum);
    return 0;
}