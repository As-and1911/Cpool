/*EPITECH PROJECTS , 2025
**My_swap.c
**File description :
** A  function that swaps the content of two integers , whose adresses are given as parameters
*/
void my_putchar(char c);
int my_swap(int *a , int *b)
{
  int temp = *a ;// déclaration de la variable temporaire "temp" et affectation de la valeur de l'objet pointé par a à cette dernière
  *a = *b ;//copie de la valeur de l'objet pointé par b dans l'objet pointé par a 
  *b = temp ;//copie de la valeur de temp càd celle de l'objet pointé par a dans l'objet pointé par b 
}

void my_put_nbr(int nb)
{
 if (nb >= 10)
    my_put_nbr(nb/10);
 my_putchar('0' + nb%10);
}
void my_test()
{
 int x = 23;
 int y = 45;
 my_swap(&x, &y);
 my_put_nbr(x);
 my_putchar(',');
 my_putchar(' ');
 my_put_nbr(y);
 return ;
}
