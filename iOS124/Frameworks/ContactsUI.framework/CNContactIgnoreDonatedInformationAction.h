//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

@class CNDonationStore, CNUIExternalComponentsFactory;

__attribute__((visibility("hidden")))
@interface CNContactIgnoreDonatedInformationAction : CNContactAction
{
    CNUIExternalComponentsFactory *_componentsFactory;
    CNDonationStore *_donationStore;
}

@property(readonly, nonatomic) CNDonationStore *donationStore; // @synthesize donationStore=_donationStore;
@property(readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // @synthesize componentsFactory=_componentsFactory;
- (void).cxx_destruct;
- (void)showRejectionFailureAlert;
- (_Bool)rejectAllDonations;
- (void)performActionWithSender:(id)arg1;
- (id)initWithContact:(id)arg1 donationStore:(id)arg2 componentsFactory:(id)arg3;
- (id)initWithContact:(id)arg1;

@end

