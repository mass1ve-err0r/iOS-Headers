//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/SpringFactory.h>

@interface ScrollSpringFactory : SpringFactory
{
    double _initialVelocity;
}

+ (id)sharedFactory;
@property(nonatomic) double initialVelocity; // @synthesize initialVelocity=_initialVelocity;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;

@end

