#pragma once

#include "D3D11EngineInterfaceAPI.h"

struct OverlayRenderContext;
struct OverlayCollections;
class IRenderContext;

class D3D11_ENGINE_INTERFACE_API IOverlayRenderer
{
public:
	virtual ~IOverlayRenderer() = default;

	virtual bool Initialize(IRenderContext* context) = 0;
	virtual void Shutdown() = 0;

	virtual void Render(const OverlayRenderContext& context, const OverlayCollections& overlays) = 0;
};
