#include <stdio.h>

void inver(int tab[], int n){
    int i=0, j= n-1, tmp;
    while(i<j){
        tmp= tab[i];
        tab[i]= tab[j];
        tab[j]= tmp;
        i++; j--;
    }
}

int main(){
    int n;
    printf("Combien de nombres allez vous entrez? :  ");
    scanf("%d", &n);
    int tab[n];
    printf("Entrez les %d elements : ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &tab[i]);
    }
    printf("Tableau avant inversion : ");
    for(int i=0; i<n; i++){
        printf("%d", tab[i]);
    }
    inver(tab, n);
    printf("\nTableau inverse : ");
    for(int i=0; i<n; i++){
        printf("%d", tab[i]);
    }
    printf("\n");
    return 0;
}