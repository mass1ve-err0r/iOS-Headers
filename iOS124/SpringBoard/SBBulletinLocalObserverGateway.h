//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BBObserverDelegate-Protocol.h"

@class BBObserver, NSString;

@interface SBBulletinLocalObserverGateway : NSObject <BBObserverDelegate>
{
    BBObserver *_bbObserver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

