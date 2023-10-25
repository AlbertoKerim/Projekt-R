#!/bin/bash

#Provjeri broj argumenata
if [ "$#" -ne 2 ]; then
  echo "Program: $0 <IP_adresa> <Port>"
  exit 1
fi

ip_adresa="$1"
port="$2"

#Netcat commanda
nc -z -v -w 5 "$ip_adresa" "$port"

#Provjeri izlazni status nc komande
if [ $? -eq 0 ]; then
  echo "Port $port na IP adresi $ip_adresa je otvoren."
else
  echo "Port $port na IP adresi $ip_adresa je zatvoren."
fi