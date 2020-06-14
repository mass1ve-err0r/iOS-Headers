//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CLIntersiloService.h>

#import <CoreMotion/CLIntersiloServiceProtocol-Protocol.h>

@class NSMapTable, NSSet, NSString;
@protocol CLIntersiloReplayServiceClientProtocol;

@interface CLIntersiloReplayService : CLIntersiloService <CLIntersiloServiceProtocol>
{
    struct unique_ptr<CMMsl::Reader, std::__1::default_delete<CMMsl::Reader>> _replayReader;
    struct Item _onDeckMessage;
    NSSet *_expectedDecodeClasses;
    NSMapTable *_outboundTable;
    id <CLIntersiloReplayServiceClientProtocol> _coordinator;
    CDUnknownFunctionPointerType _filter;
}

+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
@property(nonatomic) CDUnknownFunctionPointerType filter; // @synthesize filter=_filter;
@property(retain, nonatomic) id <CLIntersiloReplayServiceClientProtocol> coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) NSMapTable *outboundTable; // @synthesize outboundTable=_outboundTable;
@property(retain, nonatomic) NSSet *expectedDecodeClasses; // @synthesize expectedDecodeClasses=_expectedDecodeClasses;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)tryToSendOnDeckMessage;
- (_Bool)loadNextRecordedMessageOnDeck;
- (void)useRecordingFileForPlayback:(id)arg1 expectedClasses:(id)arg2 coordinator:(byref id)arg3 synchronousFilter:(CDUnknownFunctionPointerType)arg4;
- (void)useRecordingFileForPlayback:(id)arg1 expectedClasses:(id)arg2;
- (_Bool)handleAbstractInvocation:(id)arg1 selectorInfo:(id)arg2 selfProxy:(id)arg3 senderProxy:(id)arg4;
- (id)getConnectionKeyFrom:(id)arg1 to:(id)arg2;
- (void)endService;
- (void)beginService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

