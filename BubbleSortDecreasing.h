/* 
 * File:   BubbleSortDecreasing.h
 * Author: klineluk
 *
 * Created on February 21, 2018, 11:20 AM
 */

#ifndef BUBBLESORTDECREASING_H
#define	BUBBLESORTDECREASING_H

#include "BubbleSort.h"

class BubbleSortDecreasing: public BubbleSort{
public:
    virtual bool needSwap(PetDatabaseSortable* sortableVector, int i, int j) const{
        if(sortableVector->smaller(i,j)){
            return true;
        }
        return false;
    }
};

#endif	/* BUBBLESORTDECREASING_H */

