//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>
#import <CoreSuggestionsInternals/NSSecureCoding-Protocol.h>

@class NSString;

@interface SGSimpleMailHeaderKeyValue : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_key;
    NSString *_value;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToSimpleMailHeaderKeyValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

