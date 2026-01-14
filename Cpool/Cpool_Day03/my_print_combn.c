/*
** EPITECH PROJECTS,2025
**My_print_combn
**File description :
** Task 09 day03
*/
void my_putchar(char c);
// 1- l'outil d'affichage qui fonctionne sur la base de  la récursivité
   // La  récursivité est un concept que l'on peut assimiler à une sorte d'empilement et  de dépilement. Voici un exemple:
   // Si n = 123  n > 10  alors la fonction my_put_nbr fait omission du dernier chiffre( le 3 )
   //et là elle se met sur pose.Ceci est possible grâce à la ligne < my_put_nbr(nb / 10 )> qui dit à la fonction de prendre le quotient de la division de nb par 10
   //ainsi le reste càd dire le dernier chiffre est ignoré.(Pour plus de détail cf cours d'arithmétique Terminale C section Congruence)
   // Elle traite maintenant notre nombre sans le dernier chiffre càd le nombre 12. 12 > 10 
   // donc on fait encore une fois omission du dernier chiffre (le 2 ). la fonction se met en pose une deuxième fois. 
   //maintenant on travaille uniquement avec le chiffre  1 1< 10 alors on sort de la condition et l'instruction suivante s'exécute .Elle permet d'afficher
   // le reste de la division euclidienne de nb par 10
   // Dans ce dernier cas il s'agit de 1.
   //Donc on affiche le premier chiffre 1 . Ensuite on redescent au nombre 12 mis en pause précédemment. Eh bien il reprend du service mais cette fois on va juste se concentrer sur
   // le reste de sa division par 10 aui est 2 . Donc  la fonction affichera le chiffre 2.On descent encore une fois  et là  c'est au tour de notre nombre de départ 123
   // le reste de sa division par 10 est 3 donc la fonction affichera 3. Au final on verra affiché le nombre 123. 
void my_put_nbr(int nb)
{
  if( nb >= 10){
     my_put_nbr(nb / 10);
    }
  my_putchar('0' + nb % 10);
}
//2- l'outil de calcul de puissance pour la gestion des zéros fantômes
//Il va nous servir à afficher le 0 dans le cas où  pour n = 3 on a 012 puisque pour le compilateur 012 revient juste à 12 
int my_power(int base , int power)
{
  int result = 1;
  while(power > 0){
       result = result * base;
       power --;
     }
  return(result);
}
// 3- L'outil de calcul de la combinaision maximale qui permettra de gérer l'affichage des virgules et des espaces entre les combinaisons sauf bien sûr pour la dernière
// càd la plus grande
int get_max_comb(int n)
{
  int max = 0;// le nombre maximale .Il se comporte comme un accumulateur
  int  i = 0;// le compteur de boucle
  int digit = 10 - n; // le premier chiffre de notre notre nombre maximal 
  while (i < n ){
     max = (max * 10) + digit;
     digit ++;
     i ++;
   }
 return(max);
}
// 4- la  fonction ouvrière récursive qui va effectuer tout le travail  à l'aide des outils précédents
void recursive_worker( int n_total, int n_restant , int last_digit , int current_nb)
{
  int i ; // compteur de boucle
  // Condition d'arrêt 
  if(n_restant == 0 ){ 
     // Gestion des zéros fantômes
     if (n_total > 1 && current_nb < my_power(10 , n_total - 1)){
         my_putchar('0');
       }
    // affichage de la combinaison
     my_put_nbr(current_nb);
   
    // Gestion des  virgules et des espaces 
    int max_value  = get_max_comb(n_total);
    if(current_nb != max_value){
       my_putchar(',');
       my_putchar(' ');
     }
   } 
i = last_digit + 1;
 while( i <= 9 ){
       recursive_worker(n_total, n_restant - 1, i , (current_nb * 10) + i);
       i ++;
      }
 return;
}
// 5- la fonction cheffe qui récupère la valeur de la variable n
int my_print_combn(int n)
{
  // Gestion des cas indéterminé où n = 0 ou n > 10
  if( n == 0 || n > 10){
     return(0);
     }
 recursive_worker(n, n, -1, 0);
 return(0);
}
