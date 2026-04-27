#pragma once

#include "D3D11EngineInterfaceAPI.h"
#include "IRenderLayer.h"
#include <stdint.h>

enum class UIElementState : uint8_t
{
	Normal = 0,
	Hovered,
	Pressed,
	Disabled
};

enum class UIMouseEventType : uint8_t
{
	Move,
	Enter,
	Leave,
	LButtonDown,
	LButtonDoubleDown,
	LButtonUp,
	RButtonDown,
	RButtonUp,
	Click
};

class D3D11_ENGINE_INTERFACE_API IUIRenderLayer : public IRenderLayer
{
public:
	virtual ~IUIRenderLayer() = default;

	// Hit Test
	virtual bool HitTest(float x, float y) const = 0;

	// Mouse Event
	virtual void OnMouseEvent(UIMouseEventType type, float x, float y) = 0;

	// State
	virtual UIElementState GetState() const = 0;
	virtual void SetState(UIElementState state) = 0;

	// Visibility
	virtual bool IsVisible() const = 0;
	virtual void SetVisible(bool visible) = 0;
};
