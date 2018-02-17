/* 
 * File:   BubbleSortIncreasing.h
 * Author: klineluk
 *
 * Created on February 12, 2018, 4:05 PM
 */
/* JUST COPIED THIS FROM OTHER HWK AS A PLACEHOLDER FOR NOW*/
#ifndef BUBBLESORTINCREASING_H
#define	BUBBLESORTINCREASING_H

#include "BubbleSort.h"

class BubbleSortIncreasing: public BubbleSort{
public:
    virtual bool needSwap(SortableVector* sortableVector, int i, int j) const{
        if(!sortableVector->smaller(i,j)){
            return true;
        }
        return false;
    }
};



#endif	/* BUBBLESORTINCREASING_H */

