#!/bin/bash 
cut -d '_' -f 1 | grep -c "$1"
