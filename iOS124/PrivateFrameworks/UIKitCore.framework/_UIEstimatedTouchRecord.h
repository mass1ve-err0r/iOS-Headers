//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, UITouch;

__attribute__((visibility("hidden")))
@interface _UIEstimatedTouchRecord : NSObject
{
    NSMutableArray *_touchables;
    UITouch *_liveTouch;
    UITouch *_frozenTouch;
    NSNumber *_contextID;
}

@property(readonly, nonatomic) NSNumber *contextID; // @synthesize contextID=_contextID;
@property(readonly, nonatomic) NSArray *touchables; // @synthesize touchables=_touchables;
@property(readonly, nonatomic) UITouch *frozenTouch; // @synthesize frozenTouch=_frozenTouch;
@property(readonly, nonatomic) UITouch *liveTouch; // @synthesize liveTouch=_liveTouch;
- (void).cxx_destruct;
- (void)dispatchUpdateWithPressure:(double)arg1 stillEstimated:(_Bool)arg2;
- (void)removeTouchable:(id)arg1;
- (void)addTouchable:(id)arg1;
- (id)initWithLiveTouch:(id)arg1 freezeTouch:(id)arg2 contextID:(id)arg3;

@end

