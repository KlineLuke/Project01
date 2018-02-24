/* 
 * File:   Dog.h
 * Author: opperm27/klineluk
 *
 * Created on February 17, 2018, 11:27 AM
 */

#ifndef DOG_H
#define	DOG_H

#include "Pet.h"

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

class Dog: public Pet {
protected:
    string category;
public:    
    Dog()   // default constructor  
    {
        category = "";
    }
    // constructor 
    Dog( string n, string t, float p, int w, string c) : Pet(n, t, p, w), category(c) {}
    virtual ~Dog() {}   // destructor 
    Dog(const Dog& d)   // copy constructor
    {
        if(this != &d)
        {
            name = d.name;
            type = d.type;
            weight = d.weight;            
            price = d.price;
            category = d.category;
        }
    }
    virtual Dog& operator=(const Dog& d)    // assignment constructor
    {
        if (this != &d) 
        {
            name = d.name;
            type = d.type;
            weight = d.weight;            
            price = d.price;
            category = d.category;
        }
        return *this;
    }
    
    string getCategory() const
    {
        return category;
    }
    virtual void print() const // prints everything about pet 
    {
        cout<<setw(8)<<left<<"Name:"<<setw(8)<<left<<name<<setw(8)<<left<<"Type:";
        cout<<setw(10)<<left<<type<<setw(10)<<left<<"Weight:"<<setw(4)<<left<<weight;
        cout<<setw(10)<<left<<"Price:"<<setw(8)<<setprecision(2)<<fixed<<left<<price;
        cout<<setw(12)<<left<<"Category:"<<setw(8)<<left<<category<<endl;
    }
};


#endif	/* DOG_H */

