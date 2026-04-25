#pragma once

#include "D3D11EngineInterfaceAPI.h"
#include "IRenderStructures.h"

struct ID2D1DeviceContext;
struct ID3D11DeviceContext;

enum class UIState
{
	Normal,
	Hovered,
	Pressed,
	Disabled
};

class D3D11ENGINEINTERFACE_API IUIElement
{
public:
	virtual ~IUIElement() = default;

	// Layout
	virtual void SetRect(const GRAPHICS::RECT_F& rect) = 0;
	virtual GRAPHICS::RECT_F GetRect() const = 0;

	// Hit test
	virtual bool HitTest(float x, float y) = 0;

	// State management
	virtual void OnMouseEnter() {}
	virtual void OnMouseLeave() {}
	virtual void OnMouseDown() {}
	virtual void OnMouseUp() {}
	virtual void OnClick() {}

	virtual UIState GetState() const = 0;
	virtual void SetState(UIState state) = 0;
};

