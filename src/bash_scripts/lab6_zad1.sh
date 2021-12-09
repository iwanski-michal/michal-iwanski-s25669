#!/bin/bash

path=~/tmp/backup
user=`whoami`
date=`date +%Y-%m-%d`
# echo $user
# echo $date

tar -zcvf ${path}/${user}_home_${date}.tar.gz losowy_folder

