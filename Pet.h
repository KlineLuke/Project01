/* 
 * File:   Pet.h
 * Author: klineluk
 *
 * Created on February 17, 2018, 11:27 AM
 */

#ifndef PET_H
#define	PET_H

#include <string>
#include <iostream>
using namespace std;

class Pet{
protected:
    string name;
    string type;
    int weight;
    float price;
public:
    Pet() // default Constructor
    {
        name = "";
        type = "";
        weight = 0;
        price = 0.0;
    }
    // constructor
    Pet( string n, string t, float p, int w) : name(n), type(t), price(p), weight(w) {}
    virtual ~Pet() {}       // destructor
    Pet(const Pet& pet)     // copy constructor
    {
        if(this != &pet)
        {
            name = pet.name;
            type = pet.type;
            weight = pet.weight;            
            price = pet.price;
        }
    }
    virtual Pet& operator=(const Pet& pet) // assignment constructor
    {
        if (this != &pet) 
        {
            name = pet.name;
            type = pet.type;
            weight = pet.weight;            
            price = pet.price;
        }
        return *this;
    }
    string getName()
    {
        return name;
    }
    string getType() 
    {
        return type;
    }
    int getWeight() 
    {
        return weight;
    }
    float getPrice() 
    {
        return price;
    }
    
    virtual void print() const = 0;
};

#endif	/* PET_H */

