/*
 * This file is part of PokéFinderCore
 * Copyright (C) 2017 by Admiral_Fish, bumba, and EzPzStreamz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef ENCOUNTERAREA3_HPP
#define ENCOUNTERAREA3_HPP

#include <Objects/EncounterArea.hpp>
#include <Objects/Game.hpp>

class EncounterArea3 : public EncounterArea
{

public:
    EncounterArea3() = default;
    EncounterArea3(int location, u32 delay, Encounter type, const QVector<Slot> &pokemon);
    u8 calcLevel(u8 index, u16 prng) const;
    u8 calcLevel(u8 index) const;
    u8 getEncounterRate() const;
    u32 getDelay() const;

private:
    u32 delay;

};

QDataStream &operator>>(QDataStream &in, EncounterArea3 &encounter);


#endif // ENCOUNTERAREA3_HPP
