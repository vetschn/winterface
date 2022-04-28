// 2014-2019, ETH Zurich, Integrated Systems Laboratory
// Authors: Christian Stieger

#ifndef _TEST_FN_BASIS_FINDING_
#define _TEST_FN_BASIS_FINDING_

#include <cppunit/extensions/HelperMacros.h>

#include "ll_types.h"

class test_fn_basis_finding : public CppUnit::TestFixture {
public:
  void test_findBasis();
  void test_orthogonalize();

  static CppUnit::Test *suite();
  static const char *test_id() noexcept;
};

#endif // _TEST_FN_BASIS_FINDING_
