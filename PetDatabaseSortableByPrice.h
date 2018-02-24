/* 
 * File:   PetDatabaseSortableByPrice.h
 * Author: opperm27
 *
 * Created on February 23, 2018, 7:19 AM
 */

#ifndef PETDATABASESORTABLEBYPRICE_H
#define	PETDATABASESORTABLEBYPRICE_H

#include <vector>
#include <iostream>
#include "Pet.h"
#include "PetDatabaseSortable.h"

class PetDatabaseSortableByPrice: public PetDatabaseSortable
{
    protected:
        vector<Pet*> m_PetVector;
        string query;
    public:
        PetDatabaseSortableByPrice( vector<Pet*> pets) : PetDatabaseSortable(pets) {}
        virtual bool smaller(int i, int j) const {
            if(getPet(i)->getPrice() < getPet(j)->getPrice())
                return true;
            else
                return false;
        }
};

#endif	/* PETDATABASESORTABLEBYPRICE_H */

