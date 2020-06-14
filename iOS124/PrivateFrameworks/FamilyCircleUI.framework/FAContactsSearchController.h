//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/MFContactsSearchConsumer-Protocol.h>

@class MFContactsSearchManager, MFContactsSearchResultsModel, NSNumber, NSString;
@protocol AAUIContactsSearchDelegate;

@interface FAContactsSearchController : NSObject <MFContactsSearchConsumer>
{
    MFContactsSearchManager *_searchManager;
    MFContactsSearchResultsModel *_searchResultsModel;
    long long _countOfPendingResultBatches;
    _Bool _didFindResults;
    NSNumber *_searchTaskID;
    id <AAUIContactsSearchDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)_endSearch;
- (void)_cancelSearchAndNotify:(_Bool)arg1;
- (void)cancelSearch;
- (void)beginSearchWithString:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

