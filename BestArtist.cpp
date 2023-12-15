#include "include/Entertainer/Util/BestArtist.h"
#include <vector>

namespace Best {

    template <>
    Artist getBestArtist<Singer>() {
        std::vector<Singer> singers = {/* ���⿡ ���� ��ü���� ����Ʈ�� ä�� �������� */ };
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
        std::vector<Actor> actors = {/* ���⿡ ��� ��ü���� ����Ʈ�� ä�� �������� */ };
        Actor bestActor = actors[0];

        for (const auto& actor : actors) {
            if (actor.getPopularity() > bestActor.getPopularity()) {
                bestActor = actor;
            }
        }

        return bestActor;
    }

}