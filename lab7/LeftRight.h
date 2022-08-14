#ifndef LEFTRIGHT_H_INCLUDED
#define LEFTRIGHT_H_INCLUDED

#include "Person.h"

class SSNComparator {
    public :
        bool operator()( const Person& p, const Person& q) const  {
            return p.getSSN() < q.getSSN();
        }
} ;

#endif // LEFTRIGHT_H_INCLUDED
