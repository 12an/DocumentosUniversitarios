int main(){
int M1;
float M2;  
printf("Introduzca un a�o: ",164);
scanf("%d",&M1);
if (M1<=100){  
if ((M1%4)==0)
printf("El a�o es bisiesto\n\n",164);        
else 
printf("El a�o no es bisiesto\n\n");
}
if (M1>100)          
{         
if (((M1%4)==0) && ((M1%100)==0) && ((M1%400)==0)) 
printf("El a�o es bisiesto\n\n",164);
else 
printf("El a�o no es bisiesto\n\n");
}
system("pause");}
