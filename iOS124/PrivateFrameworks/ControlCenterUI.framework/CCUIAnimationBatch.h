//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CCUIAnimationBatch : NSObject
{
    NSMutableDictionary *_animationsByParameters;
}

- (void).cxx_destruct;
- (void)iterateAnimationsOfType:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)iterateAnimationsWithBlock:(CDUnknownBlockType)arg1;
- (void)addAnimation:(id)arg1;
- (id)init;

@end

