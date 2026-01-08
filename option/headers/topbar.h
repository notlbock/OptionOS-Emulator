#ifndef TOPBAR_H
#define TOPBAR_H

#include <raylib.h>

inline void CreateTopbar(){
  Rectangle topbarRec = {0, 0, 800, 30};
  Color topbarColor = {255, 255, 0, 255};

  DrawRectangleRec(topbarRec, topbarColor);
}

#endif
