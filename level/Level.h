//
// Created by xhy on 2020/10/29.
//

#ifndef TRAPDOOR_LEVEL_H
#define TRAPDOOR_LEVEL_H

#include <vector>

#include <cstdio>
#include <functional>

class BlockPos;

class Dimension;

class Actor;

class Level {
public:
    Level() = delete;

    void forEachPlayer(const std::function<void(Actor *)> &todo);

    Actor *getNearestPlayer(BlockPos &pos);

    Dimension *getDimFromID(int id);
};


#endif //TRAPDOOR_LEVEL_H