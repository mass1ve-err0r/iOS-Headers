//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedDescriptor.h>

#import <NewsCore/FCFeedPaginating-Protocol.h>

@class FCSubscriptionList, NSString;
@protocol FCCoreConfigurationManager, FCFeedPersonalizing, FCPaidAccessCheckerType;

@interface FCForYouFeedDescriptor : FCFeedDescriptor <FCFeedPaginating>
{
    unsigned long long _trendingAndSavedStoriesCount;
    id <FCCoreConfigurationManager> _configurationManager;
    FCSubscriptionList *_subscriptionList;
    id <FCFeedPersonalizing> _feedPersonalizer;
    id <FCPaidAccessCheckerType> _paidAccessChecker;
}

@property(retain, nonatomic) id <FCPaidAccessCheckerType> paidAccessChecker; // @synthesize paidAccessChecker=_paidAccessChecker;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
@property(retain, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(retain, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property(nonatomic) unsigned long long trendingAndSavedStoriesCount; // @synthesize trendingAndSavedStoriesCount=_trendingAndSavedStoriesCount;
- (void).cxx_destruct;
- (void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(_Bool)arg3 personalize:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_sortedEditorialGroupEmittersWithForYouGroupsConfiguration:(id)arg1;
- (id)editionFollowingEdition:(id)arg1;
- (id)editionAtDate:(id)arg1;
- (long long)feedPersonalizationConfigurationSet;
- (long long)feedFilterOptions;
- (long long)feedSortMethod;
- (id)feedPaginator;
- (_Bool)shouldFilterFeedGroupEmitter:(id)arg1 withConfiguration:(id)arg2;
- (void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)feedGroupEmittersWithConfiguration:(id)arg1;
- (id)offlineFeedGroupEmittersWithConfiguration:(id)arg1;
- (id)iAdFeedID;
- (id)languagesWithSubscriptionController:(id)arg1;
- (id)name;
- (_Bool)hasEditions;
- (_Bool)derivesContentsFromExplicitSubscriptions;
- (id)initWithIdentifier:(id)arg1 trendingAndSavedStoriesCount:(long long)arg2 configurationManager:(id)arg3 subscriptionList:(id)arg4 feedPersonalizer:(id)arg5 paidAccessChecker:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

