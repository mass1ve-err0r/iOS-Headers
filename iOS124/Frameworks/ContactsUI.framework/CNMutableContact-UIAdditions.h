//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNMutableContact.h>

@class NSArray;

@interface CNMutableContact (UIAdditions)
- (void)removePhoto;
@property(copy, nonatomic) NSArray *birthdays;
- (_Bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3 request:(id)arg4;
- (_Bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3;
- (void)updateContactTypeWithPolicy:(id)arg1;
- (id)addProperties:(id)arg1 excludingProperties:(id)arg2 fromContact:(id)arg3;
- (_Bool)hasNonPersistedData;
@end

