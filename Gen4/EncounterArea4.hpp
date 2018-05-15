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

#ifndef ENCOUNTERAREA4_HPP
#define ENCOUNTERAREA4_HPP

#include <QStringList>
#include <QTextStream>
#include <QFile>
#include <PokeFinderCore/Objects/Game.hpp>
#include <PokeFinderCore/Objects/EncounterArea.hpp>
#include <algorithm>

class EncounterArea4 : public EncounterArea
{

private:
    Game dual;
    int time; // 0: Any 1: Morning, 2: Day, 3: Night
    int sound; // 0: None, 1: Hoenn, 2: Sinnoh

public:
    EncounterArea4() : EncounterArea() {}
    EncounterArea4(u32 location, Encounter type, vector<u32> species, vector<u32> minLevel, vector<u32> maxLevel, Game dual, int time);
    EncounterArea4(u32 location, Encounter type, vector<u32> species, vector<u32> minLevel, vector<u32> maxLevel, int sound, int time);
    EncounterArea4(QStringList data, Game game);
    static vector<EncounterArea4> getEncounters(Encounter type, Game game);
    QStringList getSpecieNames();
    u32 calcLevel(u32 index, u32 prng);
    Game getDual() const;
    int getTime() const;
    int getSound() const;

};

#endif // ENCOUNTERAREA4_HPP