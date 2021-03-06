#ifndef chesspp_piece_King_HeaderPlusPlus
#define chesspp_piece_King_HeaderPlusPlus

#include "board/Board.hpp"
#include "piece/Piece.hpp"

namespace chesspp
{
    namespace piece
    {
        class King
        : public virtual Piece
        {
        public:
            King(board::Board &b, Position_t const &pos, Suit_t const &s, Class_t const &pc);

        protected:
            virtual void calcTrajectory() override;
        };
    }
}

#endif
