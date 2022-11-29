/*
    Author : Easter Maxwell
    Date : 27th November, 2022
*/

/*
    [
     sieve of Erastothenes works by deleting the multiples
     of each primes(starting with 2), within a given range,
     and displaying the left-overs (in this case the primes)
    ]
*/

#include <iostream>

using namespace std;

/*size of the sieve*/
#define ARRAY_SIZE 700

/*status of an index*/
#define DELETED      0 

int sieve[ARRAY_SIZE];

void fill_sieve()
{
    int index;

    for (index = 0; index < ARRAY_SIZE; index++)
    {
        sieve[index] = 1;
    }
}

int delete_multiples(int prime)
{
    int index;
    int multiplier = 2;

    /*if the index is the multiple of a prime , delete it!*/
    for (index = prime * multiplier; index < ARRAY_SIZE; index = prime * multiplier++)
    {
        sieve[index] = DELETED;
    }

    return -1;
}

void delete_non_primes()
{
    int index;

    for (index = 2; index < ARRAY_SIZE; index++)
    {
        if (sieve[index] != DELETED)
        {
            delete_multiples(index);
        }
    }
}

void display_all_primes()
{
    int index;

    for (index = 2; index < ARRAY_SIZE; index++)
    {
        if (sieve[index] != DELETED)
        {
           
            cout << index << "   ";
        }

    }
}

int main()
{
    /*get the title to the mid screen*/
    cout << "\n\t\t\t\t\t\t\t\t";
    
    cout << "--- Results of Sieve of Erastothenes ---";
    cout << "\n\n";

    /*compulsory steps*/
    fill_sieve();
    delete_non_primes();
    display_all_primes();

    return -1;

}
