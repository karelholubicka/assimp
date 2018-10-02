#pragma once

#include "code/Importer/IFC/IFCLoader.h"
#include "code/Importer/IFC/IFCReaderGen_2x3.h"
#include "code/STEPFile.h"

namespace Assimp {
    namespace STEP {
        namespace EXPRESS {
            class DataType;
        }
    }

    namespace IFC {
        void ConvertUnit( const ::Assimp::STEP::EXPRESS::DataType& dt, ConversionData2x3& conv );
        struct ConversionData2x3;
        struct ConversionData4;

    class IFCSchema2x3Loader {
    public:
        static void convertAsset2x3( ConversionData2x3 &conv, STEP::DB *db, aiScene* pScene, IOSystem* pIOHandler );

    };
}
}

