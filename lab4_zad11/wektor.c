//
//  wektor.c
//  lab4_zad11
//
//  Created by Kasia on 27/12/2020.
//

#include "wektor.h"
#include <stdio.h>
int suma(int a,int b){
    return a + b;
}
void wyswietl_suma(int s[],int n)
{
    int i;
    printf("S:  ");
    for(i = 0;i < n;i++)
        printf("%d  ",s[i]);
    printf("\n");
}
int iloczyn(int a[],int b[],int n)
{
    int i,w = 0;
    for(i = 0;i < n;i++)
    {
        w += a[i] * b[i];
    }
    return w;
}
void wyświetl_iloczyn(int x){
    printf("il_sk = %d\n",x);
}
