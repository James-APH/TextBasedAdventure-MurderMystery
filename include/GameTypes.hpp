/**
 * @author James Huston [huston@uleth.ca]
 * @author Raven Huery [raven.huery@uleth.ca]
 * @author Parker Regier [tyre.regier@uleth.ca]
 * @date 2023-11
 * @updated 2026-03
 *
 */

#ifndef GAMETYPES_HPP
#define GAMETYPES_HPP

/**
 * @class GameTypes in GameTypes.h "GameTypes.h"
 * @brief collection of types.
 *
 */
class GameTypes {
public:
  enum PuzzleTypes {
    THINKING,
    ITEM,
  };

  /**
   * @enum RoomTypes in GameTypes "GameTypes.h"
   * @brief enum for the three main types of rooms
   */
  enum RoomTypes {
    PUZZLE_ROOM,
    DIALOGUE_ROOM,
    ITEM_ROOM,
  };
};

#endif /* GAMETYPES_HPP */
