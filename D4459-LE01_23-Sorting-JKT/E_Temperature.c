#include <stdio.h>
#include <string.h>

struct data{
    char city[1001];
    double temperature;
    double converted;
    char system;
};

void Swap(struct data *a, struct data *b){
    struct data temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(struct data cities[], int left, int right){
	double pivot = cities[right].converted;
	int i = left - 1;
	for(int j = left; j < right; j++){
		if(cities[j].converted < pivot){
			i++;
			Swap(&cities[i], &cities[j]);
		}
	}
	Swap(&cities[i+1], &cities[right]);
	return i+1;
}

void QuickSort(struct data cities[], int left, int right){
	if(left < right){
		int correct = Partition(cities, left, right);
		QuickSort(cities, left, correct-1);
		QuickSort(cities, correct+1, right);
	}
}

int main(){
    FILE *input = fopen("testdata.in", "r");
    struct data cities[100];
    int counter = 0;
    while(!feof(input)){
        fscanf(input, "%[^#]#%lf#%c\n", cities[counter].city, &cities[counter].temperature, &cities[counter].system);
        if(cities[counter].system == 'F'){
            cities[counter].converted = cities[counter].temperature;
        }
        else if(cities[counter].system == 'C'){
            cities[counter].converted = (9.0*cities[counter].temperature)/5.0 + 32.0;
        }
        counter++;
    }
    QuickSort(cities, 0, counter-1);
    for(int i = 0; i < counter; i++){
        printf("%s is %.2lf%c\n", cities[i].city, cities[i].temperature, cities[i].system);
    }
}