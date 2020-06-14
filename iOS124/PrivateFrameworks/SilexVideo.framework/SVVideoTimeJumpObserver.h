//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTimeJumpObserving-Protocol.h>

@class NSString;
@protocol SVPlayerItemObserving, SVVideoTimeProviding;

@interface SVVideoTimeJumpObserver : NSObject <SVVideoTimeJumpObserving>
{
    CDUnknownBlockType jumpBlock;
    id <SVPlayerItemObserving> _itemObserver;
    id <SVVideoTimeProviding> _timeProvider;
}

@property(readonly, nonatomic) id <SVVideoTimeProviding> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(readonly, nonatomic) id <SVPlayerItemObserving> itemObserver; // @synthesize itemObserver=_itemObserver;
@property(copy, nonatomic, setter=onJump:) CDUnknownBlockType jumpBlock; // @synthesize jumpBlock;
- (void).cxx_destruct;
- (void)jumped:(id)arg1;
- (id)initWithItemObserver:(id)arg1 timeProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

