
void bipalindrome(char *palabra) {
    char **palabras = (char**) malloc(2*sizeof(char*));
    if (palabras == NULL) {
        printf("No se ha asignado correctamente la memoria...\n");
        free(palabras);
        return;
    }
    for(int i = 0; i < 2; ++i) {
        palabras[i] = (char *) malloc((strlen(palabra)+1)*sizeof(char));
        if (palabras[i] == NULL) {
            printf("Error al asignar la memoria...\n");
            if (i == 1) free(palabras[0]);
            free(palabras[i]);
            free(palabras);
            return;
        }
    }

    // Asignar la palabra:
    strcpy(palabras[0], palabra);
    int indice = 0;
    for (int i = strlen(palabra) - 1; i>= 0; i--)
    {
        palabras[1][indice] = palabras[0][i];
        indice++;
    }
    palabras[1][strlen(palabra)] = '\0';

    if (strcmp(palabras[0], palabras[1]) == 0) {
        printf("Se trata de un palindromo!\n");
    } else {
        printf("No es un palindromo\n");
    }

    for (int i = 0; i < 2; i++) {
        free(palabras[i]);
    }
    free(palabras);
}


// TODO
void sumaDeMatriz(int** matriz1, int** matriz2) {
    return;
}
