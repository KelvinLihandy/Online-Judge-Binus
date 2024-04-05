#include <stdio.h>

struct student{
    char nama[101];
    long int nim;
    int age;
    long int postal;
    char place[101];
    char date[101];
    char school[101];
    int sibling;
    int height;
    long long int bank;
};

int main(){
    int N;
    scanf("%d", &N);
    struct student data[N];
    for(int n = 0; n < N; n++){
        scanf("%s", data[n].nama);
        getchar();
        scanf("%ld", &data[n].nim);
        getchar();
        scanf("%d", &data[n].age);
        getchar();
        scanf("%ld", &data[n].postal);
        getchar();
        scanf("%s", data[n].place);
        getchar();
        scanf("%s", data[n].date);
        getchar();
        scanf("%[^\n]", data[n].school);
        getchar();
        scanf("%d", &data[n].sibling);
        getchar();
        scanf("%d", &data[n].height);
        getchar();
        scanf("%lld", &data[n].bank);
        getchar();      
    }
    for(int i = 1; i <= N; i++){
        printf("Mahasiswa ke-%d:\n", i);
        printf("Nama: %s\n", data[i].nama);
        printf("NIM: %ld\n", data[i].nim);
        printf("Umur: %d\n", data[i].age);
        printf("Kode Pos: %ld\n", data[i].postal);
        printf("Tempat Lahir: %s\n", data[i].place);
        printf("Tanggal Lahir: %s\n", data[i].date);
        printf("Almamater SMA: %s\n", data[i].school);
        printf("Jumlah Saudara Kandung: %d\n", data[i].sibling);
        printf("Tinggi Badan: %d\n", data[i].height);
        printf("NOMOR REKENING: %lld\n", data[i].bank);
    }   
    return 0;
}