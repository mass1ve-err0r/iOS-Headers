//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXContainerComponentBlueprint;
@protocol SXLayouter, SXLayouterDelegate;

@protocol SXLayouterFactory <NSObject>
- (id <SXLayouter>)layouterForContainerComponentBlueprint:(SXContainerComponentBlueprint *)arg1 delegate:(id <SXLayouterDelegate>)arg2;
@end

