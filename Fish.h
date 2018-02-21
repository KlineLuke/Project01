/* 
 * File:   Fish.h
 * Author: klineluk
 *
 * Created on February 17, 2018, 11:27 AM
 */

#ifndef FISH_H
#define	FISH_H

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

#include "Pet.h"

class Fish: public Pet {
protected:
    string watertype;
public:    
    Fish() {
        watertype = "";
    }
    Fish( string n, string t, float p, int w, string wt) : Pet(n, t, p, w), watertype(wt) {}
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
    virtual Fish& operator=(const Fish& f){
        if (this != &f) {
            name = f.name;
            type = f.type;
            weight = f.weight;            
            price = f.price;
            watertype = f.watertype;
        }
        return *this;
    }
    
    string getWatertype() {
        return watertype;
    }
    virtual void print() const {
        cout<<setw(8)<<left<<"Name:"<<setw(8)<<left<<name<<setw(8)<<left<<"Type:";
        cout<<setw(10)<<left<<type<<setw(10)<<left<<"Weight:"<<setw(4)<<left<<weight;
        cout<<setw(10)<<left<<"Price:"<<setw(8)<<setprecision(2)<<fixed<<left<<price;
        cout<<setw(12)<<left<<"WaterType:"<<setw(8)<<left<<watertype<<endl;
    }
};

#endif	/* FISH_H */

