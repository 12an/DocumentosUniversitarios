int main()
{
    int year;
    
    printf("ingrese un a�o:");
    scanf ("%d",&year);
    
   if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) 
   { printf("\nel a�o es bisiesto\n");
            } else if((year % 4 != 0) && (year % 100 != 0) || (year % 400 != 0))
            {printf ("\nel a�o no es bisiesto\n");}
   system("PAUSE");
    
}
