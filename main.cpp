//
//  main.cpp
//  Project
//
//  Created by Isabella Sun on 4/26/16.
//  Copyright © 2016 Isabella Sun. All rights reserved.
//

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>

#include "interface.h"

int main(int argc, char **argv) {
    double num_sims=1000;  // Number of simulated asset paths
    double S = 100;  // Option price
    double K = 100;  // Strike price
    double r = 0.1;   // Risk-free rate
    double q = 0;      //divident
    double v = 0.2;    // Volatility of the underlying
    double T = 1;    // Time until expiry
    double m = 50;
    double l=10;
    
    //cout << "Number of Trials:" << num_sims << endl;
    double call = control_monte_carlo_call_price(num_sims, S, K, r, q, v, T,m);
    //double qusi_call=Asian_call_qmc(num_sims/l, S, K, r, q, v, T,m,l);
    
    //std::cout<<qusi_call<<std::endl;
    return 0;
}
