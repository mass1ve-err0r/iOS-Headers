//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/_MFAddressBookSearchOperation.h>

#import <MessageUI/ABPredicateDelegate-Protocol.h>

@class NSString;

@interface MFNameSearchOperation : _MFAddressBookSearchOperation <ABPredicateDelegate>
{
    struct __CFArray *_uids;
    struct __CFArray *_addresses;
    struct __CFArray *_identifiers;
    struct __CFArray *_properties;
}

+ (id)operationWithAddressBook:(void *)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(id)arg1;
- (struct __CFArray *)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const struct __CFArray **)arg2 identifiers:(const struct __CFArray **)arg3 properties:(const struct __CFArray **)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

