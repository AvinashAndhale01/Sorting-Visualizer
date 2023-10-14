#!/bin/sh
echo "Compiling"
g++ main.cpp sortlogic.cpp -lsfml-system -lsfml-graphics -lsfml-window -o my_program
echo "Runiing"
./my_program
