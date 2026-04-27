#pragma once

#ifdef D3D11_ENGINE_INTERFACE_EXPORTS
#define D3D11_ENGINE_INTERFACE_API __declspec(dllexport)
#else
#define D3D11_ENGINE_INTERFACE_API __declspec(dllimport)
#endif
