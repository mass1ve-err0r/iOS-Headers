//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CalendarAccountsController : NSObject
{
    NSMutableDictionary *_lastStoreListingRefreshDates;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    ACAccountStore *_accountStore;
}

+ (void)initialize;
+ (void)invalidate;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)refreshListingForSource:(id)arg1 isUserRequested:(_Bool)arg2;
- (_Bool)sourceListingNeedsRefresh:(id)arg1;
- (int)sortOrderForStoreType:(int)arg1;
- (int)sortOrderForSourceType:(long long)arg1;
- (int)sortOrderForSource:(id)arg1;
- (_Bool)sourceIsManaged:(id)arg1;
- (id)accountTypeTitleForSource:(id)arg1;
- (id)accountTypeTitleForSourceWithExternalId:(id)arg1;
- (id)titleForSource:(id)arg1 forBeginningOfSentence:(_Bool)arg2;
- (id)_localizedTitleForLocalSourceUsedAtBeginningOfSentence:(_Bool)arg1;
- (id)_displayAccountForAccountWithIdentifier:(id)arg1;
- (id)_accountForAccountIdentifier:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (id)accountStore;
- (void)dealloc;
- (id)init;

@end

