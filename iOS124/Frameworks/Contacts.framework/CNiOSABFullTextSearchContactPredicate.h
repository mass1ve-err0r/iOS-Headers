//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNFullTextSearchContactPredicate.h>

#import <Contacts/CNiOSContactAsyncPredicate-Protocol.h>
#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABFullTextSearchContactPredicate : CNFullTextSearchContactPredicate <CNiOSContactPredicate, CNiOSContactAsyncPredicate>
{
}

- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;
- (id)cn_fetchPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 progressiveResults:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 environment:(id)arg5;
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;
- (id)_predicatesWithAddressBook:(void *)arg1 environment:(id)arg2;
- (_Bool)cn_supportsEncodedFetching;
- (_Bool)cn_supportsNativeBatchFetch;
- (_Bool)cn_supportsNativeSorting;
- (id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

