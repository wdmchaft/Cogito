//
//  Constants.h
//  Author: Thomas Taylor
//
//  Constants used in the game
//
//  21/11/2011: Created class
//

#ifndef Cogito_Constants_h
#define Cogito_Constants_h

//#define COCOS2D_DEBUG           2

#define kFrameRate              30

#define kMenuFont               @"bangla_dark.fnt"

#define kUISpriteZValue         50
#define kTerrainZValue          200

#define kLemmingSpriteZValue    100
#define kLemmingSpriteTagValue  0
#define kLemmingIdleTimer       3
#define kLemmingFallTime        0.6f

#define kLemmingRespawns        3
#define kLemmingTotal           5

#define kLemmingSpawnXPos       0.07f 
#define kLemmingSpawnYPos       0.90f
#define kLemmingSpawnSpeed      1

#define kStamperDamage          0.5f

#define kMainMenuTagValue       10
#define kSceneMenuTagValue      20

typedef enum
{
    kNoSceneUninitialised       = 0,
    kStingScene                 = 1,
    kMainMenuScene              = 2,
    kNewGameScene               = 3,
    kSettingsScene              = 4,
    kAboutScene                 = 5,
    kGameOverScene              = 6,
    kGameLevelScene             = 101
} SceneTypes;

#endif