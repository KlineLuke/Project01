/* 
 * File:   Bird.h
 * Author: klineluk
 *
 * Created on February 17, 2018, 11:27 AM
 */

#ifndef BIRD_H
#define	BIRD_H

#include <string>
using namespace std;

#include "Pet.h"

class Bird: public Pet {
protected:
    bool nocturnal;
public:    
    Bird() {
        nocturnal = false;
    }
    Bird( string n, string t, int w, float p, bool nt) : Pet(n, t, w, p), nocturnal(nt) {}
    virtual ~Bird() {}
    Bird(const Bird& b){
        if(this != &b){
            name = b.name;
            type = b.type;
            weight = b.weight;            
            price = b.price;
            nocturnal = b.nocturnal;
        }
    }
    Bird& operator=(const Bird& b){
        if (this != &b) {
            name = b.name;
            type = b.type;
            weight = b.weight;            
            price = b.price;
            nocturnal = b.nocturnal;
        }
        return *this;
    }
};

#endif	/* BIRD_H */

