int *crearIntArreglo(){
    int c;
    do {
        printf("Elije la cantidad de elementos en tu arreglo: ");
        scanf("%d", &c);
        if (c < 0) 
            printf("Elije una cantidad mayor a 1!!\n");

    } while (c < 0);
    
    int *n = (int*) malloc(sizeof(int)*c);
    if (n == NULL) {
        printf("No se pudo crear el arreglo\n");
        return NULL;
    }
    for (int i = 0; i < c; ++i) {
        printf("Escribe el elemento %d: ", i);
        scanf("%d", &n[i]);
    }
    return n;
}

void arregloOrdenado(int arreglo[], int n) {
    int aux;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arreglo[j + 1] < arreglo[j]) {
                aux = arreglo[j+1];
                arreglo[j+1] = arreglo[j];
                arreglo[j] = aux;
            }
        }
    }
    printf("El arreglo ordenado es: ");

    for(int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
}

void buscarCaracter(char *c, char b) {
    for (int i = 0; i < strlen(c); i++) {
        if(c[i] == b) 
            printf("El caracter fue encontrado en: %d\n", i+1);
    }
}


// TODO - Necesita funcion de introduccion de elementos
float *sumaDeArreglos(float *arr1, float *arr2, int tam) {
    float *arr = (float*) malloc(sizeof(float)*tam);
    for(int i = 0; i < tam; i++) {
        arr[i] = arr1[i] + arr2[i];
    }
    return arr;
}

void promYDesv(float* calf, int tam) {
    float prom = 0;
    float De = 0;
    if (tam == 1 || tam < 0) {
        printf("No se puede aplicar la desviacion estandar en esta prueba\n");
        return;
    }
    for(int i = 0; i < tam; ++i) {
        prom += calf[i];
    }
    prom = prom/tam;
    for (int i = 0; i < tam; ++i) {
        De += (calf[i] - prom)*(calf[i] - prom);
    }
    De = sqrt(De/(tam - 1));
    printf("El promedio de la muestra es de: %f\n", prom);
    printf("La desviacion estandar es: %f", De);
}


// TODO: Hace falta terminar esta funcion 
int* recorrerElemento(int *arreglo, int e, int tam, int pos) {
    int* arreglos = (int*) realloc(arreglo, tam+1*sizeof(int));
    if(arreglos == NULL){
        printf("Hay un error al relocalizar los elementos");
        return NULL;
    }

    return arreglos;
}

void parImpar(int *arr, int tam) {
    int *par = (int*) malloc(sizeof(int)*tam);
    int *impar = (int*) malloc(sizeof(int)*tam);
    int ip = 0;
    int im = 0;

    for (int i = 0; i < tam; i++) {
        if (arr[i] % 2 != 1) {
            par[ip] = arr[i];
            ++ip;
        } else {
            impar[im] = arr[i];
            ++im;
        }
    }
    printf("Numero de pares: %d\n", ip);
    printf("Impresion del arreglo: ");
    for(int i = 0; i < ip; i++) {
        printf("%d ", par[i]);
    }
    printf("\n");
    printf("Numero de impares: %d\n", im);
    printf("Impresion de impares: ");
    for(int i = 0; i < im; i++) {
        printf("%d ", impar[i]);
    }
    free(par);
    free(impar);
}


// TODO: debe de hacerse una funcion que revise que ambos arreglos tienen los mismos elementos
int productoInterior(int *arr1, int *arr2, int n) {
    int prod = 0;
    for (int i = 0; i < n; i++) {
        prod += arr1[i]*arr2[i];
    }
    printf("El producto escalar es: ");
    return prod;
}
