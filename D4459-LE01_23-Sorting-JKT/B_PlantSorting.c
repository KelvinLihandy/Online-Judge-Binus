#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct info{
    char number[9];
    char name[41];
};

void Swap(struct info *a, struct info *b){
    struct info temp = *a;
    *a = *b;
    *b = temp;
}

void Compare(struct info plant[], int k, int index){
    if(plant[k].name[index] > plant[k+1].name[index]){
        Swap(&plant[k], &plant[k+1]);
    }
    else if(plant[k].name[index] == plant[k+1].name[index]){
        Compare(plant, k, index+1);
    }
}

int main(){
    FILE *input = fopen("testdata.in", "r");
    int plants;
    fscanf(input, "%d\n", &plants);
    struct info plant[plants];
    int i = 0;
    while(!feof(input)){
        fscanf(input, "%[^#]#%[^\n]\n", plant[i].number, plant[i].name);
        i++;
    }
    for(int j = 0; j < i-1; j++){
        for(int k = 0; k < i-j-1; k++){
            Compare(plant, k, 0);
        }
    }
    for(int j = 0; j < i; j++){
        printf("%s %s\n", plant[j].number, plant[j].name);
    }
    return 0;
}