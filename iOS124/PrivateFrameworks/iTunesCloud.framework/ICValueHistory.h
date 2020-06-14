//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface ICValueHistory : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_items;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeValuesBeforeTimestamp:(unsigned long long)arg1;
- (void)removeAllValues;
- (id)lastValue;
- (id)firstValueBeforeTimestamp:(unsigned long long)arg1;
- (id)firstValueAfterOrEqualToTimestamp:(unsigned long long)arg1;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long count;
- (void)addValuesFromHistory:(id)arg1;
- (void)addValue:(id)arg1 timestamp:(unsigned long long)arg2;

@end

