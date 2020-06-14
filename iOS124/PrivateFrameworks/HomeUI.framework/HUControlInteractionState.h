//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NAValueThrottler;

@interface HUControlInteractionState : NSObject
{
    _Bool _userInteractionActive;
    _Bool _writesInProgressOrPossible;
    NAValueThrottler *_writeThrottler;
    unsigned long long _inFlightWriteCount;
}

@property(nonatomic, getter=areWritesInProgressOrPossible) _Bool writesInProgressOrPossible; // @synthesize writesInProgressOrPossible=_writesInProgressOrPossible;
@property(nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(nonatomic) unsigned long long inFlightWriteCount; // @synthesize inFlightWriteCount=_inFlightWriteCount;
@property(retain, nonatomic) NAValueThrottler *writeThrottler; // @synthesize writeThrottler=_writeThrottler;
- (void).cxx_destruct;

@end

