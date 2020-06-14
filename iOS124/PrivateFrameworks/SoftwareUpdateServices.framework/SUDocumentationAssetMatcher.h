//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUAssetStateMatcher.h>

@class MAAsset;

@interface SUDocumentationAssetMatcher : SUAssetStateMatcher
{
    MAAsset *_suAsset;
}

+ (id)matcherDocumentationFromAsset:(id)arg1;
+ (id)matcherForInstalledDocumentationFromAsset:(id)arg1;
- (id)_sortedMatcherPredicatesFromSoftwareUpdateAsset:(id)arg1;
- (id)_queryPredicateForProperties:(id)arg1;
- (void)_modifyMADownloadOptions:(id)arg1;
- (id)_findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithSoftwareUpdateAsset:(id)arg1 limitingToStates:(int)arg2;
- (id)initWithSoftwareUpdateAsset:(id)arg1;

@end

