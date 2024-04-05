#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct student{
    char name[11];
    int score;
};

void swap(struct student *a, struct student *b){
    struct student temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct student arr[], int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j].score < arr[j+1].score){
                swap(&arr[j], &arr[j+1]);
            }
            else if(strcmp(arr[j].name, arr[j+1].name) > 0 && arr[j].score == arr[j+1].score){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){
    int T;
    scanf("%d", &T);
    for(int testCase = 1; testCase <= T; testCase++){
        int N;
        scanf("%d", &N);
        struct student *data = malloc((N+1) * sizeof(struct student));
        for(int i = 0; i < N; i++){
            getchar();
            scanf("%[^#]#%d", data[i].name, &data[i].score);
        }
        bubbleSort(data, N);
        char nameFind[11];
        getchar();
        scanf("%[^\n]", nameFind);
        for(int i = 0; i < N; i++){
            if(strcmp(data[i].name, nameFind) == 0){
                printf("Case #%d: %d\n", testCase, i+1);
                break;
            }
        }
    }
    return 0;
}