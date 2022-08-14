#ifndef AGECOMPARATOR_H_INCLUDED
#define AGECOMPARATOR_H_INCLUDED

class AgeComparator {
    public :
        bool operator()( const Person& p, const Person& q) const  {
            return p.getAge() < q.getAge();
        }
} ;

#endif // AGECOMPARATOR_H_INCLUDED
