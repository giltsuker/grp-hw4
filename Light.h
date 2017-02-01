#pragma once
#include "vec4.h"

typedef enum 
{
    LIGHT_ID_AMBIENT=-1,
    LIGHT_ID_1=0,
    LIGHT_ID_2,
    LIGHT_ID_3,
    LIGHT_ID_4,
    LIGHT_ID_5,
    LIGHT_ID_6,
    LIGHT_ID_7,
    LIGHT_ID_8,
    MAX_LIGHT
} LightID;

typedef  enum 
{
    LIGHT_TYPE_DIRECTIONAL,
    LIGHT_TYPE_POINT,
    LIGHT_TYPE_SPOT
} LightType;

typedef  enum 
{
    LIGHT_SPACE_VIEW,
    LIGHT_SPACE_LOCAL
} LightSpace;


class LightParams
{
public:

    //light enabled
    bool enabled;
    //type directional,point,spot
    LightType type;
    //local or view space
    LightSpace space;

    //color 0-255 RGB
    int colorR;
    int colorG;
    int colorB;

    //position
    double posX;
    double posY;
    double posZ;

	vec4 rel_pos;

    //direction
    double dirX;
    double dirY;
    double dirZ;
    
	double* z_array_xdir;
	double* z_array_neg_xdir;
	double* z_array_ydir;
	double* z_array_neg_ydir;
	double* z_array_zdir;
	double* z_array_neg_zdir;

	vec4 rel_dir;

    LightParams():
	enabled(false),type(LIGHT_TYPE_DIRECTIONAL),space(LIGHT_SPACE_VIEW),
	colorR(255),colorG(255),colorB(255),posX(0),posY(0),posZ(0),
	dirX(0),dirY(0),dirZ(0)
    {}

protected:
private:
};
