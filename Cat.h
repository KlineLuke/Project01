/* 
 * File:   Cat.h
 * Author: klineluk
 *
 * Created on February 17, 2018, 11:27 AM
 */

#ifndef CAT_H
#define	CAT_H

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

#include "Pet.h"

class Cat: public Pet {
protected:
    bool fluffy;
public:    
    Cat() {
        fluffy = false;
    }
    Cat( string n, string t, float p, int w, bool f) : Pet(n, t, p, w), fluffy(f) {}
    virtual ~Cat() {}
    Cat(const Cat& c){
        if(this != &c){
            name = c.name;
            type = c.type;
            weight = c.weight;            
            price = c.price;
            fluffy = c.fluffy;
        }
    }
    virtual Cat& operator=(const Cat& c){
        if (this != &c) {
            name = c.name;
            type = c.type;
            weight = c.weight;            
            price = c.price;
            fluffy = c.fluffy;
        }
        return *this;
    }
    
    bool getFluffy() {
        return fluffy;
    }
    virtual void print() const {
        cout<<setw(8)<<left<<"Name:"<<setw(8)<<left<<name<<setw(8)<<left<<"Type:";
        cout<<setw(10)<<left<<type<<setw(10)<<left<<"Weight:"<<setw(4)<<weight;
        cout<<setw(10)<<left<<"Price:"<<setw(8)<<setprecision(2)<<fixed<<left<<price;
        cout<<setw(12)<<left<<"Fluffy:"<<setw(8)<<left<<boolalpha<<fluffy<<endl;
    }
};


#endif	/* CAT_H */

