#include <stdio.h>
main(){
    int num;
    for(int i = 1; i <= 30; i++){
        if(i%2 == 0){
            printf("\n%i", i);
        } else {
            continue;
        }
    }

}
