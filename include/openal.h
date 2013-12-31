#pragma once

#include <detect_os.h>

#if defined(TARGET_LINUX) || defined(TARGET_WINDOWS)
	#include <AL/al.h>
	#include <AL/alc.h>
#elif defined(TARGET_OSX) || defined(TARGET_IOS)
	#include <OpenAL/al.h>
	#include <OpenAL/alc.h>
#endif
