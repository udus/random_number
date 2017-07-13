#include <iostream>

using namespace std;

//! made by udus
//! global
const long long int betha = 1299709;
const long long int alpha = 7368787;
long long int interval_high_boundary;
int counter = 0;

long long int recursiveRandom(long long int &a);


int main()
{
    //!these numbers are primes
    long long int INPUT_SEED;
    long long int OUTPUT;


    cout << "Udvozol az elso veletlen szam generatorom!" << endl << "Kerkel add milyen hogy 1..n kozott szeretnel egy erteket!" << endl;
    cin >> interval_high_boundary;
    cout << "A veletlen szamot az [1.." << interval_high_boundary << "] intervallumbol fogod kapni" << endl << endl << "Kerlek most adj meg egy tetszoleges szamot!" << endl;
    cin >> INPUT_SEED;

    OUTPUT = recursiveRandom(INPUT_SEED);
    cout << OUTPUT;
    return 0;
}


long long int recursiveRandom(long long int &a)
{
    if (counter < 500)
    {
        ++counter;
        a = ((a*alpha)+betha)%interval_high_boundary;
        return recursiveRandom(a);
    }else
    {
        return a;
    }
}
