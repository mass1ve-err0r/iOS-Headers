//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/NSCopying-Protocol.h>
#import <ActivityAchievements/NSSecureCoding-Protocol.h>

@class HKQuantity, NSDate, NSDateComponents, NSString;

@interface ACHEarnedInstance : NSObject <NSCopying, NSSecureCoding>
{
    CDStruct_1bc457c2 _smallEarnedDateComponents;
    unsigned char _creatorDevice;
    unsigned long long _uniqueNameIndex;
    unsigned long long _key;
    HKQuantity *_value;
    NSDate *_createdDate;
}

+ (id)_allTemplateUniqueNames;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(retain, nonatomic) HKQuantity *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
@property(nonatomic) unsigned char creatorDevice; // @synthesize creatorDevice=_creatorDevice;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *templateUniqueName;
@property(retain, nonatomic) NSDateComponents *earnedDateComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodable:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

