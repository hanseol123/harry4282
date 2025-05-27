
#pragma once

#include <algorithm>
#include <random>
#include <chrono>

namespace FairyStockfish {

// 시간 측정 유틸리티
inline uint64_t now() {
    return static_cast<uint64_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()
        ).count()
    );
}

// 난수 생성기 (예: Zobrist key용 등)
inline uint64_t random_uint64() {
    static std::mt19937_64 rng(std::random_device{}());
    return rng();
}

// clamp 함수 (C++17 이전 호환용)
template <typename T>
inline T clamp(const T& val, const T& low, const T& high) {
    return std::min(std::max(val, low), high);
}

} // namespace FairyStockfish
