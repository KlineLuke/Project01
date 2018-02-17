/* 
 * File:   BinarySearch.h
 * Author: klineluk
 *
 * Created on February 8, 2018, 2:31 PM
 */

/* JUST COPIED THIS FROM OTHER HWK AS A PLACEHOLDER FOR NOW*/
#ifndef BINARYSEARCH_H
#define	BINARYSEARCH_H

#include "SearchableVector.h"

class BinarySearch {
public:
    int search(SearchableVector* vec) {
        int left = 0;
        int right = vec->getSize();
        
        while (left <= right) {
            int middle = (left + right) / 2;
            if(vec->CompareAt(middle) == 0)
                return middle;
            else if (vec->CompareAt(middle) == 1)
                right = middle - 1;
            else
                left = middle + 1;
        }
        return -1;
    }

}; 


#endif	/* BINARYSEARCH_H */