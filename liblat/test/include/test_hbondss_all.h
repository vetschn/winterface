// 2014-2019, ETH Zurich, Integrated Systems Laboratory
// Authors: Christian Stieger

#ifndef _TEST_HBONDSS_ALL_
#define _TEST_HBONDSS_ALL_

#include <cppunit/extensions/HelperMacros.h>

#include "ll_cell.h"

class test_hbondss_all : public CppUnit::TestFixture {
 public:
  void test_ctor_exceptions();
  void test_all();

  static CppUnit::Test* suite();
  static const char* test_id() noexcept;
};

#endif  // _TEST_HBONDSS_ALL_
