#pragma once

#include <stdint.h>

class IResizeEventListener
{
public:
	virtual ~IResizeEventListener() = default;

	virtual void OnResize(uint32_t width, uint32_t height) = 0;
};

