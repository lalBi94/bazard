#!/bin/bash

if [[ $1 -lt 0 ]]
then 
	echo "Argument 1 must to be positiv or less than 255"
	echo "connexionStatut.sh <time> <power>"
	exit
fi

if [[ $2 -lt 0 ]]
then
	echo "Argument 2 must to be positiv"
	echo "connexionStatut.sh <time> <power>"
	exit
fi

if [[ $# -lt 2 ]]
then 
	echo "connexionStatut.sh <time> <power>"
	echo "connexionStatut.sh <time> <power>"
	exit
fi

if [[ $# -gt 2 ]]
then
	echo "connexionStatut.sh <time> <power>"
	echo "connexionStatut.sh <time> <power>"
	exit
fi

ip=0

echo "ENTER YOUR PUBLIC IP : " 
read ip

echo "Owner: Bilal"
echo "Process, in progess..."

ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2
ping $ip -t $1 -s $2


exit
