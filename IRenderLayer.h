#pragma once

#include "D3D11EngineInterfaceAPI.h"
#include <stdint.h>

class IRenderContext;

class D3D11_ENGINE_INTERFACE_API IRenderLayer
{
public:
	virtual ~IRenderLayer() = default;

	virtual bool Initialize(IRenderContext* context) = 0;
	virtual void Shutdown() = 0;

	virtual bool Prepare() = 0;
	virtual bool Render() = 0;
};

