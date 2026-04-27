#pragma once

#include "D3D11EngineInterfaceAPI.h"

class D3D11_ENGINE_INTERFACE_API IDeviceEventListener
{
public:
	virtual ~IDeviceEventListener() = default;

	virtual void OnDeviceLost() = 0;
	virtual void OnDeviceRestored() = 0;
};

