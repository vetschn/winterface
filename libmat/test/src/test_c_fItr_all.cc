// 2014-2019, ETH Zurich, Integrated Systems Laboratory
// Authors: Christian Stieger

#include "testTools.h"
#include "test_c_tItr_all.cc"
#include "test_c_tItr_all.h"

// test id
template <> const char *test_c_tItr_all<RE__>::test_id() noexcept {
  return "test_c_fItr_all";
}

// instantiation
template class test_c_tItr_all<RE__>;
