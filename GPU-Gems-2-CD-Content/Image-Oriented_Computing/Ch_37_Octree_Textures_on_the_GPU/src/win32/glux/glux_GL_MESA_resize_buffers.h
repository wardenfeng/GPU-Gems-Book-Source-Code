
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:35 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_MESA_resize_buffers__
#define __GLUX_GL_MESA_resize_buffers__

GLUX_NEW_PLUGIN(GL_MESA_resize_buffers);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glResizeBuffersMESA
typedef void (APIENTRYP PFNGLUXRESIZEBUFFERSMESAPROC) (void);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glResizeBuffersMESA
extern PFNGLUXRESIZEBUFFERSMESAPROC glResizeBuffersMESA;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------