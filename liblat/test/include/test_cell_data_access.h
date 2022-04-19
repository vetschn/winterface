// 2014-2019, ETH Zurich, Integrated Systems Laboratory
// Authors: Christian Stieger

#ifndef _TEST_CELL_DATA_ACCESS_
#define _TEST_CELL_DATA_ACCESS_

#include <cppunit/extensions/HelperMacros.h>

#include "ll_cell.h"

class test_cell_data_access : public CppUnit::TestFixture {
 public:
  void test_B_Ap();
  void test_cAt_cFront_cBack();

  static CppUnit::Test* suite();
  static const char* test_id() noexcept;
};

#endif  // _TEST_CELL_DATA_ACCESS_
