//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSDecimalNumber, NSString;

@protocol GEOTransitFare <NSObject>
@property(readonly, nonatomic) _Bool cashOnly;
@property(readonly, nonatomic) NSArray *supportedICCardProviders;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) NSDecimalNumber *value;
@end

