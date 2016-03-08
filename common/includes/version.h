#pragma once

#include "version_rev.h"

#define LAV_VERSION_MAJOR     0
#define LAV_VERSION_MINOR    68
#define LAV_VERSION_REVISION  0

/////////////////////////////////////////////////////////
#ifndef ISPP_INCLUDED

#define DO_MAKE_STR(x) #x
#define MAKE_STR(x) DO_MAKE_STR(x)

#if LAV_VERSION_BUILD > 0
#define LAV_VERSION LAV_VERSION_MAJOR.LAV_VERSION_MINOR.LAV_VERSION_REVISION.LAV_VERSION_BUILD-git
#define LAV_VERSION_TAG LAV_VERSION_MAJOR, LAV_VERSION_MINOR, LAV_VERSION_REVISION, LAV_VERSION_BUILD
#else
#define LAV_VERSION LAV_VERSION_MAJOR.LAV_VERSION_MINOR.LAV_VERSION_REVISION
#define LAV_VERSION_TAG LAV_VERSION_MAJOR, LAV_VERSION_MINOR, LAV_VERSION_REVISION
#endif

#define LAV_VERSION_STR MAKE_STR(LAV_VERSION)

#endif
