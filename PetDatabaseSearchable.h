/* 
 * File:   PetDatabaseSearchable.h
 * Author: klineluk
 *
 * Created on February 21, 2018, 11:06 AM
 */

#ifndef PETDATABASESEARCHABLE_H
#define	PETDATABASESEARCHABLE_H

#include <vector>
#include <iostream>
#include "Pet.h"

using namespace std;

class PetDatabaseSearchable: public Pet {
protected:
    vector <Pet> m_PetVector;
public:    
    virtual unsigned int getSize() const {
        return m_PetVector.size();
    }
        
    virtual int CompareAt(int i) const{
        if (m_PetVector.at(i) == getQuery())
            return 0;   // found query
        else if (m_PetVector.at(i) > getQuery())
            return 1;   // number at index i > query
        return -1;      // number at index i < query
    }
    
    virtual void swap(int i, int j){
        Pet temp = m_PetVector.at(i);
        m_PetVector.at(i)=m_PetVector.at(j);
        m_PetVector.at(j)=temp;
    }
    
    virtual void DisplayRecords() const {
        for(int i=0; i<getSize(); i++)
            m_PetVector.at(i).print();
    }
    
    Pet getPet(int i) const{
        return m_PetVector.at(i);
    }
    
    void insert(Pet* element) {
        m_PetVector.push_back(element);
    }
    virtual Pet getQuery() = 0;
};


#endif	/* PETDATABASESEARCHABLE_H */

