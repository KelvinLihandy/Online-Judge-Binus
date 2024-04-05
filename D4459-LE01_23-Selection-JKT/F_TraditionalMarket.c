#include<stdio.h>

int main(){
    long long int d;
    long long int s;
    long long int t;
    do{
        scanf("%lld %lld %lld", &d, &s, &t);
    }while(d == s && d == t);

    if(d > s && s > t)
        printf("Daging\nSayur\nTelur\n");
    else if(d > t && t > s)
        printf("Daging\nTelur\nSayur\n");
    else if(s > d && d > t)
        printf("Sayur\nDaging\nTelur\n");
    else if(s > t && t > d)
        printf("Sayur\nTelur\nDaging\n");
    else if(t > s && s > d)
        printf("Telur\nSayur\nDaging\n");
    else if(t > d && d > s)
        printf("Telur\nDaging\nSayur\n");
        
    return 0;
}