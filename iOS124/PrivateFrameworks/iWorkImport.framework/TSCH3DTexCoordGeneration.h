//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DNormalDirectionMapper;

__attribute__((visibility("hidden")))
@interface TSCH3DTexCoordGeneration : NSObject
{
    tmat4x4_3074befe mTransform;
    TSCH3DNormalDirectionMapper *mNormalDirectionMapper;
}

@property(retain, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper; // @synthesize normalDirectionMapper=mNormalDirectionMapper;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithTransform:(const tmat4x4_3074befe *)arg1;
- (id)init;

@end

