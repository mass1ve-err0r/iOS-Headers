//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDIAPInfoRequestOptions : ASDRequestOptions
{
    NSArray *_adamIds;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *adamIds; // @synthesize adamIds=_adamIds;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdamIds:(id)arg1;

@end

