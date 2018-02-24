/* 
 * File:   BinarySearch.h
 * Author: klineluk
 *
 * Created on February 17, 2018, 12:14 PM
 */

#ifndef BINARYSEARCH_H
#define	BINARYSEARCH_H

//#include "PetDatabaseSortable.h"
#include "PetDatabaseSearchable.h"

class BinarySearch {
public:
    int search(PetDatabaseSearchable* vec) {
        int left = 0;
        int right = vec->getSize();

        while (left <= right) 
        {
            int middle = (left + right) / 2;
            
            if(vec->CompareAt(middle) == 0)
                return middle;      // search succeeded
            else if (vec->CompareAt(middle) == 1)
                right = middle - 1;
            else
                left = middle + 1;
        }
        return -1;                  // search failed
    }

}; 


#endif	/* BINARYSEARCH_H */

