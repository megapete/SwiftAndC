//
//  Cfunctions.c
//  SwiftAndC
//
//  Created by Peter Huber on 2021-03-15.
//

#include "Cfunctions.h"

double PCH_Pow(double base, int exp)
{
    int incrementValue = (exp > 0 ? -1 : 1);
    
    double result = 1.0;
    
    for (int i = exp; i != 0; i += incrementValue) {
        
        result *= base;
    }
    
    return result;
}
