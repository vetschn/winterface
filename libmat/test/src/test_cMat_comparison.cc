// 2014-2019, ETH Zurich, Integrated Systems Laboratory
// Authors: Christian Stieger

#include "testTools.h"
#include "test_tMat_comparison.cc"
#include "test_tMat_comparison.h"

// test id
template <>
const char* test_tMat_comparison<CPX__, RE__, CPX__>::test_id() noexcept {
  return "test_cMat_comparison";
}

// instantiation
template class test_tMat_comparison<CPX__, RE__, CPX__>;
