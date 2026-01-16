
/*EPITECH PROJECTS , 2025
**My_strlen.c
**File description :
**A fuction that counts and returns the number of characters found in the string passed as parameter
*/
void my_putchar(char c);
void my_put_nbr(int nb)
{
 if(nb < 0){
    my_putchar('-');
    nb = -nb;
   }
 if(nb >= 10)
    my_put_nbr(nb/10);
 my_putchar('0' + nb%10);
}
int my_strlen(char const *str)
{
 int i = 0;
 if(!str)
     return 0;
 while(str[i] != '\0'){
      i++;
    }
  return i;
}
int main (void)
{
 char const *p ="Je m'appelle As-and et je veux avoir vingt mille euros dans mon compte en banque  à 18 ans";
 my_put_nbr( my_strlen(p));
 my_putchar('\n');
 return 0 ;
}

