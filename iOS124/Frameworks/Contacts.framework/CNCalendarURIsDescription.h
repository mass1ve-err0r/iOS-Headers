//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNMultiValuePropertyDescription.h>

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNCalendarURIsDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)CNValueForContact:(id)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;
- (void *)ABValueForABPerson:(void *)arg1;
- (_Bool)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;
- (id)CNValueFromABValue:(void *)arg1;
- (void *)ABValueFromCNValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

