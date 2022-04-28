// 2014-2019, ETH Zurich, Integrated Systems Laboratory
// Authors: Christian Stieger

#include "testTools.h"
#include "test_tItr_all.cc"
#include "test_tItr_all.h"

// test id
template <> const char *test_tItr_all<CPX__>::test_id() noexcept {
  return "test_cItr_all";
}

// instantiation
template class test_tItr_all<CPX__>;
