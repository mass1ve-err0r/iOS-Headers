//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLPlacemark;

@interface INSpatialEventTrigger : NSObject <NSCopying, NSSecureCoding>
{
    CLPlacemark *_placemark;
    long long _event;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
@property(readonly, copy, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPlacemark:(id)arg1 event:(long long)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;

@end

