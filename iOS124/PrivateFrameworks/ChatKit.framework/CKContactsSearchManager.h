//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/MFContactsSearchConsumer-Protocol.h>

@class MFContactsSearchManager, NSArray, NSCharacterSet, NSMutableArray, NSNumber, NSString;
@protocol CKContactsSearchManagerDelegate;

@interface CKContactsSearchManager : NSObject <MFContactsSearchConsumer>
{
    _Bool _suppressGroupSuggestions;
    _Bool _biasForOutgoingInteraction;
    id <CKContactsSearchManagerDelegate> _delegate;
    NSArray *_enteredRecipients;
    MFContactsSearchManager *_searchManager;
    NSCharacterSet *_emojiCharacterSet;
    NSMutableArray *_searchResults;
    NSNumber *_currentSearchTaskID;
    NSString *_searchText;
}

@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSNumber *currentSearchTaskID; // @synthesize currentSearchTaskID=_currentSearchTaskID;
@property(retain, nonatomic) NSMutableArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) NSCharacterSet *emojiCharacterSet; // @synthesize emojiCharacterSet=_emojiCharacterSet;
@property(retain, nonatomic) MFContactsSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(nonatomic) _Bool biasForOutgoingInteraction; // @synthesize biasForOutgoingInteraction=_biasForOutgoingInteraction;
@property(nonatomic) _Bool suppressGroupSuggestions; // @synthesize suppressGroupSuggestions=_suppressGroupSuggestions;
@property(retain, nonatomic) NSArray *enteredRecipients; // @synthesize enteredRecipients=_enteredRecipients;
@property(nonatomic) __weak id <CKContactsSearchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (struct _NSRange)_rangeForSearchTerm:(id)arg1 inTarget:(id)arg2 tokenizedByCharacterSet:(id)arg3;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (id)_filterGroupResults:(id)arg1;
- (id)_cullOldResults:(id)arg1;
- (id)_sortResultsByDate:(id)arg1;
- (id)_sortSearchResultsWithCoreRecentsResults:(id)arg1 displayNameMatches:(id)arg2 participantNameMatches:(id)arg3;
- (void)removeRecipient:(id)arg1;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)cancelSearch;
- (void)searchWithText:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

