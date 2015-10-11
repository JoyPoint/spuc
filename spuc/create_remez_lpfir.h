#pragma once
// Copyright (c) 2015 Tony Kirke. License MIT  (http://www.opensource.org/licenses/mit-license.php)
// from directory: spuc_functions
#include <spuc/spuc_types.h>
#include <spuc/fir_coeff.h>
namespace SPUC {
//! \file
//! \brief Calculate coefficients for lowpass FIR assuming equiripple frequency response
//
//! \brief Calculate coefficients for lowpass FIR assuming equiripple frequency response
//
//! \author Tony Kirke,  Copyright(c) 2001
//! \author Tony Kirke
//! \ingroup functions fir
void create_remez_lpfir(fir_coeff<float_type>& remezfir, float_type edge, float_type fx, float_type wtx);
}  // namespace SPUC
