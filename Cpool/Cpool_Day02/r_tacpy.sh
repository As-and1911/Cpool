
#!/bin//bash
  cut -d : -f 1 | rev |awk 'NR % 2 == 0' | sort -r | awk -v m1="$MY_LINE1" -v m2="$MY_LINE2" ' NR >= m1 && NR <= m2'| tr '\n' ','| sed 's/,/, /g'| sed 's/, $/. \n/g'
