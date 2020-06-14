//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface MRAVRoutingDiscoverySession : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct NSMutableDictionary *_endpointsChangedCallbacks;
    struct NSMutableDictionary *_outputDevicesChangedCallbacks;
    _Bool _alwaysAllowUpdates;
}

+ (id)discoverySessionWithEndpointFeatures:(unsigned int)arg1;
@property(nonatomic) _Bool alwaysAllowUpdates; // @synthesize alwaysAllowUpdates=_alwaysAllowUpdates;
- (void).cxx_destruct;
- (void)removeOutputDevicesChangedCallback:(id)arg1;
- (void)removeEndpointsChangedCallback:(id)arg1;
- (id)addOutputDevicesChangedCallback:(CDUnknownBlockType)arg1;
- (id)addEndpointsChangedCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *outputDevicesChangedCallbacks;
@property(readonly, nonatomic) NSArray *endpointsChangedCallbacks;
- (id)_init;

// Remaining properties
@property(readonly, nonatomic) NSArray *availableEndpoints; // @dynamic availableEndpoints;
@property(readonly, nonatomic) NSArray *availableOutputDevices; // @dynamic availableOutputDevices;
@property(readonly, nonatomic) _Bool devicePresenceDetected; // @dynamic devicePresenceDetected;
@property(nonatomic) unsigned int discoveryMode; // @dynamic discoveryMode;
@property(readonly, nonatomic) unsigned int endpointFeatures; // @dynamic endpointFeatures;
@property(copy, nonatomic) NSString *routingContextUID; // @dynamic routingContextUID;
@property(nonatomic) unsigned int targetAudioSessionID; // @dynamic targetAudioSessionID;

@end

