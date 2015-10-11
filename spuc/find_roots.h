#pragma once
// Copyright (c) 2015 Tony Kirke. License MIT  (http://www.opensource.org/licenses/mit-license.php)
// from directory: spuc_functions
#include <spuc/spuc_types.h>
#include <cmath>
#include <spuc/complex.h>
#include <vector>
namespace SPUC {
//! \file
//! \brief Calculate the complex roots of a polynomial equation
//
//! \brief Calculate the complex roots of a polynomial equation
//
//! \author Tony Kirke
//! \ingroup functions misc
std::vector<complex<float_type> > find_roots(const std::vector<float_type>& a, long n);
}  // namespace SPUC
