#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int number1;
        int number2;
        scanf("%d %d", &number1, &number2);
        int result = 0;
        int nth = 1;
        while(number1 > 0 || number2 > 0){
            int digit1 = number1 % 10;
            int digit2 = number2 % 10;
            int sum = digit1 + digit2;
            result += (sum % 10) * nth;
            number1 = number1 / 10;
            number2 = number2 / 10;
            nth = nth * 10;
        }
        printf("Case #%d: %d\n", testCase, result);
    }
    return 0;
}