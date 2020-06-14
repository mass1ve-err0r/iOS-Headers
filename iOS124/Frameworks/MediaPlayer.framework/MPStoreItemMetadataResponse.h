//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSArray, NSDate, NSMutableDictionary;

@interface MPStoreItemMetadataResponse : NSObject <NSCopying>
{
    NSArray *_cacheMissItemIdentifiers;
    NSMutableDictionary *_itemIdentifierToStoreItemMetadata;
    _Bool _finalResponse;
    NSArray *_lastBatchItemIdentifiers;
    NSArray *_requestItemIdentifiers;
}

@property(copy, nonatomic) NSArray *cacheMissItemIdentifiers; // @synthesize cacheMissItemIdentifiers=_cacheMissItemIdentifiers;
@property(copy, nonatomic) NSArray *requestItemIdentifiers; // @synthesize requestItemIdentifiers=_requestItemIdentifiers;
@property(copy, nonatomic) NSArray *lastBatchItemIdentifiers; // @synthesize lastBatchItemIdentifiers=_lastBatchItemIdentifiers;
@property(nonatomic, getter=isFinalResponse) _Bool finalResponse; // @synthesize finalResponse=_finalResponse;
- (void).cxx_destruct;
- (void)setStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (id)storeItemMetadataForItemIdentifier:(id)arg1 returningIsFinalMetadata:(_Bool *)arg2;
- (id)storeItemMetadataForItemIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, copy, nonatomic) NSDate *earliestExpirationDate;
@property(readonly, copy, nonatomic) NSArray *itemIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

