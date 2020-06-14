//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerTimeControlStatusObserving-Protocol.h>

@class NSString, SVKeyValueObserver, SVPlayer;

@interface SVPlayerTimeControlStatusObserver : NSObject <SVPlayerTimeControlStatusObserving>
{
    CDUnknownBlockType changeBlock;
    SVPlayer *_player;
    SVKeyValueObserver *_timeControlStatusObserver;
    long long _timeControlStatus;
}

@property(nonatomic) long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property(readonly, nonatomic) SVKeyValueObserver *timeControlStatusObserver; // @synthesize timeControlStatusObserver=_timeControlStatusObserver;
@property(readonly, nonatomic) SVPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

