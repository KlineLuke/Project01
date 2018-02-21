/* 
 * File:   PetDatabaseSearchableByName.h
 * Author: klineluk
 *
 * Created on February 21, 2018, 11:08 AM
 */

#ifndef PETDATABASESEARCHABLEBYNAME_H
#define	PETDATABASESEARCHABLEBYNAME_H

#include <vector>
#include <iostream>
#include "PetDatabaseSearchable.h"

class PetDatabaseSearchableByName: public PetDatabaseSearchable {
    public:
        virtual Pet getQuery() {
            return m_PetVector.at(0);
        
        
        }

};


#endif	/* PETDATABASESEARCHABLEBYNAME_H */

