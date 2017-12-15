//
//  SKFoePlane.m
//  SpriteKit
//
//  Created by paranoid on 17-12-15.
//  Copyright (c) 2017年 haha. All rights reserved.
//

#import "SKFoePlane.h"

#import "SKSharedAtles.h"

@implementation SKFoePlane

+ (instancetype)createBigPlane{
    SKFoePlane *foePlane = (SKFoePlane *)[SKFoePlane spriteNodeWithTexture:[SKSharedAtles textureWithType:SKTextureTypeBigFoePlane]];
    foePlane.hp = 7;
    foePlane.type = SKFoePlaneTypeBig;
    foePlane.physicsBody = [SKPhysicsBody bodyWithRectangleOfSize:foePlane.size];
    return foePlane;
}

+ (instancetype)createMediumPlane{
    SKFoePlane *foePlane = (SKFoePlane *)[SKFoePlane spriteNodeWithTexture:[SKSharedAtles textureWithType:SKTextureTypeMediumFoePlane]];
    foePlane.hp = 5;
    foePlane.type = SKFoePlaneTypeMedium;
    foePlane.physicsBody = [SKPhysicsBody bodyWithRectangleOfSize:foePlane.size];
    return foePlane;
}

+ (instancetype)createSmallPlane{
    SKFoePlane *foePlane = (SKFoePlane *)[SKFoePlane spriteNodeWithTexture:[SKSharedAtles textureWithType:SKTextureTypeSmallFoePlane]];
    foePlane.hp = 1;
    foePlane.type = SKFoePlaneTypeSmall;
    foePlane.physicsBody = [SKPhysicsBody bodyWithRectangleOfSize:foePlane.size];
    return foePlane;
}


@end
