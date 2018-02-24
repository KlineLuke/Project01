/* 
 * File:   PetDatabaseSearchableByName.h
 * Author: opperm27
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
        vector<Pet*> m_PetVector;
        string query;
    public:
        PetDatabaseSearchableByName( PetDatabaseSortableByName* pets) : PetDatabaseSearchable(pets) {}
        virtual int CompareAt(int i) const {
            if(getPet(i)->getName() == query)
                return 0;
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

