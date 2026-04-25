#pragma once

#include <stdint.h>
#include <DirectXMath.h>

namespace GRAPHICS
{
    struct RECT_F
    {
        float left = 0.f;
        float top = 0.f;
        float right = 0.f;
        float bottom = 0.f;
    };

    struct RECT_U
    {
        uint32_t left = 0;
        uint32_t top = 0;
        uint32_t right = 0;
        uint32_t bottom = 0;
    };

    struct Vertex
    {
        DirectX::XMFLOAT3 pos;
        DirectX::XMFLOAT2 uv;
    };

    struct BatchVertex
    {
        DirectX::XMFLOAT3 pos = {};
        DirectX::XMFLOAT2 uv = {};
        uint32_t textureIndex = 0;
    };
}