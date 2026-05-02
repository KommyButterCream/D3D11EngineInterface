#pragma once

#include "D3D11EngineInterfaceAPI.h"

class FontManager;

struct RenderEngineConfig
{
	bool initDebugLayer = true;
	bool initD3D = true;
	bool initD2D = false;
	bool initFontManager = false;
};

class D3D11_ENGINE_INTERFACE_API IRenderEngine
{
public:
	virtual ~IRenderEngine() = default;

	// 엔진 초기화, 종료
	virtual bool Initialize(const RenderEngineConfig& config) = 0;
	virtual void Shutdown() = 0;

	// 디바이스 상태
	virtual bool IsInitialized() const = 0;
	virtual bool IsDeviceAvailable() const = 0;

	// 디바이스 생명주기 관리
	virtual bool DiscardDevice() = 0;
	virtual bool RecreateDevice() = 0;

	virtual FontManager* GetFontManager() const = 0;
};
