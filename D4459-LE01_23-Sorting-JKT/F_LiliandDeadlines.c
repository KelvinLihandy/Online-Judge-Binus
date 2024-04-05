#include <stdio.h>
#include <string.h>

struct list{
    char name[11];
    long deadline;
};

int main(){
    int assignment;
    scanf("%d", &assignment);
    struct list assignments[assignment];
    for(int i = 0; i < assignment; i++){
        getchar();
        scanf("%s %ld", assignments[i].name, &assignments[i].deadline);
    }
    for(int i = 0; i < assignment-1;  i++){
        for(int j = 0; j < assignment-i-1; j++){
            if(assignments[j].deadline > assignments[j+1].deadline){
                struct list temp = assignments[j+1];
                assignments[j+1] = assignments[j];
                assignments[j] = temp;
            }
            else if(assignments[j].deadline == assignments[j+1].deadline){
                if(strcmp(assignments[j].name, assignments[j+1].name) > 0){
                    struct list temp = assignments[j+1];
                    assignments[j+1] = assignments[j];
                    assignments[j] = temp;
                }
            }
        }
    }
    for(int i = 0; i < assignment; i++){
        printf("%s\n", assignments[i].name);
    }
}