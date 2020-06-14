//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBCondition, _INPBContact;

@protocol _INPBContactList <NSObject>
+ (Class)contactType;
@property(readonly, nonatomic) unsigned long long contactsCount;
@property(copy, nonatomic) NSArray *contacts;
@property(readonly, nonatomic) _Bool hasCondition;
@property(retain, nonatomic) _INPBCondition *condition;
- (_INPBContact *)contactAtIndex:(unsigned long long)arg1;
- (void)addContact:(_INPBContact *)arg1;
- (void)clearContacts;
@end

