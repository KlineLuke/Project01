/* 
 * File:   BubbleSort.h
 * Author: klineluk
 *
 * Created on February 21, 2018, 11:21 AM
 */

#ifndef BUBBLESORT_H
#define	BUBBLESORT_H

#include "PetDatabaseSortable.h"

class BubbleSort{
public:
    virtual bool needSwap(PetDatabaseSortable* sortableVector, int i, int j) const = 0;
    
    void sort(PetDatabaseSortable* sortableVector){
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

