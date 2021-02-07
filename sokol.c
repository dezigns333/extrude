//
//  Single Header Library Initialization
//
#if defined(_WIN32)
#include <Windows.h>
#endif

#define SOKOL_IMPL
//############################################################
//##    Sokol Libraries... ADJUST GRAPHICS PLATFORM HERE!!
//############################################################
//#define SOKOL_GLES2               // Android, WebAssembly
//#define SOKOL_GLES3               // Android, WebAssembly
//#define SOKOL_WGPU                // Next Gen WebAssembly
//#define SOKOL_D3D11               // Windows, XBox
//#define SOKOL_METAL               // MacOS, iOS, tvOS
#define SOKOL_GLCORE33            // MacOS, Windows, Linux, Switch, Playstation

#include "libs/sokol/sokol_app.h"
#include "libs/sokol/sokol_gfx.h"
#include "libs/sokol/sokol_fetch.h"
#include "libs/sokol/sokol_glue.h"
#include "libs/sokol/sokol_time.h"
#include "libs/sokol/sokol_audio.h"

//############################################################
//##    Handmade Math Implementation
//############################################################
#define HANDMADE_MATH_IMPLEMENTATION
#define HANDMADE_MATH_NO_SSE
#include "libs/HandmadeMath.h"

//############################################################
//##    Stb Libraries Implementation
//############################################################
#define STB_IMAGE_IMPLEMENTATION
#include "libs/stb/stb_image.h"


