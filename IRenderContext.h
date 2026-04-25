#pragma once

#include <stdint.h>

class IRenderEngine;
class IDeviceEventListener;
class IResizeEventListener;

struct ID2D1DeviceContext;
struct ID2D1DeviceContext5;
struct IDWriteFactory;

class IRenderContext
{
public:
	virtual ~IRenderContext() = default;

	// 초기화, 종료
	virtual bool Initialize(void* windowHandle) = 0;
	virtual void Shutdown() = 0;

	// 상태
	virtual bool IsInitialized() const = 0;

	// Resize
	virtual void RequestResize(uint32_t newWidth, uint32_t newHeight) = 0;
	virtual bool Resize(uint32_t newWidth, uint32_t newHeight) = 0;

	virtual uint32_t GetWidth() const = 0;
	virtual uint32_t GetHeight() const = 0;

	// Rendering
	virtual bool BeginFrame() = 0;
	virtual bool EndFrame() = 0;
	virtual bool BeginOverlay() = 0;
	virtual bool EndOverlay() = 0;

	// Reder time
	virtual float GetDeltaTime() const = 0;

	// Device Lost Recovery
	virtual bool RecreateResources() = 0;

	// Return
	virtual IRenderEngine* GetEngine() = 0;
	virtual ID2D1DeviceContext* GetD2DDeviceContext() = 0;
	virtual ID2D1DeviceContext5* GetD2DDeviceContext5() = 0;
	virtual IDWriteFactory* GetWriteFactory() = 0;

	// Listener
	virtual void AddDeviceListener(IDeviceEventListener* listener) = 0;
	virtual void RemoveDeviceListener(IDeviceEventListener* listener) = 0;

	virtual void AddResizeListener(IResizeEventListener* listener) = 0;
	virtual void RemoveResizeListener(IResizeEventListener* listener) = 0;
};

