#pragma once

#include "D3D11EngineInterfaceAPI.h"
#include <stdint.h>

class D3D11_ENGINE_INTERFACE_API IResizeEventListener
{
public:
	virtual ~IResizeEventListener() = default;

	virtual void OnResize(uint32_t width, uint32_t height) = 0;
};

