//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNGeminiLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNGeminiLogger : NSObject <CNGeminiLogger>
{
    NSObject<OS_os_log> *_log;
}

@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void).cxx_destruct;
- (void)fetchSortedResultsForInteraction:(id)arg1 error:(id)arg2;
- (void)fetchedSortedResults:(id)arg1 forInteraction:(id)arg2;
- (void)updateSubscriptionInfoError:(id)arg1;
- (void)updatedSubscriptionInfo:(id)arg1;
- (void)unregisteredForContextUpdatesWithToken:(id)arg1;
- (void)registeredForContextUpdatesWithToken:(id)arg1;
- (void)recordInteractionError:(id)arg1;
- (void)recordedInteraction:(id)arg1 forContext:(id)arg2;
- (void)fetchingBestResultForDestinationHandle:(CDUnknownBlockType)arg1;
- (void)updatingSubscriptionInfo:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

