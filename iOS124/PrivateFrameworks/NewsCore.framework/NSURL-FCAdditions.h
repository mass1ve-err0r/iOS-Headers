//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FCAdditions)
+ (id)fc_fileURLForWidgetReferralItemWithName:(id)arg1;
+ (id)fc_safeURLWithString:(id)arg1;
- (id)fc_URLByAddingQueryItem:(id)arg1;
- (id)fc_URLByDeletingFragment;
- (id)fc_URLByDeletingQuery;
- (_Bool)_isFeldsparOldChannelURL;
- (_Bool)_isFeldsparOldTopicURL;
- (_Bool)fc_isEqualToURL:(id)arg1;
- (id)fc_feldsparTagID;
- (_Bool)fc_isNewsTagURL;
- (_Bool)fc_isFeldsparInterstitialPreviewURL;
- (_Bool)_isFeldsparOldArticleURL;
- (_Bool)fc_isNewsURL;
- (id)fc_NewsIssueID;
- (id)fc_NewsArticleID;
- (_Bool)fc_isHardPaywallNewsArticleURL:(out id *)arg1;
- (_Bool)fc_isNewsIssueURL;
- (_Bool)fc_isNewsArticleURL;
@end

