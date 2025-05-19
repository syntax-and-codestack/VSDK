//Texture.hpp

#ifndef TEXTURE_HPP
#define TEXTURE_HPP

#include <string>
#include "MathSdk.h"

#define TEXTURE_X_SCALE 15.0f
#define TEXTURE_Y_SCALE 15.0f

class CEditorTexture{
public:
      CEditorTexture();
      virtual ~CEditorTexture();

      float CTexureX[15];
      float CTextureY[15];

      const std::string CTextureName();

      virtual bool CTextureResetScale() = 0;
      virtual void CTextureFitScale() = 0;
      virtual void CTextureLMapScale() = 0;
      virtual float CTextureAlphaTransparency() = 0;
};

#endif
