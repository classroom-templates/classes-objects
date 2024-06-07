/*
 * replace with your comment header
 * make sure to do all your commenting here and below correctly
 * erase all instructional comments before submitting
 */

#ifndef MYLIST_H
#define MYLIST_H

#include <iostream>     /* cout, endl */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
// Instructional Comments: 
// you can add libraries here if you need them, but you shouldn't need more
// erase these two lines when you are read to submit


#define RMIN 1
#define RMAX 10

class MyList {
public:
    
    
    MyList(int);
    ~MyList();

    /*
     * Instructional Comment: 
     * TODO write your getter prototypes here
     * and erase this comment
     */

    /*
     * Instructional Comment: 
     * TODO write your setter prototypes here
     * and erase this comment
     */

    /*
     * Instructional Comment: 
     * TODO write your display methods here
     * and erase this comment
     */
     
private:
    //Instructional Comments: 
    // these are the only attributes allowed
    // DO NOT ADD OR MODIFY THEM
    int length;
    int *array;
};

#endif //MYLIST_H
