//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMapTable, NSMutableSet;
@protocol OS_dispatch_queue;

@interface IDSPushHandler : NSObject
{
    NSData *_cachedPushToken;
    NSMapTable *_handlerMap;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSMutableSet *_topicsCache;
    _Bool _shouldWaitToSetTopics;
    Class _APSConnectionClass;
}

+ (id)sharedInstanceWithPortName:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) Class APSConnectionClass; // @synthesize APSConnectionClass=_APSConnectionClass;
@property(nonatomic) _Bool shouldWaitToSetTopics; // @synthesize shouldWaitToSetTopics=_shouldWaitToSetTopics;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)configureAsMacNotificationCenterObserver:(id)arg1;
- (void)configureAsMacNotificationCenterObserver:(id)arg1 withPushToWakeTopics:(id)arg2;
@property(readonly, nonatomic) NSData *pushToken;
- (id)_apsConnectionPushToken;
- (void)setCommands:(id)arg1 forListener:(id)arg2;
- (void)setTopics:(id)arg1 forListener:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4;
- (void)_recalculateTopicsCacheOnIvarQueue;
- (void)_updateTopicsOnIvarQueue;
- (_Bool)_validateHandler:(id)arg1 withSelector:(SEL)arg2 topic:(id)arg3 command:(id)arg4;
@property(readonly, nonatomic) _Bool isConnected;
- (void)dealloc;
- (id)initWithPort:(id)arg1;
- (id)init;

@end

