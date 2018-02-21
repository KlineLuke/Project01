/* 
 * File:   BubbleSortIncreasing.h
 * Author: klineluk
 *
 * Created on February 21, 2018, 11:20 AM
 */

#ifndef BUBBLESORTINCREASING_H
#define	BUBBLESORTINCREASING_H

#include "BubbleSort.h"

class BubbleSortIncreasing: public BubbleSort{
public:
    virtual bool needSwap(PetDatabaseSortable* sortableVector, int i, int j) const{
        if(sortableVector->smaller(i,j)){
            return true;
        }
        return false;
    }
};


#endif	/* BUBBLESORTINCREASING_H */

