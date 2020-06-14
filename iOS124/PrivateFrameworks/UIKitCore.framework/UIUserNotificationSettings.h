//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSSet;

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _types;
    NSSet *_categories;
}

+ (_Bool)supportsSecureCoding;
+ (id)settingsForRegisteredSettings:(id)arg1 requestedSettings:(id)arg2;
+ (id)settingsForTypes:(unsigned long long)arg1 categories:(id)arg2;
+ (id)settingsForUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) unsigned long long types; // @synthesize types=_types;
- (void).cxx_destruct;
- (id)userNotificationActionSettings;
- (unsigned long long)allowedUserNotificationTypes;
- (id)validatedSettings;
- (id)description;
- (_Bool)mayPresentUserNotificationOfType:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypes:(unsigned long long)arg1 categories:(id)arg2;
- (id)initWithUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2;

@end

