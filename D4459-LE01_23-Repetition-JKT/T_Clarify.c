#include <stdio.h>

int main(void){
    int requests;
    scanf("%d", &requests);
    int clarified = 0;
    for(int request = 1; request <= requests; request++){
        int sent;
        int solved;
        int view;
        scanf("%d %d %d", &sent, &solved, &view);
        if(solved > view) clarified++;
    }
    printf("%d\n", clarified);
    return 0;
}