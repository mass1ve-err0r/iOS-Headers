//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentPreference.h>

@class NSOrderedSet, NSString, PKPaymentOptionsRecents;

@interface PKPaymentPreferenceContact : PKPaymentPreference
{
    _Bool _showPhoneticName;
    NSOrderedSet *_contactKeys;
    NSString *_addNewTitle;
    NSString *_addExistingTitle;
    NSString *_editExistingTitle;
    unsigned long long _type;
}

@property(nonatomic) _Bool showPhoneticName; // @synthesize showPhoneticName=_showPhoneticName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *editExistingTitle; // @synthesize editExistingTitle=_editExistingTitle;
@property(copy, nonatomic) NSString *addExistingTitle; // @synthesize addExistingTitle=_addExistingTitle;
@property(copy, nonatomic) NSString *addNewTitle; // @synthesize addNewTitle=_addNewTitle;
@property(copy, nonatomic) NSOrderedSet *contactKeys; // @synthesize contactKeys=_contactKeys;
- (void).cxx_destruct;
- (_Bool)preferenceObject:(id)arg1 representsContact:(id)arg2;
- (id)errorsForPreference:(id)arg1;
- (void)setErrors:(id)arg1 forPreference:(id)arg2;
- (long long)indexOfContact:(id)arg1;
- (void)mergeRecentsAndMeCard;
- (_Bool)supportsDeletion;
- (void)_removeDuplicates;
@property(copy, nonatomic) NSString *contactKey;
- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(_Bool)arg4;
@property(retain, nonatomic) PKPaymentOptionsRecents *paymentOptionsRecents;

@end

