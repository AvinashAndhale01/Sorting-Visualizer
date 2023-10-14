#ifndef SORTLOGIC_HPP_INCLUDED
#define SORTLOGIC_HPP_INCLUDED
#include<SFML/Graphics.hpp>

extern int arraySize;
extern int arrayElement[80];
extern unsigned int microsecond;
extern bool sorted;
extern int idx;

class Sort{

    public:
        void dispSort(sf::RenderWindow& window, int idx);
        void bubbleSort(sf::RenderWindow& window);
        void insertionSort(sf::RenderWindow& window);
        void selectionSort(sf::RenderWindow& window);
        void swapping(int& i,int& j);
};

#endif