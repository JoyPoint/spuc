#pragma once
// Copyright (c) 2015 Tony Kirke. License MIT  (http://www.opensource.org/licenses/mit-license.php)
// from directory: spuc_functions
#include <spuc/spuc_types.h>
#include <vector>
namespace SPUC {
//! \file
//! \brief Calculate coefficients for FIR using frequency sampling IDFT
//
//! \brief Calculate coefficients for FIR using frequency sampling IDFT
//
//! \author Tony Kirke,  Copyright(c) 2001
//! \author Tony Kirke
//! \ingroup functions fir
std::vector<float_type> inv_dft_symmetric(const std::vector<float_type>& A, int N);
std::vector<float_type> inv_dft(const std::vector<float_type>& A, int N);
}  // namespace SPUC
