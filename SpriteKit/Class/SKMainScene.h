//
//  SKMainScene.h
//  SpriteKit
//
//  Created by paranoid on 17-12-15.
//  Copyright (c) 2017年 haha. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface SKMainScene : SKScene<SKPhysicsContactDelegate>{
    
    int _smallPlaneTime;
    int _mediumPlaneTime;
    int _bigPlaneTime;
    
    int _adjustmentBackgroundPosition;
    
    SKLabelNode *_scoreLabel;
    SKSpriteNode *_playerPlane;
    SKSpriteNode *_background1;
    SKSpriteNode *_background2;

    SKAction *_smallFoePlaneHitAction;
    SKAction *_mediumFoePlaneHitAction;
    SKAction *_bigFoePlaneHitAction;
    SKAction *_smallFoePlaneBlowupAction;
    SKAction *_mediumFoePlaneBlowupAction;
    SKAction *_bigFoePlaneBlowupAction;
}

@end
