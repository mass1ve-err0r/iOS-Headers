//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKPermanentEventStorePrivate-Protocol.h>
#import <CoreKnowledge/CKPermanentReadableEventStore-Protocol.h>
#import <CoreKnowledge/CKPermanentWritableEventStore-Protocol.h>

@class CKKnowledgeStore, MISSING_TYPE;

@interface CKPermanentEventStore : NSObject <CKPermanentWritableEventStore, CKPermanentReadableEventStore, CKPermanentEventStorePrivate>
{
    MISSING_TYPE *knowledgeStore;
}

+ (id)defaultStore;
+ (id)createEventWithIdentifier:(id)arg1 dateInterval:(id)arg2 metadata:(id)arg3 fromEvent:(id)arg4;
- (void).cxx_destruct;
- (id)init;
- (id)initWithKnowledgeStore:(id)arg1;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)deleteInteractionsWithBundleId:(id)arg1 error:(id *)arg2;
- (void)recordInteraction:(id)arg1 bundleId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)recordInteraction:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
- (void)recordInteraction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)recordInteraction:(id)arg1 error:(id *)arg2;
- (_Bool)recordEvent:(id)arg1 error:(id *)arg2;
- (void)recordEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)historicEventsWithSourceBundleIdentifier:(id)arg1 andIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)historicEventWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteEventWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)deleteEventWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)setTotalDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLastDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setFrequency:(long long)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLastSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setFirstSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)historicEventsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)historicEventsAndReturnError:(id *)arg1;
@property(nonatomic, readonly) CKKnowledgeStore *backingStore;

@end

