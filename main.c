#include <stdio.h>

int main() {
    float min = 0.0;
    float max = 0.0;
    printf("Podaj min: ");
    if(scanf("%f", &min) == 1){
        printf("Podaj max: ");
        if(scanf("%f", &max) == 1){
                if(max < min){
                    printf("Incorrect range");
                    return 2;
                }else{
                    while(max >= min){
                        printf("%.2f ", min);
                        min = min + 0.25;
                    }
                }
        }else{
            printf("Incorrect input");
            return 1;
        }
    }else{
        printf("Incorrect input");
        return 1;
    }
    return 0;
}
