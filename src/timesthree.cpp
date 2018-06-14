#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector timesThree(NumericVector x) {
  return x * 3;
}
