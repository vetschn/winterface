// 2014-2019, ETH Zurich, Integrated Systems Laboratory
// Authors: Christian Stieger

#ifndef _TEST_TITR_ALL_
#define _TEST_TITR_ALL_

#include <cppunit/extensions/HelperMacros.h>

#include "lm_tItr.h"

template <class TT> class test_tItr_all : public CppUnit::TestFixture {
public:
  // types
  typedef lm_c_tItr<TT> c_tItr;
  typedef lm_tItr<TT> tItr;

  // tests
  void test_ctor_assign();
  void test_swap();
  void test_comparison();
  void test_dereference();
  void test_arithmetic_difference();

protected:
  static const char *test_id() noexcept;

public:
  static CppUnit::Test *suite();
};

#endif // _TEST_TITR_ALL_
