//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RETrainingContext.h>

#import <RelevanceEngine/RERemoteTrainingServerInterface-Protocol.h>

@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _RELocalTrainingContext : RETrainingContext <RERemoteTrainingServerInterface>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _invalidationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void).cxx_destruct;
- (void)updateRemoteAttribute:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performTrainingWithElements:(id)arg1 events:(id)arg2 interactions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleInvalidation;
- (void)_configureForRelevanceEngine:(id)arg1;
- (id)_elementRelevanceEngine;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

