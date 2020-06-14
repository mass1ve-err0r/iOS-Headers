//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, WBSParsecSearchResult;
@protocol WBSCompletionListItem;

@interface WBSParsecHiddenResultInfo : NSObject
{
    WBSParsecSearchResult *_hiddenResult;
    id <WBSCompletionListItem> _preferredCompletionListItem;
    long long _reasonForHidingResult;
    unsigned long long _preferredCompletionListItemPositionInCompletionList;
    unsigned long long _preferredCompletionListItemPositionInFrequentlyVisitedSites;
}

@property(nonatomic) unsigned long long preferredCompletionListItemPositionInFrequentlyVisitedSites; // @synthesize preferredCompletionListItemPositionInFrequentlyVisitedSites=_preferredCompletionListItemPositionInFrequentlyVisitedSites;
@property(nonatomic) unsigned long long preferredCompletionListItemPositionInCompletionList; // @synthesize preferredCompletionListItemPositionInCompletionList=_preferredCompletionListItemPositionInCompletionList;
@property(readonly, nonatomic) long long reasonForHidingResult; // @synthesize reasonForHidingResult=_reasonForHidingResult;
@property(readonly, nonatomic) id <WBSCompletionListItem> preferredCompletionListItem; // @synthesize preferredCompletionListItem=_preferredCompletionListItem;
@property(readonly, nonatomic) WBSParsecSearchResult *hiddenResult; // @synthesize hiddenResult=_hiddenResult;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *feedbackDictionaryRepresentation;
- (id)initWithHiddenResult:(id)arg1 preferredCompletionListItem:(id)arg2 reason:(long long)arg3;

@end

