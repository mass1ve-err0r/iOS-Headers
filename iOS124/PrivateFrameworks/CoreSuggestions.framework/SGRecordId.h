//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@interface SGRecordId : NSObject <NSCopying, NSSecureCoding>
{
    long long _internalEntityId;
}

+ (id)recordIdWithNumericValue:(long long)arg1;
+ (id)recordIdWithInternalEntityId:(long long)arg1;
+ (_Bool)supportsSecureCoding;
- (id)description;
- (_Bool)isEqualToRecordId:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)numericValue;
- (long long)internalEntityId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalEntityId:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

