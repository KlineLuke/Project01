/* 
 * File:   PetDatabaseSortable.h
 * Author: klineluk
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
    PetDatabaseSortable() {}
    PetDatabaseSortable( vector<Pet*> pets ): m_PetVector(pets) {}
    
    virtual unsigned int getSize() const {
        return m_PetVector.size();
    }
    
    virtual bool smaller(int i, int j) const = 0;
    
    virtual void swap(int i, int j){
        Pet* temp = m_PetVector[i];
        m_PetVector[i]=m_PetVector[j];
        m_PetVector[j]=temp;
    }
    
    virtual void DisplayRecords() const {
        for(int i=0; i<m_PetVector.size(); i++)
            m_PetVector[i]->print();
    }
    
    Pet* getPet(int i) const{
        return m_PetVector[i];
    }
    
    void insert(Pet* element) {
        m_PetVector.push_back(element);
    }
    
    vector<Pet*> getVector() const
    {
        return m_PetVector;
    }
};


#endif	/* PETDATABASESORTABLE_H */

