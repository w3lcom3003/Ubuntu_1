#include "include/Entertainer/Util/BestArtist.h"
#include <vector>

namespace Best {

    template <>
    Artist getBestArtist<Singer>() {
        std::vector<Singer> singers = {/* 여기에 가수 객체들의 리스트를 채워 넣으세요 */ };
        Singer bestSinger = singers[0];

        for (const auto& singer : singers) {
            if (singer.getPopularity() > bestSinger.getPopularity()) {
                bestSinger = singer;
            }
        }

        return bestSinger;
    }

    template <>
    Artist getBestArtist<Actor>() {
        std::vector<Actor> actors = {/* 여기에 배우 객체들의 리스트를 채워 넣으세요 */ };
        Actor bestActor = actors[0];

        for (const auto& actor : actors) {
            if (actor.getPopularity() > bestActor.getPopularity()) {
                bestActor = actor;
            }
        }

        return bestActor;
    }

}