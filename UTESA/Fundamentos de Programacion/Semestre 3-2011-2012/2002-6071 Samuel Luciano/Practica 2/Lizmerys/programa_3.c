/*Lizmerys Dalisda
2010-5106
8-6-12*/


int main()  {

    int apo;

    printf("ingrese un a�o \t");
    scanf ("%d",&apo);

   if( (apo % 4 == 0) && (apo % 100 != 0) || (apo % 400 == 0) )
   {
		printf("El a�o es bisiesto!!\n");
            }
   else if( (apo % 4 != 0) && (apo % 100 != 0) || (apo % 400 != 0) )
   {
		printf ("El a�o no es bisiesto\n");
		}

   system("pause");

}
