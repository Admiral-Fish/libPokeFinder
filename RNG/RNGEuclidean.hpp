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

#ifndef RNGEUCLIDEAN_HPP
#define RNGEUCLIDEAN_HPP

#include <QVector>
#include <Objects/Global.hpp>
#include <Objects/Method.hpp>

class RNGEuclidean
{

public:
    RNGEuclidean(Method FrameType);
    QVector<QPair<u32, u32>> recoverLower16BitsIV(u32 first, u32 second);
    QVector<QPair<u32, u32>> recoverLower16BitsPID(u32 first, u32 second);
    QVector<u32> recoverLower27BitsChannel(u32 hp, u32 atk, u32 def, u32 spa, u32 spd, u32 spe);
    void switchEuclidean(Method FrameType);

private:
    static const u32 ADD = 0x269EC3;
    static const u32 MULT = 0x343FD;
    u64 base;
    u64 sub1;
    u64 sub2;

    void setupEuclidean(Method FrameType);

};

#endif // RNGEUCLIDEAN_HPP
