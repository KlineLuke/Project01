/* 
 * File:   PetDatabaseSortableByName.h
 * Author: opperm27/klineluk
 *
 * Created on February 21, 2018, 11:00 AM
 */

#ifndef PETDATABASESORTABLEBYNAME_H
#define	PETDATABASESORTABLEBYNAME_H

#include <vector>
#include <iostream>
#include "Pet.h"
#include "PetDatabaseSortable.h"

class PetDatabaseSortableByName: public PetDatabaseSortable {
    protected:
        vector<Pet*> m_PetVector;
        string query;
    public:
        // constructor 
        PetDatabaseSortableByName( vector<Pet*> pets) : PetDatabaseSortable(pets) {}
        virtual bool smaller(int i, int j) const 
        {
            if(getPet(i)->getName() < getPet(j)->getName())
                return true;    // true if pet i's name < pet j's name
            else
                return false;
        }  
};


#endif	/* PETDATABASESORTABLEBYNAME_H */

