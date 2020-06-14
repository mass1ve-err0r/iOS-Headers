//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUActivityProvider-Protocol.h>

@class FCReadingHistory, FCReadingList, FCSubscriptionList, NSString;
@protocol FCHeadlineProviding, NUArticleActivityOptionsProvider, NUReportConcernViewPresenter, NUURLHandling, NUURLModifying;

@interface NUArticleActivityManager : NSObject <NUActivityProvider>
{
    id <FCHeadlineProviding> _headline;
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCSubscriptionList *_subscriptionList;
    id <NUURLHandling> _URLHandler;
    id <NUReportConcernViewPresenter> _reportConcernViewPresenter;
    id <NUURLModifying> _URLModifier;
    id <NUArticleActivityOptionsProvider> _optionsProvider;
}

@property(readonly, nonatomic) id <NUArticleActivityOptionsProvider> optionsProvider; // @synthesize optionsProvider=_optionsProvider;
@property(readonly, nonatomic) id <NUURLModifying> URLModifier; // @synthesize URLModifier=_URLModifier;
@property(readonly, nonatomic) id <NUReportConcernViewPresenter> reportConcernViewPresenter; // @synthesize reportConcernViewPresenter=_reportConcernViewPresenter;
@property(readonly, nonatomic) id <NUURLHandling> URLHandler; // @synthesize URLHandler=_URLHandler;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
- (_Bool)channelMutedForHeadline:(id)arg1;
- (_Bool)articleSavedForHeadline:(id)arg1;
- (_Bool)articleDislikedForHeadline:(id)arg1;
- (_Bool)articleLikedForHeadline:(id)arg1;
- (void)toggleMuteForHeadline:(id)arg1;
- (void)toggleSaveForHeadline:(id)arg1;
- (void)toggleArticleDislikeStatusForHeadline:(id)arg1;
- (void)toggleArticleLikeStatusForHeadline:(id)arg1;
- (CDUnknownBlockType)performBlockForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityImageForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityTitleForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityTypeForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)supportedActivities;
- (id)activityForType:(unsigned long long)arg1;
- (id)activities;
- (id)activityItemSources;
- (id)initWithHeadline:(id)arg1 readingHistory:(id)arg2 readingList:(id)arg3 subscriptionList:(id)arg4 URLHandler:(id)arg5 reportConcernViewPresenter:(id)arg6 URLModifier:(id)arg7 optionsProvider:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

