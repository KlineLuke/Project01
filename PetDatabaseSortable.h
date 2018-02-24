/* 
 * File:   PetDatabaseSortable.h
 * Author: opperm27/klineluk
 *
 * Created on February 21, 2018, 10:59 AM
 */

#ifndef PETDATABASESORTABLE_H
#define	PETDATABASESORTABLE_H


#include <vector>
#include <iostream>
#include "Pet.h"

using namespace std;

class PetDatabaseSortable {
protected:
    vector <Pet*> m_PetVector;
public:  
    PetDatabaseSortable() {} // default constructor
    // constructor
    PetDatabaseSortable( vector<Pet*> pets ): m_PetVector(pets) {}
    
    virtual unsigned int getSize() const 
    {
        return m_PetVector.size();
    }
    
    // virtual function for all the sortables
    virtual bool smaller(int i, int j) const = 0;
    
    // swaps pets at position i and j
    virtual void swap(int i, int j)
    {
        Pet* temp = m_PetVector[i];
        m_PetVector[i]=m_PetVector[j];
        m_PetVector[j]=temp;
    }
    
    // prints out all of the pets in the vector
    virtual void DisplayRecords() const 
    {
        for(int i=0; i<m_PetVector.size(); i++)
            m_PetVector[i]->print();
    }
    
    virtual Pet* getPet(int i) const
    {
        return m_PetVector[i];
    }
    
    void insert(Pet* element) 
    {
        m_PetVector.push_back(element);
    }
    
    vector<Pet*> getVector() const
    {
        return m_PetVector;
    }
};

#endif	/* PETDATABASESORTABLE_H */

