/* 
 * File:   Pet.h
 * Author: klineluk
 *
 * Created on February 17, 2018, 11:27 AM
 */

#ifndef PET_H
#define	PET_H

#include <string>
using namespace std;

class Pet{
protected:
    string name;
    string type;
    int weight;
    float price;
public:
    Pet() {
        name = "";
        type = "";
        weight = 0;
        price = 0.0;
    }
    Pet( string n, string t, int w, float p) : name(n), type(t), weight(w), price(p) {}
    virtual ~Pet() {}
    Pet(const Pet& pet){
        if(this != &pet){
            name = pet.name;
            type = pet.type;
            weight = pet.weight;            
            price = pet.price;
        }
    }
    Pet& operator=(const Pet& pet){
        if (this != &pet) {
            name = pet.name;
            type = pet.type;
            weight = pet.weight;            
            price = pet.price;
        }
        return *this;
    }
};

#endif	/* PET_H */