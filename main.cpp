#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//vectores y funciones:

//LECTURA DEL VECTOR
void leer_vector(int num[], int tamanio)
{
    //los vectores siempre pasan por referencia
    for (int i=0; i<tamanio; i++)
    {
        cout<<endl<<"Inrese el elemento # " << (i+1)<<" : ";
        cin>>num[i];
    }
}

//impresion del vector
void imprime_vector(int vector[], int tamanio)
{
    cout<<endl<<endl<<"ELEMENTOS DE VECTOR";
    for (int i=0; i<tamanio; i++)
    {
        cout<<endl<<"Ingrese el elemento # " << (i+1)<<" : " <<vector[i];
    }
}

//REALIZAR LA SUMATORIA DE LOS ELEMENTOS DEL VECTOR
double sumatoria_vector(int vector[], int tamanio)
{
    double suma=0;
    for(int i=0; i<tamanio; i++)
        suma+=vector[i];
    return suma;
}


//REALIZAR EL PROMEDIO DE LOS ELEMENTOS DEL VECTOR:

double promedio_vector(int vector[], int tamanio)
{
    double promedio = 0.0;

    for (int i = 0; i < tamanio; i++)
        promedio += vector[i];

    return promedio / (float) tamanio;
}

// 1)Función que devuelve el elemento máximo del vector
double maximo_vector (int* vector, int num)
{
    double maximo;

    maximo = vector[0];
    for (int i = 1; i < num; i++)
        if (vector[i] > maximo)
            maximo = vector[i];
    return (maximo);
}

//2)Función que devuelve el elemento mínimo del vector
double minimo_vector (int* vector, int num)
{
    int i;
    double min;

    min = vector[0];
    for (i = 1; i < num; i++)
        if (vector[i] < min)
            min = vector[i];
    return (min);
}

//3)Función que devuelve por referencia el elemento mínimo y máximo del vector.
double referencia_min_max (int* vector, int num) {
    int max, nmax, min, nmin, n, vec[100];
    for (int i = 0; i < n; i++) {
        if (i==0) {
            max=vec[i];
            min=vec[i];
        }

        else if (vec[i]>max){
            max=vec[i];
            nmax=0;
        }

        else if (vec[i]==max){
            nmax=nmax+1;
        }

        else  if (vec[i]<min){
            min=vec[i];
            nmin=0;
        }

        else if (vec[i]==min){
            nmin=nmin+1;
        }
    }
}

//4)Función que llene el vector con valores aleatorios

int aletorios_vectores (int vector[], int tamanio) {
    {
        srand(time(NULL));
        int i, n, aleatorio, DESDE = 4, HASTA = 10;
        cout <<endl<< "Numeros aleatorios entre " << DESDE << " y " << HASTA << endl;
        cout << "Cuantos numeros aleatorios quiere generar? :  ";
        cin >> n;
        for (i = 1; i <= n; i++) {
            aleatorio = rand() % (HASTA - DESDE + 1) + DESDE;
            cout << aleatorio << " ";
        }
        cout << endl;
    }
}

int main() {
    const int MAX=5;
    int num[MAX];

    //llamada a la funcion para leer el vector
    leer_vector(num, MAX);
    imprime_vector(num, MAX);
    int suma= sumatoria_vector(num, MAX);
    cout<<endl<<"LA SUMATORIA DEL VECTOR ES: "<<suma;

    int promedio= promedio_vector(num, MAX);
    cout<<endl<<"EL PROMEDIO DE LOS VECTOR ES: "<<promedio;

    int maximo= maximo_vector (num, MAX);
    cout<<endl<<"EL MAXIMO DE LOS VECTOR ES: "<<maximo;

    int minimo= minimo_vector (num, MAX);
    cout<<endl<<"EL MINIMO DE LOS VECTOR ES: "<<minimo;

    aletorios_vectores(num, MAX);

    int max, nmax, min, nmin;
    cout<<endl<<"O maximo es: "  << max <<  " y aparece " << nmax <<  " veces.";
    cout<<endl<<"O maximo es: "  << min <<  " y aparece " << nmin <<  " veces.";

    return 0;
}
