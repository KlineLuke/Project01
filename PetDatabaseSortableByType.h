/* 
 * File:   PetDatabaseSortableByType.h
 * Author: opperm27/klineluk
 *
 * Created on February 23, 2018, 12:01 AM
 */

#ifndef PETDATABASESORTABLEBYTYPE_H
#define	PETDATABASESORTABLEBYTYPE_H

#include <vector>
#include <iostream>
#include "Pet.h"
#include "PetDatabaseSortable.h"

class PetDatabaseSortableByType: public PetDatabaseSortable
{
    protected:
        vector<Pet*> m_PetVector;
    public:
        PetDatabaseSortableByType( vector<Pet*> pets) : PetDatabaseSortable(pets) {}
        virtual bool smaller(int i, int j) const 
        {
            if(getPet(i)->getType() < getPet(j)->getType())
                return true; // true if pet i's type < pet j's type
            else
                return false;
        }
};

#endif	/* PETDATABASESORTABLEBYTYPE_H */
