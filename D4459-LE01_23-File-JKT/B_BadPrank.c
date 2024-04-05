#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *input = fopen("testdata.in", "r");
    int T;
    fscanf(input, "%d\n", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int shift;
        fscanf(input, "%d\n", &shift);
        char string[1001];
        fscanf(input, "%[^\n]", string);
        //Repair string
        for(int i = 0; string[i] != '\0'; i++){
            if     (string[i] == '0') string[i] = 'O';
            else if(string[i] == '1') string[i] = 'I';
            else if(string[i] == '3') string[i] = 'E';
            else if(string[i] == '4') string[i] = 'A';
            else if(string[i] == '5') string[i] = 'S';
            else if(string[i] == '6') string[i] = 'G';
            else if(string[i] == '7') string[i] = 'T';
            else if(string[i] == '8') string[i] = 'B';
            string[i] = toupper(string[i]);
        }
        for(int i = 0; string[i] != 0; i++){
            if(string[i] != ' ' && (string[i] >= 65 && string[i] <= 90)){
                for(int j = 0; j < shift; j++){
                    string[i] = string[i] - 1;
                    if(string[i] < 65) string[i] = 'Z';
                }
            }
        }
        printf("Case #%d: %s\n", testCase, string);
    }
}