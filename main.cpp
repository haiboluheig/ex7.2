
/* 
 * File:   main.cpp
 * Author: lvhb_
 *
 * Created on February 21, 2018, 3:14 PM
 */

#include <cstdlib>
#include<iostream>

#include "maclasse.h"
using namespace std;

int main() {
    //exe 7.2
    Point point1;
    cout<<"abcisse "<<point1.abcisse()<<"  ordonnee "<<point1.ordonnee()<<endl;
    Point point(1,2);
    cout << "abcisse " << point.abcisse() << "  ordonnee " << point.ordonnee() << endl;
    point.deplacer(3,4);
    cout << "abcisse " << point.abcisse() << "  ordonnee " << point.ordonnee() << endl;

    return EXIT_SUCCESS;
}