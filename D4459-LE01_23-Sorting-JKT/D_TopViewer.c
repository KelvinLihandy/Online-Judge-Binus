#include <stdio.h>

struct data{
    char title[1001];
    char youtuber[1001];
    int viewer;
};

void Swap(struct data *a, struct data *b){
    struct data temp = *a;
    *a = *b;
    *b = temp;
}

void Compare(struct data BeeTube[], int j, int index){
    if(BeeTube[j].title[index] > BeeTube[j+1].title[index]){
        Swap(&BeeTube[j], &BeeTube[j+1]);
    }
    else if(BeeTube[j].title[index] == BeeTube[j+1].title[index]){
        Compare(BeeTube, j, index+1);
    }
}

int main(){
    FILE *input = fopen("testdata.in", "r");
    struct data BeeTube[100];
    int count = 0;
    while(!feof(input)){
        fscanf(input, "%[^#]#%[^#]#%d\n", BeeTube[count].title, BeeTube[count].youtuber, &BeeTube[count].viewer);
        count++;
    }
    for(int i = 0; i < count-1; i++){
        for(int j = 0; j < count-i-1; j++){
            if(BeeTube[j].viewer < BeeTube[j+1].viewer){
                Swap(&BeeTube[j], &BeeTube[j+1]);
            }
            else if(BeeTube[j].viewer == BeeTube[j+1].viewer){
                Compare(BeeTube, j, 0);
            }
        }
    }
    for(int i = 0; i < count; i++){
        printf("%s by %s - %d\n", BeeTube[i].title, BeeTube[i].youtuber, BeeTube[i].viewer);
    }
}