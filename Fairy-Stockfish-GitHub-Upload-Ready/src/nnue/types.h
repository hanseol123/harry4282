
#pragma once

#include <cstdint>
#include <cassert>

namespace FairyStockfish {

// 장기용 말 종류 정의
enum PieceType {
    NO_PIECE_TYPE,
    PAWN,       // 병
    LANCE,      // 차
    KNIGHT,     // 마
    SILVER,     // 상
    GOLD,       // 사
    ELEPHANT,   // 코끼리 (Fairy 전용일 경우)
    GUARD,      // 보 (장기에서 사)
    KING,       // 장
    PIECE_TYPE_NB
};

enum Piece {
    NO_PIECE,
    W_PAWN, W_LANCE, W_KNIGHT, W_SILVER, W_GOLD, W_ELEPHANT, W_GUARD, W_KING,
    B_PAWN, B_LANCE, B_KNIGHT, B_SILVER, B_GOLD, B_ELEPHANT, B_GUARD, B_KING,
    PIECE_NB
};

enum Color {
    WHITE, BLACK, COLOR_NB
};

inline Color operator~(Color c) {
    return Color(c ^ 1);
}

// 장기 보드는 9x10 (0~89 또는 90개 정점)
enum Square : int {
    SQ_11, SQ_12, SQ_13, SQ_14, SQ_15, SQ_16, SQ_17, SQ_18, SQ_19,
    SQ_21, SQ_22, SQ_23, SQ_24, SQ_25, SQ_26, SQ_27, SQ_28, SQ_29,
    SQ_31, SQ_32, SQ_33, SQ_34, SQ_35, SQ_36, SQ_37, SQ_38, SQ_39,
    SQ_41, SQ_42, SQ_43, SQ_44, SQ_45, SQ_46, SQ_47, SQ_48, SQ_49,
    SQ_51, SQ_52, SQ_53, SQ_54, SQ_55, SQ_56, SQ_57, SQ_58, SQ_59,
    SQ_61, SQ_62, SQ_63, SQ_64, SQ_65, SQ_66, SQ_67, SQ_68, SQ_69,
    SQ_71, SQ_72, SQ_73, SQ_74, SQ_75, SQ_76, SQ_77, SQ_78, SQ_79,
    SQ_81, SQ_82, SQ_83, SQ_84, SQ_85, SQ_86, SQ_87, SQ_88, SQ_89,
    SQ_91, SQ_92, SQ_93, SQ_94, SQ_95, SQ_96, SQ_97, SQ_98, SQ_99,
    SQUARE_NB
};

constexpr int BOARD_WIDTH = 9;
constexpr int BOARD_HEIGHT = 10;

using Bitboard = uint64_t;
using Score = int;
using Depth = int;
using Key = uint64_t;

} // namespace FairyStockfish
