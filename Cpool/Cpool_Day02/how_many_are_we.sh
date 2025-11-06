#!/bin/bash
city="$1"

cities=("PAR" "LYN" "TLS" "BDX" "LIL" "MPL" "REN" "NAN" "NCY" "MAR" "STG" "NCE")
# bloc visant à chercher une correspondance entre le premier  argument et l'un des éléments du tableau cities

found=false #initialisation du booléen found .Valeur initiale false donc aucune ville n'est trouvé initialement
for C in "${cities[@]}"; do 
  if [[ "$C" == "$city" ]]; then
    found=true
    break # une fois la correspondance trouvée la commande break nous sort de la boucle for pour éviter les recherches inutiles. Cela rend le script plus efficace
  fi
done 

#bloc visant à soit afficher le nombre total d'élèves soit le nombre venant de la ville trouvée. Et tout ceci en fonction de la valeur du booléen found
if [ "$found" == true ]; then 
  echo " le nombre d'élèves venant de $city est : $( grep -c "$city" students.csv )"
else 
  echo " le nombre total d'élèves est :$( wc -l < students.csv )"
fi    

