/* 
 * File:   Cat.h
 * Author: klineluk
 *
 * Created on February 17, 2018, 11:27 AM
 */

#ifndef CAT_H
#define	CAT_H

#include <string>
using namespace std;

#include "Pet.h"

class Cat: public Pet {
protected:
    bool fluffy;
public:    
    Cat() {
        fluffy = false;
    }
    Cat( string n, string t, int w, float p, bool f) : Pet(n, t, w, p), fluffy(f) {}
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
    Cat& operator=(const Cat& c){
        if (this != &c) {
            name = c.name;
            type = c.type;
            weight = c.weight;            
            price = c.price;
            fluffy = c.fluffy;
        }
        return *this;
    }
};


#endif	/* CAT_H */

