char* my_evil_str(char *str)
{
 int i = 0;
 int j = 0;
 char temp;
 while(str[j]){
      j++;
   }
 j--;
while(i<j){
     temp = str[i];
     str[i] = str[j];
     str[j] = temp;
     i++;
     j--;
   }
 return str ;
}
