#include<iostream>
#include<cmath>
#include"getOneGaussianByBoxMueller.h"
#include"EuropeanOption.h"


//definition of constructor
EuropeanOption::EuropeanOption(double S_,
                               double K_,
                               double r_,
                               double sigma_,
                               double L_,
                               double t_,
                               int NumberOfPaths_){
      S = S_;
      K = K_;
      r = r_;
      sigma = sigma_;
      L = L_;
      t = t_;
      NumberOfPaths = NumberOfPaths_;
}


double EuropeanOption::getDownAndOutCall(){
  double variance = sigma * sigma * S;
  double rootVariance = sqrt(variance);
  double itoCorrection = -0.5 * variance;
  double movedSpot = S * exp(r * t + itoCorrection);
  double thisSpot;
  double runningSum = 0;

  for (int i = 0; i < NumberOfPaths; i++) {
    double thisGaussian = getOneGaussianByBoxMueller();
    thisSpot = movedSpot * exp(rootVariance * thisGaussian);

    if (thisSpot <= L) {
        double thisPayoff = 0;
        runningSum+=thisPayoff;
    }else{
        double thisPayoff = thisSpot - K;
        runningSum+=thisPayoff>0?thisPayoff:0;
    }
  }


  double mean = runningSum / NumberOfPaths;
  mean = mean * exp(-r * t);
  return mean;
}
