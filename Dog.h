/* 
 * File:   Dog.h
 * Author: klineluk
 *
 * Created on February 17, 2018, 11:27 AM
 */

#ifndef DOG_H
#define	DOG_H

#include "Pet.h"

#include <string>
using namespace std;

class Dog: public Pet {
protected:
    string category;
public:    
    Dog() {
        category = "";
    }
    Dog( string n, string t, int w, float p, string c) : Pet(n, t, w, p), category(c) {}
    virtual ~Dog() {}
    Dog(const Dog& d){
        if(this != &d){
            name = d.name;
            type = d.type;
            weight = d.weight;            
            price = d.price;
            category = d.category;
        }
    }
    Dog& operator=(const Dog& d){
        if (this != &d) {
            name = d.name;
            type = d.type;
            weight = d.weight;            
            price = d.price;
            category = d.category;
        }
        return *this;
    }
};


#endif	/* DOG_H */

