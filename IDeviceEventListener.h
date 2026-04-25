#pragma once

class IDeviceEventListener
{
public:
	virtual ~IDeviceEventListener() = default;

	virtual void OnDeviceLost() = 0;
	virtual void OnDeviceRestored() = 0;
};

