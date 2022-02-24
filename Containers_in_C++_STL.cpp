/*
Containers(objects which stores data) in C++ STL
1>> Sequence Container -> it stores data in linear fashion.(8-9-11-.....)(eg: Vector, list, Dequeue(Double ended queue))

2>> Associative Container -> it is use to design to access data faster(in searching, fast delicience, fast access). it's direct Access(eg: set,multi-set, map, multi-map). it keeps data in tree manner

3>> Derived Container -> it's being derived from either of Sequence container or Associative container . it can perform real world modeling.(eg: stack, queue, priority-queue)


        ----------------- When to use which ?? ------------------
    
    >> Sequence Container -> Vector -> Random Access fast
                                    - Middle Insertion |De| -> Slow
                                    - bt Insertion |Del| at the end -> Fast
                          -> List -> Random Access Slow
                                    - Middle Insertion |Del| -> Fast
                                    - Insertion at the end |Del| -> Fast

    >> Associative Container -> All operation fast except Random Access

    >> Derived Container -> Depends

*/

#include<iostream>
using namespace std;



int main(){

    return 0;
}