int main(){
    float sumatoria=0, nota;
    int i;
for (i = 0;i < 20;i += 1) { // Se limit� la cantidad de notas a 20
       printf("Introduzca la nota: ");
       scanf("%f",&nota);
        sumatoria += nota; }
        if (nota < 0 && nota > 100) // Esta validaci�n est� dem�s, no era requerida.
        printf("Error ");
        else
        printf("promedio = %.2f\n", sumatoria/20);
    system("pause");
}
