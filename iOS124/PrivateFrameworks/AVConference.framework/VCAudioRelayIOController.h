//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOControllerControl-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioIOSource-Protocol.h>

@class NSMutableArray, NSString, VCAudioRelay;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioRelayIOController : NSObject <VCAudioIOControllerControl, VCAudioIOSource, VCAudioIOSink>
{
    unsigned int _relayType;
    unsigned int _relayIOType;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_allClients;
    NSMutableArray *_startingIOClients;
    NSMutableArray *_sourceClients;
    NSMutableArray *_sinkClients;
    struct AudioEventQueue_t *_sourceEventQueue;
    struct AudioEventQueue_t *_sinkEventQueue;
    struct opaqueVCAudioBufferList *_sourceBuffer;
    VCAudioRelay *_relay;
    struct AudioStreamBasicDescription _format;
    unsigned int _samplesPerFrame;
    struct _VCAudioIOControllerIOState _sinkData;
    struct _VCAudioIOControllerIOState _sourceData;
}

+ (id)sharedInstanceSafeViewClientFacing;
+ (id)sharedInstanceSafeViewRemoteFacing;
+ (id)sharedInstanceClientFacing;
+ (id)sharedInstanceRemoteFacing;
+ (void)initializeStateStrings;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)updateClient:(id)arg1;
- (void)stopClient:(id)arg1;
- (void)startClient:(id)arg1;
- (void)flushEventQueue:(struct AudioEventQueue_t *)arg1;
- (void)processEventQueue:(struct AudioEventQueue_t *)arg1 clientList:(id)arg2;
- (_Bool)updateStateWithClient:(id)arg1;
- (_Bool)stateRunningWithNegotiatedFormat:(struct AudioStreamBasicDescription *)arg1 client:(id)arg2 newState:(unsigned int *)arg3;
- (_Bool)stateStartingWithNegotiatedFormat:(struct AudioStreamBasicDescription *)arg1 client:(id)arg2 newState:(unsigned int *)arg3;
- (void)addStartingClient:(id)arg1 controllerFormat:(struct AudioStreamBasicDescription *)arg2;
- (_Bool)statePrepareWithNegotiatedFormat:(struct AudioStreamBasicDescription *)arg1 client:(id)arg2 newState:(unsigned int *)arg3;
- (_Bool)stateIdleWithNegotiatedFormat:(struct AudioStreamBasicDescription *)arg1 client:(id)arg2 newState:(unsigned int *)arg3;
- (void)resetAudioTimestamps;
- (id)newRelayIOWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)startRelayIO:(id)arg1;
- (void)computeFormat:(struct AudioStreamBasicDescription *)arg1 newClient:(id)arg2;
- (void)_cleanupDeadClients;
- (_Bool)removeClient:(id)arg1;
- (_Bool)addClient:(id)arg1;
- (void)removeClient:(id)arg1 clientArray:(id)arg2 eventQueue:(struct AudioEventQueue_t *)arg3;
- (void)addClient:(id)arg1 clientArray:(id)arg2 eventQueue:(struct AudioEventQueue_t *)arg3;
- (void)unloadRelay;
- (void)loadRelay;
- (void)dealloc;
- (id)initWithRelayType:(unsigned int)arg1 relayIOType:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

