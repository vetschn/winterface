// 2014-2019, ETH Zurich, Integrated Systems Laboratory
// Authors: Christian Stieger

#ifndef _TEST_TMAT_COMPARISON_
#define _TEST_TMAT_COMPARISON_

#include <cppunit/extensions/HelperMacros.h>

#include "lm_tMat.h"

template <class TT, class FT, class CT>
class test_tMat_comparison : public CppUnit::TestFixture {
public:
  // types
  typedef lm_tMat<FT, FT, CT> fMat;
  typedef lm_tMat<CT, FT, CT> cMat;
  typedef lm_tMat<TT, FT, CT> tMat;

  // tests
  void test_msize_function();
  void test_operator_equal_unequal_();
  void test_eq_neq_leq_();

  // delta
#ifdef DOUBLE__
  static constexpr FT delta = 1e-10;
#endif
#ifdef SINGLE__
  static constexpr FT delta = 1e-5f;
#endif

protected:
  static const char *test_id() noexcept;

public:
  static CppUnit::Test *suite();
};

#endif // _TEST_TMAT_COMPARISON_
