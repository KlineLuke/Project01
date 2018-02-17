/* 
 * File:   BubbleSortDecreasing.h
 * Author: klineluk
 *
 * Created on February 12, 2018, 4:05 PM
 */
/* JUST COPIED THIS FROM OTHER HWK AS A PLACEHOLDER FOR NOW*/
#ifndef BUBBLESORTDECREASING_H
#define	BUBBLESORTDECREASING_H

#include "BubbleSort.h"

class BubbleSortDecreasing: public BubbleSort{
public:
    virtual bool needSwap(SortableVector* sortableVector, int i, int j) const{
        if(sortableVector->smaller(i,j)){
            return true;
        }
        return false;
    }
};

#endif	/* BUBBLESORTDECREASING_H */

