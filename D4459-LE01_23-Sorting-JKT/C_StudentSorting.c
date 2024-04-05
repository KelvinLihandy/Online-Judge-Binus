#include <stdio.h>
#include <stdlib.h>
 
struct student{
    char nim[11];
    char name[21];
};

void swap(struct student *a, struct student *b){
    struct student temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    FILE* input = fopen("testdata.in", "r");
    int N;
    fscanf(input, "%d", &N);
    struct student data[N];
    int count = 0;
    while(feof(input)){
        fscanf(input, "%10s %20[^\n]", data[count].nim, data[count].name);
        count++;
    }
    for(int i = 0; i < N-1; i++){
        for(int j = 0; j < N-1-i; j++){
            if(atoi(data[j].nim) > atoi(data[j+1].nim)){
                swap(&data[j], &data[j+1]);
            }
        }
    }
    for(int studentCount = 1; studentCount <= N; studentCount++){
        printf("%s %s\n", data[studentCount-1].nim, data[studentCount-1].name);
    }
    fclose(input);
    return 0;
}