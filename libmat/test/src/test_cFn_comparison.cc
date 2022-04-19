// 2014-2019, ETH Zurich, Integrated Systems Laboratory
// Authors: Christian Stieger

#include "testTools.h"
#include "test_tFn_comparison.cc"
#include "test_tFn_comparison.h"

// test id
template <>
const char* test_tFn_comparison<CPX__, RE__, CPX__>::test_id() noexcept {
  return "test_cFn_comparison";
}

// instantiation
template class test_tFn_comparison<CPX__, RE__, CPX__>;
