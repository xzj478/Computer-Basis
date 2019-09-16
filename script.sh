#!/bin/bash

pwd >> log.txt
ls >> log.txt
mkdir directory >> log.txt
cd directory >> log.txt
echo -e "Hello\v\tWorld!" >> a.txt
cp a.txt ..\b.txt
cd ..
rmdir directory >> log.txt
rm -r directory >> log.txt
