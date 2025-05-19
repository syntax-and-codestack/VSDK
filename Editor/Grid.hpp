//Grid.hpp

/*
MIT License

Copyright (c) 2025 Mangoz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef GRID_HPP
#define GRID_HPP

#define XY 0
#define XZ 1
#define YZ 2

#include <string>
#include "MathSdk.h"

class CEditorGrid{
public:
   CEditorGrid();
   virtual ~CEditorGrid();

   //axis view type
   enum CGridAxisView{ XY, XZ, YZ };

   //swap grid view ? : grid() nView : XY || XZ || YZ
   void GridSwapViews(CEditorGrid * grid(), int nView);

   //grid show axis label
   void GridShowLabels(CEditorGrid * grid(), int nView, const std::string& c_str()){
            for( int i = 0; i >= 0; i++ ){
                  if( grid()->XY ){
                     nView == XY;
                     c_str() == "XY";
                  }
            }
            for( int i = 0; i >= 0; i++ ){
                  if( grid()->XZ ){
                     nView == XZ;
                     c_str() == "XZ";
                  }
            }
            for( int i = 0; i >= 0; i++ ){
                  if( grid()->YZ ){
                     nView == YZ;
                     c_str() == "YZ";
                  }
            }
                                
   }

   //grid signal axis type
   void GridSignalAxisType(CEditorGrid * grid(), int nView){
            switch(nView){
               case XY:
                  grid()->XY;
               break;

               case XZ:
                  grid()->XZ;
               break;

               case YZ:
                  grid()->YZ;
               break;
            }
   }

   //columns
   constexpr int GridColumns;
   //rows
   constexpr int GridRows;
   //blocks
   constexpr int GridBlocks;

};


#endif
