
int main()
{   int year;
    printf("Digite el a�o para comprobar si es bisiesto: ");
    scanf("%d",&year);

    if (year % 4 == 0)
   {
      if (
              (year % 100 == 0)
           && (year % 400 != 0)
         )

         {
             printf("El a�o NO es bisiesto\n");
         }
         else
         {
            printf("El a�o es bisiesto\n");
         }
      }
      else
      {
         printf("El a�o NO es bisiesto \n");
      }

}
