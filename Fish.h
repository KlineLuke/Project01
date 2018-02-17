/* 
 * File:   Fish.h
 * Author: klineluk
 *
 * Created on February 17, 2018, 11:27 AM
 */

#ifndef FISH_H
#define	FISH_H

#include <string>
using namespace std;

#include "Pet.h"

class Fish: public Pet {
protected:
    string watertype;
public:    
    Fish() {
        watertype = "";
    }
    Fish( string n, string t, int w, float p, string wt) : Pet(n, t, w, p), watertype(wt) {}
    virtual ~Fish() {}
    Fish(const Fish& f){
        if(this != &f){
            name = f.name;
            type = f.type;
            weight = f.weight;            
            price = f.price;
            watertype = f.watertype;
        }
    }
    Fish& operator=(const Fish& f){
        if (this != &f) {
            name = f.name;
            type = f.type;
            weight = f.weight;            
            price = f.price;
            watertype = f.watertype;
        }
        return *this;
    }
};

#endif	/* FISH_H */

