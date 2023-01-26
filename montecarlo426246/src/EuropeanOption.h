#include<vector>

class EuropeanOption{

public:
  //constructor
  // S_: the initial stock price S_0
  // K_: strike price
  // sigma_: annualized volatility rate
  // r_: annualized risk-free rate
  // t_: time to maturity
  // L: barrier level
  EuropeanOption(double S_,
                 double K_,
                 double r_,
                 double sigma_,
                 double L_,
                 double t_,
                 int NumberOfPaths_
  );

  double getDownAndOutCall();

  //members
  double S;
  double K;
  double r;
  double sigma;
  double L;
  double t;
  int NumberOfPaths;

};
