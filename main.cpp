#include<iostream>
#include "sortlogic.hpp"

using namespace std;
using namespace sf;


int main(){
    system("clear");
    for(int i=0; i<arraySize; i++){
        arrayElement[i]=(rand()%600);
    }
    cout<<"\n\t\t******************************   SORTING VISUALIZER *******************************\n\n";
    int ch;
    cout<<"\n\t\t1. Bubble Sort\n";
    cout<<"\t\t2. Insertion Sort\n";
    cout<<"\t\t3. Selection Sort\n";
    cout<<"\t\t4. Exit\n";
    cout<<"\n\t\tEnter your choice:- \n\t\t";
    cin>>ch;
    
    Sort s1; // object of the class
    RenderWindow window(VideoMode(920, 600), "Sorter");
    switch(ch){
        case 1:
            s1.bubbleSort(window);
            break;
        case 2:
            s1.insertionSort(window);
            break;
        case 3:
            s1.selectionSort(window);
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice.";
            return 1;
    }

    while(window.isOpen()) {
        Event event;

        while (window.pollEvent(event)){
            switch(event.type){
                case Event::Closed:
                    window.close();
                    sorted=false;
                    main();
                    break;
            }
        }

        if(!sorted){
            s1.dispSort(window, idx);
        }
    }
    return 0;
}
