/* 
 * File:   PetDatabaseSearchableByName.h
 * Author: opperm27/klineluk
 *
 * Created on February 24, 2018, 8:41 AM
 */

#ifndef PETDATABASESEARCHABLEBYNAME_H
#define	PETDATABASESEARCHABLEBYNAME_H

#include <vector>
#include <iostream>
#include "Pet.h"
#include "PetDatabaseSortableByName.h"
#include "PetDatabaseSearchable.h"

class PetDatabaseSearchableByName: public PetDatabaseSearchable {
    protected:
        string query;
    public:
        // constructor
        PetDatabaseSearchableByName( PetDatabaseSortableByName* pets) : PetDatabaseSearchable(pets->getVector()) {}
        virtual int CompareAt(int i) const 
        {
            if(getPet(i)->getName() == query)
                return 0;   // query found
            else if(getPet(i)->getName() > query)
                return 1;
            else if(getPet(i)->getName() < query)
                return 2;
        }
        
        void setQuery(string i)
        {
            query = i;
        }
};

#endif	/* PETDATABASESEARCHABLEBYNAME_H */
