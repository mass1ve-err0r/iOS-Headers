//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUIPeopleSource-Protocol.h>

@class AAFamilyDetailsRequest, CNContactStore, CNUIAccountsFacade, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIFamilyPeopleSource : NSObject <CNUIPeopleSource>
{
    _Bool _fetching;
    CNUIAccountsFacade *_accountsFacade;
    CNContactStore *_contactStore;
    NSArray *_familyMembers;
    NSArray *_familyContacts;
    AAFamilyDetailsRequest *_familyRequest;
}

+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;
+ (id)sourceKind;
@property(nonatomic) _Bool fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) AAFamilyDetailsRequest *familyRequest; // @synthesize familyRequest=_familyRequest;
@property(retain, nonatomic) NSArray *familyContacts; // @synthesize familyContacts=_familyContacts;
@property(retain, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNUIAccountsFacade *accountsFacade; // @synthesize accountsFacade=_accountsFacade;
- (void).cxx_destruct;
- (CDUnknownBlockType)familyContactFromFamilyMemberTransformWithKeysToFetch:(id)arg1;
- (void)fetchFamilyMembers;
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;
- (id)groups;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

