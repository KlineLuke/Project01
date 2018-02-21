/* 
 * File:   PetDatabaseSortableByName.h
 * Author: klineluk
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
        PetDatabaseSortableByName( vector<Pet*> pets ): m_PetVector(pets) {}
        virtual bool smaller(int i, int j) const {
        if(getPet(i)->getName() < getPet(j)->getName())
            return true;
        else
            return false;
        }
        virtual void DisplayRecords() const {
            for(int i=0; i<m_PetVector.size(); i++)
                m_PetVector[i]->print();
    }
  
};


#endif	/* PETDATABASESORTABLEBYNAME_H */

