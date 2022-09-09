/* 
 * File:   main.c
 * Author: jlflo_mcmuhoo
 *
 * Created on September 8, 2022, 9:56 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

double  calcularResultado1(int x){
    return x*x+0.5*x-3.75;
}

int calcularFactorial(int n){
    int res=1;
    for(int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}

double promedioArregloEntero(int n, int *arr){
    int suma=0;
    for(int i=0;i<n;i++){
        suma+=arr[i];
    }
    return suma*1.0/n;
}

float medianaArregloFloat(int n, float *arr){
    int min;
    float temp;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    
    if(n%2==0) return (arr[n/2]+arr[n/2+1])/2;
    else return arr[(n+1)/2];
}

double modaArregloFloat(int n, double *arr){
    double cont,res=0;
    int pos;
    for(int i=0;i<n;i++){
        cont=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j) cont++;                
        }
        if(cont>=res){
            res=cont;
            pos=i;    
        }
    }
    return arr[pos];
}

double mediaArmonicaArrUnsignedLong(int n, unsigned long *arr){
    double denominador=0;
    for(int i=0;i<n;i++){
        denominador+=1.0/arr[i];
    }
    return n*1.0/denominador;
}

void calcularTranspuestaMatrizCuadrada(int n,int **mat,int **trans){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            trans[i][j]=mat[j][i];
        }
    }
}

void parte2(){
    
}

void parte1(){
    int x;
    double res;
    x=100;
    res = calcularResultado1(x);
    x=1000;
    res = calcularResultado1(x);
    x=10000;
    res = calcularResultado1(x);
}

int main(int argc, char** argv) {
    parte1();
    parte2();
    
    return (EXIT_SUCCESS);
}

