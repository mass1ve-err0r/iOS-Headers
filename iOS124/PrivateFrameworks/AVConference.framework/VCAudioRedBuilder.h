//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface VCAudioRedBuilder : NSObject
{
    int _redPayloadType;
    unsigned int _sampleRate;
    unsigned int _numPayloads;
    unsigned int _maxDelay;
    _Bool _includeSequenceOffset;
    struct tagVCAudioRedPayload _latestPrimaryPayload;
    NSPointerArray *_selectedRedPayloads;
    struct tagVCAudioRedPayload _redPayloadToSend;
    unsigned char _redPayloadBufferToSend[1472];
    struct tagVCAudioRedPayload _payloadHistory[9];
    unsigned int _payloadHistoryCount;
    char *_payloadBufferHistory;
    int _payloadBufferHistoryIndex;
}

+ (unsigned int)redOverheadForNumPayloads:(unsigned int)arg1;
@property(readonly, nonatomic) int redPayloadType; // @synthesize redPayloadType=_redPayloadType;
@property(nonatomic) unsigned int numPayloads; // @synthesize numPayloads=_numPayloads;
@property(nonatomic) unsigned int maxDelay; // @synthesize maxDelay=_maxDelay;
- (struct tagVCAudioRedPayload *)getPrimaryPayloadWithBuffer:(char *)arg1 length:(int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4 priority:(unsigned char)arg5;
- (id)initWithRedPayloadType:(int)arg1 sampleRate:(unsigned int)arg2 numPayloads:(unsigned int)arg3 maxDelay:(unsigned int)arg4 includeSequenceOffset:(_Bool)arg5;
- (void)dealloc;
- (void)updatePayloadHistory:(struct tagVCAudioRedPayload *)arg1;
- (struct tagVCAudioRedPayload *)redPayloadForPrimaryPayload:(struct tagVCAudioRedPayload *)arg1;
- (id)payloadHistoryDescription;
- (id)redundantPayloadsDescription:(id)arg1;
- (id)redPayloadDescription:(struct tagVCAudioRedPayload *)arg1;
- (_Bool)redundantPayloads:(id)arg1 containsPointer:(void *)arg2;
- (id)selectRedPayloadsForPrimaryPayload:(struct tagVCAudioRedPayload *)arg1;
- (struct tagVCAudioRedPayload *)nearestRedPayloadForTimestamp:(unsigned int)arg1;
- (char *)resetOutputPayload:(struct tagVCAudioRedPayload *)arg1;
- (_Bool)isPayloadTimestampWithinThreshold:(struct tagVCAudioRedPayload *)arg1 forTimestamp:(unsigned int)arg2;
- (unsigned int)timestampOffsetFor20msBlocks:(int)arg1;
- (struct tagVCAudioRedPayload *)buildRedPayloadWithPrimaryPayload:(struct tagVCAudioRedPayload *)arg1 redPayloads:(id)arg2;

@end

