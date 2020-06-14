//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityPlatformTranslation/NSCopying-Protocol.h>
#import <AccessibilityPlatformTranslation/NSSecureCoding-Protocol.h>

@class AXPTranslationObject, NSArray;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface AXPTranslatorResponse : NSObject <NSCopying, NSSecureCoding>
{
    id <NSObject><NSCopying><NSSecureCoding> _resultData;
    unsigned long long _attribute;
    unsigned long long _notification;
    AXPTranslationObject *_associatedNotificationObject;
    unsigned long long _error;
}

+ (id)allowedDecodableClasses;
+ (id)emptyResponse;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long error; // @synthesize error=_error;
@property(retain, nonatomic) AXPTranslationObject *associatedNotificationObject; // @synthesize associatedNotificationObject=_associatedNotificationObject;
@property(nonatomic) unsigned long long notification; // @synthesize notification=_notification;
@property(nonatomic) unsigned long long attribute; // @synthesize attribute=_attribute;
@property(retain, nonatomic) id <NSObject><NSCopying><NSSecureCoding> resultData; // @synthesize resultData=_resultData;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool boolResponse;
@property(readonly, nonatomic) NSArray *translationsResponse;
@property(readonly, nonatomic) AXPTranslationObject *translationResponse;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

