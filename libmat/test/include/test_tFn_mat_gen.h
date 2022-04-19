// 2014-2019, ETH Zurich, Integrated Systems Laboratory
// Authors: Christian Stieger

#ifndef _TEST_TFN_MAT_GEN_
#define _TEST_TFN_MAT_GEN_

#include <cppunit/extensions/HelperMacros.h>

#include "lm_tMat.h"

template <class TT, class FT, class CT>
class test_tFn_mat_gen : public CppUnit::TestFixture {
 public:
  // types
  typedef lm_tMat<FT, FT, CT> fMat;
  typedef lm_tMat<CT, FT, CT> cMat;
  typedef lm_tMat<TT, FT, CT> tMat;

  // tests
  void test_ones();
  void test_zeros();
  void test_eye();
  void test_rId_cId();
  void test_rand();
  void test_randi();
  void test_gsorth();
  void test_mcat();
  void test_ncat();

  // delta
#ifdef DOUBLE__
  static constexpr RE__ delta = 1e-6;
#endif
#ifdef SINGLE__
  static constexpr RE__ delta = 1e-3f;
#endif

 protected:
  static const char* test_id() noexcept;

 public:
  static CppUnit::Test* suite();
};

#endif  // _TEST_TFN_MAT_GEN_
