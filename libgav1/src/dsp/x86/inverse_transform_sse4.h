#ifndef LIBGAV1_SRC_DSP_X86_INVERSE_TRANSFORM_SSE4_H_
#define LIBGAV1_SRC_DSP_X86_INVERSE_TRANSFORM_SSE4_H_

#include "src/dsp/cpu.h"
#include "src/dsp/dsp.h"

namespace libgav1 {
namespace dsp {

// Initializes Dsp::inverse_transforms, see the defines below for specifics.
// This function is not thread-safe.
void InverseTransformInit_SSE4_1();

}  // namespace dsp
}  // namespace libgav1

// If sse4 is enabled and the baseline isn't set due to a higher level of
// optimization being enabled, signal the sse4 implementation should be used.
#if LIBGAV1_ENABLE_SSE4_1

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize4_1DTransformDct
#define LIBGAV1_Dsp8bpp_1DTransformSize4_1DTransformDct LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize8_1DTransformDct
#define LIBGAV1_Dsp8bpp_1DTransformSize8_1DTransformDct LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize16_1DTransformDct
#define LIBGAV1_Dsp8bpp_1DTransformSize16_1DTransformDct LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize32_1DTransformDct
#define LIBGAV1_Dsp8bpp_1DTransformSize32_1DTransformDct LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize64_1DTransformDct
#define LIBGAV1_Dsp8bpp_1DTransformSize64_1DTransformDct LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize4_1DTransformAdst
#define LIBGAV1_Dsp8bpp_1DTransformSize4_1DTransformAdst LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize8_1DTransformAdst
#define LIBGAV1_Dsp8bpp_1DTransformSize8_1DTransformAdst LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize16_1DTransformAdst
#define LIBGAV1_Dsp8bpp_1DTransformSize16_1DTransformAdst LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize4_1DTransformIdentity
#define LIBGAV1_Dsp8bpp_1DTransformSize4_1DTransformIdentity LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize8_1DTransformIdentity
#define LIBGAV1_Dsp8bpp_1DTransformSize8_1DTransformIdentity LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize16_1DTransformIdentity
#define LIBGAV1_Dsp8bpp_1DTransformSize16_1DTransformIdentity LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize32_1DTransformIdentity
#define LIBGAV1_Dsp8bpp_1DTransformSize32_1DTransformIdentity LIBGAV1_DSP_SSE4_1
#endif

#ifndef LIBGAV1_Dsp8bpp_1DTransformSize4_1DTransformWht
#define LIBGAV1_Dsp8bpp_1DTransformSize4_1DTransformWht LIBGAV1_DSP_SSE4_1
#endif
#endif  // LIBGAV1_ENABLE_SSE4_1
#endif  // LIBGAV1_SRC_DSP_X86_INVERSE_TRANSFORM_SSE4_H_
