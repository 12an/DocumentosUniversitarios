int main(){ // Este programa carece de l�gica.
    int numero, sumatoria=0, i=1;
    do{
        printf("Cuantas Notas desea?",i ); // �Porqu� imprime la variable i?
        scanf("%d", &numero); // El n�mero de notas solo debe ser solicitado una vez, dentro del do, la solicitar� cada vez que se ejecute el do.
        {
        if (numero>=i){ // Esta condici�n es innecesaria.
            printf(" Nota:");
            scanf("%d", &numero);
            }
        }break;
    while(i<=numero); // La variable i nunca se incrementa su valor.
    printf("Promedio = %.2f\n", (float)sumatoria/i);


}
}
