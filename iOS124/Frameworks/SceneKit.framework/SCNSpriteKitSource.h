//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNImageSource.h>

@class SKScene;

__attribute__((visibility("hidden")))
@interface SCNSpriteKitSource : SCNImageSource
{
    SKScene *_scene;
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (void)dealloc;
- (_Bool)isOpaque;
- (id)textureSource;

@end

