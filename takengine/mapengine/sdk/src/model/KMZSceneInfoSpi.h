
#ifndef TAK_ENGINE_MODEL_KMZSCENEINFOSPI_H_INCLUDED
#define TAK_ENGINE_MODEL_KMZSCENEINFOSPI_H_INCLUDED

#include "model/SceneInfo.h"

namespace TAK {
    namespace Engine {
        namespace Model {
            class ENGINE_API KMZSceneInfoSpi : public SceneInfoSpi {
            public:
                KMZSceneInfoSpi() NOTHROWS;
                virtual ~KMZSceneInfoSpi() NOTHROWS;
                virtual int getPriority() const NOTHROWS;
                virtual const char *getName() const NOTHROWS;
                virtual bool isSupported(const char *path) NOTHROWS;
                virtual TAK::Engine::Util::TAKErr create(TAK::Engine::Port::Collection<SceneInfoPtr> &scenes, const char *path) NOTHROWS;
            };
        }
    }
}

#endif