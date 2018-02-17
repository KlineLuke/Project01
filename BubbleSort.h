/* 
 * File:   BubbleSort.h
 * Author: klineluk
 *
 * Created on February 12, 2018, 4:17 PM
 */
/* JUST COPIED THIS FROM OTHER HWK AS A PLACEHOLDER FOR NOW*/
#ifndef BUBBLESORT_H
#define	BUBBLESORT_H

#include "SortableVector.h"

class BubbleSort{
public:
    virtual bool needSwap(SortableVector* sortableVector, int i, int j) const = 0;
    
    void sort(SortableVector* sortableVector){
        bool sorted = false;
        int n=sortableVector->getSize();
        while( !sorted ){
            sorted = true;
            for(int i=1; i<n; i++){
                if(needSwap(sortableVector, i-1, i)){
                    sortableVector->swap(i-1,i);
                    sorted = false;
                }
            }
            n--;
        }
    }
};

#endif	/* BUBBLESORT_H */

