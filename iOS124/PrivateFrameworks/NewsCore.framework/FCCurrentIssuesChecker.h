//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCurrentIssuesChecker-Protocol.h>

@class FCIssueReadingHistory, FCSubscriptionController, NSString;
@protocol FCContentContext;

@interface FCCurrentIssuesChecker : NSObject <FCCurrentIssuesChecker>
{
    id <FCContentContext> _context;
    FCSubscriptionController *_subscriptionController;
    FCIssueReadingHistory *_issueReadingHistory;
}

@property(retain, nonatomic) FCIssueReadingHistory *issueReadingHistory; // @synthesize issueReadingHistory=_issueReadingHistory;
@property(retain, nonatomic) FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)_promiseFilterUnreadIssuesWithFromIssues:(id)arg1 withChainingdata:(id)arg2;
- (id)_promiseCurrentIssuesFromChannelIDs:(id)arg1 withChainingdata:(id)arg2;
- (id)_promiseFollowedChannelIDs;
- (void)fetchUsersCurrentIssuesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchCurrentIssuesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 subscriptionController:(id)arg2 issueReadingHistory:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

