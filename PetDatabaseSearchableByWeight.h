/* 
 * File:   PetDatabaseSearchableByWeight.h
 * Author: opperm27/klineluk
 *
 * Created on February 24, 2018, 1:38 PM
 */

#ifndef PETDATABASESEARCHABLEBYWEIGHT_H
#define	PETDATABASESEARCHABLEBYWEIGHT_H

#include <vector>
#include <iostream>
#include "Pet.h"
#include "PetDatabaseSortableByWeight.h"
#include "PetDatabaseSearchable.h"

class PetDatabaseSearchableByWeight: public PetDatabaseSearchable {
    protected:
        vector<Pet*> m_PetVector;
        unsigned int query;
    public:
        PetDatabaseSearchableByWeight( PetDatabaseSortableByWeight* pets) : PetDatabaseSearchable(pets->getVector()) {}
        virtual int CompareAt(int i) const 
        {
            if(getPet(i)->getWeight() == query)
                return 0;   // query found
            else if(getPet(i)->getWeight() > query)
                return 1;
            else if(getPet(i)->getWeight() < query)
                return 2;
        }
        
        void setQuery(unsigned int i)
        {
            query = i;
        }
};

#endif	/* PETDATABASESEARCHABLEBYWEIGHT_H */
