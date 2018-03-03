/**
 * Copyright (c) 2018, Vardan Grigoryan (vardanator)
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifndef DOCTOR_DOOM_NUMBERS_PRIMES_FACTORIZATION_BRUTE_FORCE_H
#define DOCTOR_DOOM_NUMBERS_PRIMES_FACTORIZATION_BRUTE_FORCE_H

#include <iostream>

namespace doctor_doom {
namespace numbers {
namespace primes {

class Factorizer
{
public:
    long GetLargestPrimeFactor(long num)
    {
        long recent_largest = 1;
        // brute force tests
        int ix;
        for (ix = 2; ix <= num; ++ix) {
            if (num % ix == 0) {
                recent_largest = ix;
                num /= ix;
            }
        }
        return recent_largest;
    }
};

}}} // namepsace doctor_doom::numbers::primes

#endif // DOCTOR_DOOM_NUMBERS_PRIMES_FACTORIZATION_BRUTE_FORCE_H
