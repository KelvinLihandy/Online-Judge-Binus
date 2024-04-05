#include <stdio.h>
#include <stdlib.h>

struct student{
    long long int nim;
    char nama[21];
};

int main(){
    FILE* input;
    input = fopen("testdata.in", "r");
    long int N;
    fscanf(input, "%ld\n", &N);
    struct student *data = malloc((N+1) * sizeof(struct student));
    for(int studentCount = 0; studentCount < N; studentCount++){
        fscanf(input, "%10lld %s\n", &data[studentCount].nim, data[studentCount].nama);
    }
    long int T;
    fscanf(input, "%ld\n", &T);
    long long int nimSearch[T];
    int found = 0;
    for(int testCase = 1; testCase <= T; testCase++){
        found = 0;
        fscanf(input, "%10lld\n", &nimSearch[testCase-1]);
        for(int search = 0; search < N; search++){
            if(nimSearch[testCase-1] == data[search].nim){
                printf("Case #%ld: %s\n", testCase, data[search].nama);
                found = 1;
                break;
            }
        }
        if(!found) printf("Case #%ld: N/A\n", testCase);
    }
}