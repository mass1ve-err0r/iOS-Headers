//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNBoundingSphere : NSObject
{
    struct SCNVector3 center;
    double radius;
}

@property(nonatomic) double radius; // @synthesize radius;
@property(nonatomic) struct SCNVector3 center; // @synthesize center;
- (id)description;

@end

