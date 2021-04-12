#pragma once

#include <SFML/Graphics.hpp>
#include <cstdint>
#include <memory>
#include <vector>

#include "logics/chunk.h"
#include "logics/lifegame_cell.h"

class Field : public CellOwner
{
private:
    sf::Vector2f field_size;

    Chunk chunk;

public:
    Field(const sf::Vector2f field_size)
      : field_size(field_size)
      , chunk(field_size, 0, *this)
    {}

    sf::Vector2f getCellCount() const { return field_size; }

    const CellBase& getNeighbCell(const uint64_t idx, NeighbPos pos) const
    {

    }
    const CellBase& getCell(const uint64_t idx) const
    {
        return getNeighbCell(idx, NeighbPos::C);
    }

    void update() {}
};
