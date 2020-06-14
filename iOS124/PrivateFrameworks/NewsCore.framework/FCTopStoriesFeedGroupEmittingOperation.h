//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTopStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
}

- (id)_defaultBackgroundGradient;
- (_Bool)hasSeenAllPreviousArticleIDs:(id)arg1;
- (id)headlinesLogFromHeadlines:(id)arg1 includeScore:(_Bool)arg2;
- (id)_filterHeadlines:(id)arg1 withArticleMetadata:(id)arg2;
- (void)_headlinesFromMandatory:(id)arg1 optional:(id)arg2 articleIDs:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchHeadlinesForArticleIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_personalizedFeedTransformationWithLimit:(unsigned long long)arg1 otherArticleIDs:(id)arg2 preselectedArticles:(id)arg3;
- (id)_feedTransformationWithOtherArticleIDs:(id)arg1;
- (void)_selectHeadlinesFromMandatory:(id)arg1 optional:(id)arg2 publishDate:(id)arg3 articleMetadataByArticleID:(id)arg4 cursor:(id)arg5 isAllowedToCollapse:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)performOperation;
- (void)_buildGroupWithCatchUpOperation:(id)arg1;

@end

