#include <iostream>

#include "./../../primes/factorizer.h"

int main()
{
    doctor_doom::numbers::primes::Factorizer f;
    std::cout << "Largest prime factor of 105: " << f.GetLargestPrimeFactor(105) << std::endl;
    std::cout << "Largest prime factor of 13195: " << f.GetLargestPrimeFactor(13195) << std::endl;
    std::cout << "Largest prime factor of 600851475143: " << f.GetLargestPrimeFactor(600851475143) << std::endl;
}
