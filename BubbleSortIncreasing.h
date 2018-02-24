/* 
 * File:   BubbleSortIncreasing.h
 * Author: opperm27/klineluk
 *
 * Created on February 21, 2018, 11:20 AM
 */

#ifndef BUBBLESORTINCREASING_H
#define	BUBBLESORTINCREASING_H

#include "BubbleSort.h"

class BubbleSortIncreasing: public BubbleSort{
public:
    virtual bool needSwap(PetDatabaseSortable* sortableVector, int i, int j) const{
        if(sortableVector->smaller(i,j))
        {
            return true;    // if pet i is smaller than pet j
        }
        return false;
    }
};


#endif	/* BUBBLESORTINCREASING_H */

