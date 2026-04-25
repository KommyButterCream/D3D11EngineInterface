#pragma once

struct OverlayRenderContext;
struct OverlayCollections;
class IRenderContext;

class IOverlayRenderer
{
public:
	virtual ~IOverlayRenderer() = default;

	virtual bool Initialize(IRenderContext* context) = 0;
	virtual void Shutdown() = 0;

	virtual void Render(const OverlayRenderContext& context, const OverlayCollections& overlays) = 0;
};