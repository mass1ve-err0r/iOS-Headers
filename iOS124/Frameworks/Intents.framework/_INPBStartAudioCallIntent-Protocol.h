//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBDialingContact, _INPBIntentMetadata;

@protocol _INPBStartAudioCallIntent <NSObject>
+ (Class)targetContactsType;
+ (Class)contactType;
@property(nonatomic) _Bool hasTtyType;
@property(nonatomic) int ttyType;
@property(readonly, nonatomic) unsigned long long targetContactsCount;
@property(copy, nonatomic) NSArray *targetContacts;
@property(nonatomic) _Bool hasPreferredCallProvider;
@property(nonatomic) int preferredCallProvider;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasDestinationType;
@property(nonatomic) int destinationType;
@property(readonly, nonatomic) unsigned long long contactsCount;
@property(copy, nonatomic) NSArray *contacts;
@property(nonatomic) _Bool hasAudioRoute;
@property(nonatomic) int audioRoute;
- (int)StringAsTTYType:(NSString *)arg1;
- (NSString *)ttyTypeAsString:(int)arg1;
- (_INPBDialingContact *)targetContactsAtIndex:(unsigned long long)arg1;
- (void)addTargetContacts:(_INPBDialingContact *)arg1;
- (void)clearTargetContacts;
- (int)StringAsPreferredCallProvider:(NSString *)arg1;
- (NSString *)preferredCallProviderAsString:(int)arg1;
- (int)StringAsDestinationType:(NSString *)arg1;
- (NSString *)destinationTypeAsString:(int)arg1;
- (_INPBDialingContact *)contactAtIndex:(unsigned long long)arg1;
- (void)addContact:(_INPBDialingContact *)arg1;
- (void)clearContacts;
- (int)StringAsAudioRoute:(NSString *)arg1;
- (NSString *)audioRouteAsString:(int)arg1;
@end

