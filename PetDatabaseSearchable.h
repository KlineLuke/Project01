/* 
 * File:   PetDatabasesearchable.h
 * Author: opperm27/klineluk
 *
 * Created on February 24, 2018, 6:43 AM
 */

#ifndef PETDATABASESEARCHABLE_H
#define	PETDATABASESEARCHABLE_H

#include <vector>
#include <iostream>
#include "Pet.h"

using namespace std;

class PetDatabaseSearchable
{
protected:
    vector<Pet*> m_PetVector;
public:
    PetDatabaseSearchable() {}  // default constructor
    // constructor
    PetDatabaseSearchable( vector<Pet*> pets ): m_PetVector(pets) {}
    
    virtual unsigned int getSize() const
    {
        return m_PetVector.size();
    }
    
    // virtual function for all of the searchables
    virtual int CompareAt(int i) const = 0;
    
    Pet* getPet(int i) const
    {
        return m_PetVector[i];
    }
};

#endif	/* PETDATABASESEARCHABLE_H */
