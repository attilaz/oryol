#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::_priv::renderer
    @ingroup _priv
    @brief main rendering API wrapper
 */
#if ORYOL_OPENGL
#include "Gfx/gl/glRenderer.h"
namespace Oryol {
namespace _priv {
class renderer : public glRenderer { };
} }
#elif ORYOL_D3D11
#include "Gfx/d3d11/d3d11Renderer.h"
namespace Oryol {
namespace _priv {
class renderer : public d3d11Renderer { };
} }
#elif ORYOL_D3D12
#include "Gfx/d3d12/d3d12Renderer.h"
namespace Oryol {
namespace _priv {
class renderer : public d3d12Renderer { };
} }
#elif ORYOL_METAL
#include "Gfx/mtl/mtlRenderer.h"
namespace Oryol {
namespace _priv {
class renderer : public mtlRenderer { };
} }
#elif ORYOL_VULKAN
#include "Gfx/vlk/vlkRenderer.h"
namespace Oryol {
namespace _priv {
class renderer : public vlkRenderer { };
} }
#else
#error "Target platform not yet supported!"
#endif