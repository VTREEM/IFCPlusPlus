/* include/carve/config.h.  Generated from config.h.in by configure.  */
#pragma once

#include <cmath>

/* Define if using boost collections. Preferred, because the visual C++ unordered collections are slow and memory hungry. */
#define HAVE_BOOST_UNORDERED_COLLECTIONS 

#if defined(_MSC_VER)
#  pragma warning(disable:4201)
#endif

#include <cmath>

static inline double carve_round(double value) {
  return (value >= 0) ? floor(value + 0.5) : ceil(value - 0.5);
}
