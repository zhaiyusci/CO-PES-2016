#include"ELJ.h"
#include<iostream>

int main(){
  const int n_[2]{5,6};
  const double C_n_[2]{113112.0,124822.0};
  const double rho_[16]{ 2.592554289154 ,1.1609997201 ,5.2412372427e-1
,3.6614162513e-1 ,3.6945808745e-1 ,7.221044786e-1 ,8.910983457e-1 ,1.226907435
,4.055633480e-1 ,-2.248557034e1 ,4.22326463e1 ,1.12448063e2 ,-6.65662011e2
,1.2660188e3 ,-1.0950463e3 ,3.5004062e2 };
  ELJ copes(
      90674.0,//double D_e_,
      1.128322531930,//double r_e_,
      2,//int M_,
      n_,//int *n_,
      C_n_,//double *C_n_,
      8.0,//double delta_LR_,
      2.90,//double R_LR_,
      0.87,//double R_c_,
      16,//int N_,
      rho_,//double *rho_,
      15.0,//double delta_n_,
      2.55,//double R_n_,
      1.55292286,//double a_,
      0.46246693,//double b_,
      1//int type_
      );

  for(double r=0.01; r<=5.0; r+=0.001){
    std::cout << r<<"      "<<copes(r) <<std::endl;
  }
  return 0;
}

