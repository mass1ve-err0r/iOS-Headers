//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface EKParticipantToContactMatcher : NSObject
{
    NSArray *_contacts;
    NSSet *_contactEmailAddresses;
    NSSet *_contactNameComponents;
    NSSet *_contactCompanyNames;
}

+ (id)_allParticipantsOnItem:(id)arg1;
+ (id)_nameComponentsWithGivenName:(id)arg1 familyName:(id)arg2;
+ (id)_nameComponentsForContact:(id)arg1 reverse:(_Bool)arg2;
@property(retain, nonatomic) NSSet *contactCompanyNames; // @synthesize contactCompanyNames=_contactCompanyNames;
@property(retain, nonatomic) NSSet *contactNameComponents; // @synthesize contactNameComponents=_contactNameComponents;
@property(retain, nonatomic) NSSet *contactEmailAddresses; // @synthesize contactEmailAddresses=_contactEmailAddresses;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (_Bool)anyContactMatchesParticipant:(id)arg1;
- (id)matchingParticipantsFromParticipants:(id)arg1;
- (id)matchingParticipantsFromItem:(id)arg1;
- (_Bool)anyContactMatchesAnyParticipant:(id)arg1;
- (_Bool)anyContactMatchesAnyParticipantFromItem:(id)arg1;
- (void)_cacheContactData;
- (id)initWithContacts:(id)arg1;

@end

