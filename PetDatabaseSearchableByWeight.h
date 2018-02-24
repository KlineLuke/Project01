/* 
 * File:   PetDatabaseSearchableByPrice.h
 * Author: opperm27/klineluk
 *
 * Created on February 24, 2018, 1:33 PM
 */

#ifndef PETDATABASESEARCHABLEBYPRICE_H
#define	PETDATABASESEARCHABLEBYPRICE_H

#include <vector>
#include <iostream>
#include "Pet.h"
#include "PetDatabaseSortableByPrice.h"
#include "PetDatabaseSearchable.h"

class PetDatabaseSearchableByPrice: public PetDatabaseSearchable {
    protected:
        vector<Pet*> m_PetVector;
        double query;
    public:
        // constructor 
        PetDatabaseSearchableByPrice( PetDatabaseSortableByPrice* pets) : PetDatabaseSearchable(pets->getVector()) {}
        virtual int CompareAt(int i) const 
        {
            if(getPet(i)->getPrice() == query)
                return 0;   // query found
            else if(getPet(i)->getPrice() > query)
                return 1;
            else if(getPet(i)->getPrice() < query)
                return 2;
        }
        
        void setQuery(double i)
        {
            query = i;
        }
};

#endif	/* PETDATABASESEARCHABLEBYPRICE_H */
