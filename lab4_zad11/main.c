// zadanie 11


#include <stdio.h>
#include <stdlib.h>
#include "wektor.h"

int main() {
    
    // Obcja "lżejsza"
    
    /*int n,i;
    printf("Jak duży ma być wektor? ");
    scanf("%d",&n);
    int A[n],B[n],S[n];
    for(i = 0;i < n;i++){
        printf("Wprowadz A[%d]: ",i + 1);
        scanf("%d",&A[i]);
        printf("Wprowadz B[%d]: ",i + 1);
        scanf("%d",&B[i]);
        S[i] = suma(A[i], B[i]);
    }
    wyswietl_suma(S, n);
    wyświetl_iloczyn(iloczyn(A, B, n));*/
    
    
    int * A,* B,* S,n = 0;
    A = (int *)malloc(sizeof(int));
    B = (int *)malloc(sizeof(int));
    S = (int *)malloc(sizeof(int));
    if((A == NULL) || (B == NULL) || (S == NULL))
    {
        puts("Przydzial pamieci nie powiodl sie.");
        exit(EXIT_FAILURE);
    }
    printf("Jezeli chcesz zakonczyc wpisywanie podaj 'k'.\n");
    printf("A: ");
    while(scanf("%d",&A[n]) == 1 )
    {
        printf("B: ");
        if(scanf("%d",&B[n]) != 1)
            break;
        S[n] = suma(A[n], B[n]);
        ++n;
        printf("A: ");
    }
    wyswietl_suma(S, n);
    wyświetl_iloczyn(iloczyn(A, B, n));
    free(A);
    free(B);
    free(S);
    
    return 0;
}
