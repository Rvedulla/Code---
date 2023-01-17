#ifndef GEOMETRY_H
#define GEOMETRY_H


bool pointInRect(float x, float y, float rx, float ry, float rw, float rh){
    if ((x > rx) && (x <rw + rx) && (y < ry ) && (y >ry -rh)){
        return true;}
    else{
        return false;
    }
    
    
    
    
}




#endif
