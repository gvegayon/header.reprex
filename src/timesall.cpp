#include <Rcpp.h>
#include "timestwo.h"
// finds timesTwo
#include "timesthree.h"
// doesn't find timesThree
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector timesAll(NumericVector x) {
  // timesThree is not declared so won't compile
  return timesTwo(x) * timesThree(x);
}
