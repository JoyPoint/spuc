#pragma once
// Copyright (c) 2015 Tony Kirke. License MIT  (http://www.opensource.org/licenses/mit-license.php)
// from directory: spuc_traits
#include <spuc/spuc_types.h>
namespace SPUC {
//! This file is automatically generated.......
//! \file
//! \brief Determine resultant type when mixing two types in math operations
//
//! \brief Determine resultant type when mixing two types in math operations
//! \author Tony Kirke,  Copyright(c) 2005
//! \author Tony Kirke
//! \ingroup traits traits
//
// This template is used to look at two types used together
// in some mathematical expression
// and then figure out the correct type for the result of
// the math expression
// For example (addition)
// input types                       Result type
// double + double                   = double
// double + long                     = double
// double + complex<double>          = complex<double>
// double + complex<long>            = complex<double>
// long   + long                     = long
// long   + complex<double>          = complex<double>
// long   + complex<long>            = complex<long>
// complex<double> + complex<double> = complex<double>
// complex<double> + complex<long>   = complex<double>
// complex<long>   + complex<long>   = complex<long>
template <typename T, typename D = double> class mixed_type {
 public:
  typedef double dtype;
};
#define MIXED_MACRO(T1, T2, RESULT)      \
  template <> class mixed_type<T1, T2> { \
   public:                               \
    typedef RESULT dtype;                \
  };
#define DMIXED_MACRO(T1, T2, RESULT)     \
  template <> class mixed_type<T1, T2> { \
   public:                               \
    typedef RESULT dtype;                \
  };                                     \
  template <> class mixed_type<T2, T1> { \
   public:                               \
    typedef RESULT dtype;                \
  };
//----------------------------------------------------------
MIXED_MACRO(long, long, long)
DMIXED_MACRO(long, int, long)
DMIXED_MACRO(long, double, double)
DMIXED_MACRO(long, float, float)
MIXED_MACRO(int, int, int)
DMIXED_MACRO(int, double, double)
DMIXED_MACRO(int, float, float)
MIXED_MACRO(double, double, double)
DMIXED_MACRO(double, float, double)
MIXED_MACRO(float, float, float)
MIXED_MACRO(complex<long>, complex<long>, complex<long>)
DMIXED_MACRO(complex<long>, complex<int>, complex<long>)
DMIXED_MACRO(complex<long>, complex<double>, complex<double>)
DMIXED_MACRO(complex<long>, complex<float>, complex<float>)
MIXED_MACRO(complex<int>, complex<int>, complex<int>)
DMIXED_MACRO(complex<int>, complex<double>, complex<double>)
DMIXED_MACRO(complex<int>, complex<float>, complex<float>)
MIXED_MACRO(complex<double>, complex<double>, complex<double>)
DMIXED_MACRO(complex<double>, complex<float>, complex<double>)
MIXED_MACRO(complex<float>, complex<float>, complex<float>)
DMIXED_MACRO(complex<long>, long, complex<long>)
DMIXED_MACRO(complex<long>, int, complex<long>)
DMIXED_MACRO(complex<long>, double, complex<double>)
DMIXED_MACRO(complex<long>, float, complex<float>)
DMIXED_MACRO(complex<int>, long, complex<long>)
DMIXED_MACRO(complex<int>, int, complex<int>)
DMIXED_MACRO(complex<int>, double, complex<double>)
DMIXED_MACRO(complex<int>, float, complex<float>)
DMIXED_MACRO(complex<double>, long, complex<double>)
DMIXED_MACRO(complex<double>, int, complex<double>)
DMIXED_MACRO(complex<double>, double, complex<double>)
DMIXED_MACRO(complex<double>, float, complex<double>)
DMIXED_MACRO(complex<float>, long, complex<float>)
DMIXED_MACRO(complex<float>, int, complex<float>)
DMIXED_MACRO(complex<float>, double, complex<double>)
DMIXED_MACRO(complex<float>, float, complex<float>)

#undef DMIXED_MACRO
#undef MIXED_MACRO
}  // namespace SPUC
