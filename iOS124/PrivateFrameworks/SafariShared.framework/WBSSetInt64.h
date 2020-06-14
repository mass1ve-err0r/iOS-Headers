//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCoding-Protocol.h>
#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@interface WBSSetInt64 : NSObject <NSCoding, NSSecureCoding, NSCopying>
{
    unordered_set_da619913 _set;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)commaSeparatedValues;
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)contains:(long long)arg1;
@property(readonly, nonatomic) const unordered_set_da619913 *set;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMovableSet:(unordered_set_da619913 *)arg1;
- (id)initWithSet:(const unordered_set_da619913 *)arg1;
- (id)initWithInt64:(long long)arg1;
- (id)init;

@end

