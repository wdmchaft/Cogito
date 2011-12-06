//
//  Obstacle.m
//  Cogito
//
//  A basic class to contain obstacle relevant data
//
//  05/12/2011: Created class
//

#import "Obstacle.h"

@implementation Obstacle

@synthesize obstacleType;
@synthesize damage;
@synthesize animation;

- (id) init: (GameObjectType)_obstacleType
{
    CCLOG(@"Obstacle.init");
    
    self = [super init];
    
    if (self != nil) 
    {        
        switch (_obstacleType) 
        {
            case kObstacleCage:
                damage = 1;
                break;
            case kObstaclePit:
                damage = 1;
                break;
            case kObstacleWater:
                damage = 1;
                break;
            case kObstacleStamper:
                damage = 0.5;
                break;
            default:
                CCLOG(@"Invalid GameObjectType specified");
                break;
        }
        
        obstacleType = _obstacleType;
    }
    
    return self;
}

@end