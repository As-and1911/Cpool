/*EPITECH PROJECTS ,2025
**My_evil_str.c
**File description :
** A function that swap each of the string's characters,two-by-two
*/
void my_putchar(char c);
int my_char_swap(char *a, char *b)
{
   char temp = *a;
  *a = *b;
  *b = temp;
}
int my_strlen(char const *str)
{
 int i = 0;
 while(str[i] != '\0'){
       i++;
    }
 return i;
}
char *my_evil_str(char *str)
{
  int i = 0;
  int j = my_strlen(str) - 1;
  while( i < j){
       my_char_swap(&str[i], &str[j]);
       i++;
       j--;
    }
 return(str);
}
int main(void)
{
 char s[] = "Je m'appelle As-and ";
 my_evil_str(s);
 int k = 0;
 while(s[k]){
      my_putchar(s[k]);
      k++;
     }
 return 0;
}
