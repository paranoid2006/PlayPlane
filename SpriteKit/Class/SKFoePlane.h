//
//  SKFoePlane.h
//  SpriteKit
//
//  Created by paranoid on 17-12-15.
//  Copyright (c) 2017年 haha. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

typedef NS_ENUM(int, SKFoePlaneType) {
    
    SKFoePlaneTypeBig = 1,
    SKFoePlaneTypeMedium = 2,
    SKFoePlaneTypeSmall = 3
};

@interface SKFoePlane : SKSpriteNode

@property (nonatomic,assign) int hp;
@property (nonatomic,assign) SKFoePlaneType type;


+ (instancetype)createBigPlane;

+ (instancetype)createMediumPlane;

+ (instancetype)createSmallPlane;

@end
