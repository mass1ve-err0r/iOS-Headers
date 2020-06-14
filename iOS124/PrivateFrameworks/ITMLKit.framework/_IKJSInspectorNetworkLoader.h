//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKNetworkRequestLoader-Protocol.h>

@class IKJSInspectorNetworkAgent, NSMutableDictionary, NSString, RWIProtocolNetworkDomainEventDispatcher;

@interface _IKJSInspectorNetworkLoader : NSObject <IKNetworkRequestLoader>
{
    NSString *_parentIdentifier;
    NSString *_identifier;
    IKJSInspectorNetworkAgent *_agent;
    RWIProtocolNetworkDomainEventDispatcher *_dispatcher;
    NSMutableDictionary *_requestRecords;
}

@property(readonly, nonatomic) NSMutableDictionary *requestRecords; // @synthesize requestRecords=_requestRecords;
@property(readonly, nonatomic) __weak RWIProtocolNetworkDomainEventDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) __weak IKJSInspectorNetworkAgent *agent; // @synthesize agent=_agent;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (double)currentTimeIntervalSince1970;
- (void)dispatchEventWithBlock:(CDUnknownBlockType)arg1;
- (id)_recordForResource:(long long)arg1 withInitiator:(long long)arg2 synchronousOperation:(_Bool)arg3;
- (id)recordForResource:(long long)arg1 withInitiator:(long long)arg2;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 agent:(id)arg3 dispatcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

