//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)storeItemWithIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *matchDictionary;
@property(readonly, nonatomic) long long contentType;

@end

