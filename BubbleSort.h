/* 
 * File:   BubbleSort.h
 * Author: opperm27/klineluk
 *
 * Created on February 21, 2018, 11:21 AM
 */

#ifndef BUBBLESORT_H
#define	BUBBLESORT_H

#include "PetDatabaseSortable.h"

class BubbleSort{
public:
    virtual bool needSwap(PetDatabaseSortable* sortableVector, int i, int j) const = 0;
    
    void sort(PetDatabaseSortable* sortableVector) const
    {
        bool sorted = false;
        int n=sortableVector->getSize();
        while( !sorted )
        {
            sorted = true;
            for(int i=1; i<n; i++)  // loop through vector n times
            {
                if(needSwap(sortableVector, i-1, i))    // check for swap
                {
                    sortableVector->swap(i-1,i);        // call swap
                    sorted = false;      // change to false, not finished sorting
                }
            }
            n--;
        }
    }
};


#endif	/* BUBBLESORT_H */

