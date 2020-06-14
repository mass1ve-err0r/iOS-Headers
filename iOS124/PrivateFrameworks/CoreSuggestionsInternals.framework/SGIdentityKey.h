//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface SGIdentityKey : NSObject <NSCopying>
{
    NSString *_content;
    unsigned long long _type;
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
+ (unsigned long long)identityTypeForKeyPart:(id)arg1;
+ (id)keyForContactUniqueId:(id)arg1;
+ (id)keyForContactExternalId:(int)arg1;
+ (id)keyForPersonHandle:(id)arg1;
+ (id)keyForSocialProfile:(id)arg1;
+ (id)keyForInstantMessageAddress:(id)arg1;
+ (id)keyForNormalizedPhone:(id)arg1;
+ (id)keyForNormalizedEmail:(id)arg1;
+ (id)keyForEmail:(id)arg1;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *externalId;
- (id)identityKey;
- (id)phone;
- (_Bool)hasPhone;
- (id)uniqueIdentifier;
- (id)socialProfile;
- (_Bool)hasSocialProfile;
- (id)instantMessageAddress;
- (_Bool)hasInstantMessageAddress;
- (id)emailAddress;
- (_Bool)hasEmailAddress;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToIdentityKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)serialize;
- (id)initWithType:(unsigned long long)arg1 content:(id)arg2;
- (id)initWithSerialized:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

