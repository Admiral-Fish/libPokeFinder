/*
 * This file is part of libPokéFinder
 * Copyright (C) 2017 by Admiral_Fish and bumba
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
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

#ifndef GENERATOR3_HPP
#define GENERATOR3_HPP
#include <libPokeFinder/Gen3/Frame3.hpp>
#include <libPokeFinder/Objects/Generator.hpp>
#include <libPokeFinder/Objects/FrameCompare.hpp>
#include <libPokeFinder/RNG/LCRNG.hpp>

class Generator3: public Generator
{

private:
    int iv1;
    int iv2;
    LCRNG rng = PokeRNG(0);
    u32 size;

    vector<Frame3> generateMethodChannel(FrameCompare compare);

    vector<Frame3> generateMethodH124(FrameCompare compare);

    vector<Frame3> generateMethodH124Synch(FrameCompare compare);

    vector<Frame3> generateMethodH124CuteCharm(FrameCompare compare);

    vector<Frame3> generateMethodXDColo(FrameCompare compare);

    vector<Frame3> generateMethod124(FrameCompare compare);

    void Refill();

public:

    Generator3();

    Generator3(u32 maxResults, u32 initialFrame, u32 initialSeed, u32 tid, u32 sid, u32 offset);

    vector<Frame3> Generate(FrameCompare compare);

};

#endif // GENERATOR3_HPP