// 2014-2019, ETH Zurich, Integrated Systems Laboratory
// Authors: Christian Stieger

#include "testTools.h"
#include "test_tFn_conversion.cc"
#include "test_tFn_conversion.h"

// test id
template <>
const char *test_tFn_conversion<RE__, RE__, CPX__>::test_id() noexcept {
  return "test_fFn_conversion";
}

// instantiation
template class test_tFn_conversion<RE__, RE__, CPX__>;
