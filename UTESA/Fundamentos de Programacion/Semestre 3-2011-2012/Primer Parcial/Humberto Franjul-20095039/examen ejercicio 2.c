int main () {
    int cantidad;
    printf("Cuantas Notas? ");
    scanf("%d", &cantidad); // Esta variable solo se crea, pero luego de este punto nunca se vuelve a utilizar.
    if(cantidad == 20);{ //El s�mbolo de ; colocado fuera del if limita que el if se ejecute.

    int numero, sumatoria = 1, i = 1;
    do{
        printf("introduzca Nota %.2d: ", i);
        scanf("%d", &numero);
        if(numero >= 0 && numero <= 100) { // Esta condici�n no era requerida por el mandato.
            sumatoria = sumatoria + numero;
            i++;
        }else {
            printf("Numero invalido!\n");
        }

    }while(i <= 20); // Se limit� la cantidad a 20 y debi� limitarse a la cantidad introducida por el usuario
    printf("promedio = %.2f\n", (float)sumatoria/i);
    }
}
