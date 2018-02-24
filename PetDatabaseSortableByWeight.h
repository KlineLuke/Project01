/* 
 * File:   PetDatabaseSortableByWeight.h
 * Author: opperm27/klineluk
 *
 * Created on February 23, 2018, 7:23 AM
 */

#ifndef PETDATABASESORTABLEBYWEIGHT_H
#define	PETDATABASESORTABLEBYWEIGHT_H

#include <vector>
#include <iostream>
#include "Pet.h"
#include "PetDatabaseSortable.h"

class PetDatabaseSortableByWeight: public PetDatabaseSortable
{
    protected:
        vector<Pet*> m_PetVector;
    public:
        PetDatabaseSortableByWeight( vector<Pet*> pets) : PetDatabaseSortable(pets) {}
        virtual bool smaller(int i, int j) const 
        {
            if(getPet(i)->getWeight() < getPet(j)->getWeight())
                return true; // true if pet i's weight < pet j's weight
            else
                return false;
        }
};

#endif	/* PETDATABASESORTABLEBYWEIGHT_H */
