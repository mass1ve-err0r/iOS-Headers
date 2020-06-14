//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreBookkeeper/SBKTransaction.h>

@class NSString;
@protocol SBKKeyValuePayloadPair;

@interface SBKPullValueTransaction : SBKTransaction
{
    _Bool _success;
    NSString *_requestedKey;
    id <SBKKeyValuePayloadPair> _clientItemPayloadPair;
    NSString *_clientItemVersionAnchor;
    id <SBKKeyValuePayloadPair> _resultItemPayloadPair;
    NSString *_resultItemVersionAnchor;
    NSString *_resultDomainVersion;
}

@property(readonly) NSString *resultDomainVersion; // @synthesize resultDomainVersion=_resultDomainVersion;
@property(readonly) NSString *resultItemVersionAnchor; // @synthesize resultItemVersionAnchor=_resultItemVersionAnchor;
@property(readonly) id <SBKKeyValuePayloadPair> resultItemPayloadPair; // @synthesize resultItemPayloadPair=_resultItemPayloadPair;
@property(readonly) _Bool success; // @synthesize success=_success;
@property(readonly) NSString *clientItemVersionAnchor; // @synthesize clientItemVersionAnchor=_clientItemVersionAnchor;
@property(readonly) id <SBKKeyValuePayloadPair> clientItemPayloadPair; // @synthesize clientItemPayloadPair=_clientItemPayloadPair;
@property(readonly, copy) NSString *requestedKey; // @synthesize requestedKey=_requestedKey;
- (void).cxx_destruct;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)newRequest;
- (id)clampsKey;
- (id)description;
- (id)initWithStoreBagContext:(id)arg1 requestedKey:(id)arg2 clientItemPayloadPair:(id)arg3 clientItemVersionAnchor:(id)arg4;

@end

