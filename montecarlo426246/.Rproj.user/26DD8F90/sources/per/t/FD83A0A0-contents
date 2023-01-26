#include<Rcpp.h>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"EuropeanOption.h"
#include"getOneGaussianByBoxMueller.h"

using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
double getDownAndOutCall(double S_      = 95,
                         double K_      = 100,
                         double r_      = 0.07,
                         double sigma_  = 0.24,
                         double L_      = 80,
                         double t_      = 0.75,
                         int NumberOfPaths_ = 1000){

  EuropeanOption europeanOption(S_, K_, r_, sigma_, L_, t_, NumberOfPaths_);

  double result =  europeanOption.getDownAndOutCall();

  return result;
}
