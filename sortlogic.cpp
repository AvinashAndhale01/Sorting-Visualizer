#include<iostream>
#include<SFML/Graphics.hpp>
#include<unistd.h>
#include "sortlogic.hpp"
using namespace sf;
using namespace std;

int arraySize=80;
int arrayElement[80];
unsigned int microsecond = 10000;
bool sorted=false;
int idx = 0;

void Sort::dispSort(RenderWindow& window, int idx){
    window.clear();
    for(int i=0; i<arraySize; i++){
        RectangleShape block(Vector2f(10, arrayElement[i]));
        block.setPosition(i*12, 600-arrayElement[i]);
        block.setFillColor(sorted || i==idx? Color::Green : Color::White);
        window.draw(block);
    }
    window.display();
    usleep(1000);
}

void Sort::bubbleSort(RenderWindow& window) {
    // Bubble sort logic here
    usleep(microsecond);
    int i,j;
    for(i=0;i<arraySize-1;i++){
        for(j=0;j<arraySize-i-1;j++){
            if(arrayElement[j]>arrayElement[j+1]){
                swapping(arrayElement[j],arrayElement[j+1]);
            }
            dispSort(window,j);
        }
    }
    sorted = true;
    dispSort(window,i);
}

void Sort::insertionSort(RenderWindow& window)
{
    //insertionSort Logic Here 
    usleep(microsecond);
    int i, key, j;
    for (i = 0; i < arraySize; i++)
    {
        key = arrayElement[i];
        j = i - 1;

        while (j >= 0 && arrayElement[j] > key)
        {
            arrayElement[j + 1] = arrayElement[j];
            j = j - 1;
            dispSort(window,j);
        }
        arrayElement[j + 1] = key;
    }

    sorted = true;

    dispSort(window,i);

}

void Sort::selectionSort(RenderWindow& window) {
    // Selection sort logic here
    usleep(microsecond);
    int i,j,minIndex;
    for(int i=0;i<arraySize;i++){
        minIndex = i;
        for(int j=i+1;j<arraySize;j++){
            if(arrayElement[minIndex]>arrayElement[j]){
                minIndex = j;
            }
            dispSort(window,j);
        }
        swapping(arrayElement[minIndex],arrayElement[i]);
    }
    sorted = true;
    dispSort(window,i);
}

void Sort:: swapping(int& i,int& j){
    float temp;
    temp = i;
    i = j;
    j = temp;
}