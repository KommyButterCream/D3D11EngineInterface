#pragma once

#ifdef D3D11ENGINEINTERFACE_EXPORTS
#define D3D11ENGINEINTERFACE_API __declspec(dllexport)
#else
#define D3D11ENGINEINTERFACE_API __declspec(dllimport)
#endif
