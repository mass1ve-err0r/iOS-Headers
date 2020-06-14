//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KeychainSyncCountryInfo, NSArray, NSString, PSEditableTableCell, PSListController, PSPhoneNumberSpecifier, PSSpecifier;
@protocol KeychainSyncPhoneSettingsFragmentDelegate;

@interface KeychainSyncPhoneSettingsFragment : NSObject
{
    NSArray *_specifiers;
    PSPhoneNumberSpecifier *_phoneNumberSpecifier;
    PSSpecifier *_countrySpecifier;
    PSListController *_listController;
    NSString *_phoneNumber;
    KeychainSyncCountryInfo *_countryInfo;
    id <KeychainSyncPhoneSettingsFragmentDelegate> _delegate;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <KeychainSyncPhoneSettingsFragmentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KeychainSyncCountryInfo *countryInfo; // @synthesize countryInfo=_countryInfo;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (void)textFieldChanged:(id)arg1;
@property(readonly, nonatomic) PSEditableTableCell *phoneNumberCell;
- (id)unformattedPhoneNumber;
- (id)phoneNumberForSpecifier:(id)arg1;
- (void)setPhoneNumber:(id)arg1 forSpecifier:(id)arg2;
- (id)dialingCountryInfoForSpecifier:(id)arg1;
- (void)setDialingCountryInfo:(id)arg1 forSpecifier:(id)arg2;
- (void)resignFirstResponder;
- (void)reloadSpecifiers;
@property(readonly, nonatomic) NSArray *specifiers;
- (void)dealloc;
- (id)initWithListController:(id)arg1;

@end

