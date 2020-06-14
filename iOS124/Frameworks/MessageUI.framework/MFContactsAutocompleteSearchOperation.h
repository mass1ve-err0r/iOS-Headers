//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFContactsSearchOperation.h>

#import <MessageUI/CNAutocompleteFetchDelegate-Protocol.h>

@class CNAutocompleteFetchContext, CNAutocompleteStore, MFCancelationToken, MFPromise, NSString;

@interface MFContactsAutocompleteSearchOperation : MFContactsSearchOperation <CNAutocompleteFetchDelegate>
{
    MFCancelationToken *_fetchRequestToken;
    MFPromise *_fetchRequestPromise;
    _Bool _includeContacts;
    _Bool _includeRecents;
    _Bool _includeSuggestions;
    _Bool _includeServers;
    _Bool _simulateResults;
    CNAutocompleteFetchContext *_fetchContext;
    CNAutocompleteStore *_autocompleteStore;
}

+ (id)operationWithAddressBook:(void *)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 autocompleteStore:(id)arg6;
@property(retain, nonatomic) CNAutocompleteStore *autocompleteStore; // @synthesize autocompleteStore=_autocompleteStore;
@property(copy, nonatomic) CNAutocompleteFetchContext *fetchContext; // @synthesize fetchContext=_fetchContext;
@property(nonatomic) _Bool simulateResults; // @synthesize simulateResults=_simulateResults;
@property(nonatomic) _Bool includeServers; // @synthesize includeServers=_includeServers;
@property(nonatomic) _Bool includeSuggestions; // @synthesize includeSuggestions=_includeSuggestions;
@property(nonatomic) _Bool includeRecents; // @synthesize includeRecents=_includeRecents;
@property(nonatomic) _Bool includeContacts; // @synthesize includeContacts=_includeContacts;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (id)_simulatedRecipientResults;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)main;
- (void)configureForSearchTypes:(unsigned long long)arg1;
- (void)cancel;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

