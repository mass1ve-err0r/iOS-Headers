//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions
{
    NSArray *_items;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplicationMetadata:(id)arg1;

@end

