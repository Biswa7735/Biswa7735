#include <stdio.h>
//program to check even or odd
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}
