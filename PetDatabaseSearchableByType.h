/* 
 * File:   PetDatabaseSearchableByType.h
 * Author: opperm27/klineluk
 *
 * Created on February 24, 2018, 1:21 PM
 */

#ifndef PETDATABASESEARCHABLEBYTYPE_H
#define	PETDATABASESEARCHABLEBYTYPE_H

#include <vector>
#include <iostream>
#include "Pet.h"
#include "PetDatabaseSortableByType.h"
#include "PetDatabaseSearchable.h"

class PetDatabaseSearchableByType: public PetDatabaseSearchable {
    protected:
        string query;
    public:
        PetDatabaseSearchableByType( PetDatabaseSortableByType* pets) : PetDatabaseSearchable(pets->getVector()) {}
        virtual int CompareAt(int i) const 
        {
            if(getPet(i)->getType() == query)
                return 0; // query found
            else if(getPet(i)->getType() > query)
                return 1;
            else if(getPet(i)->getType() < query)
                return 2;
        }
        
        void setQuery(string i)
        {
            query = i;
        }
};

#endif	/* PETDATABASESEARCHABLEBYTYPE_H */
