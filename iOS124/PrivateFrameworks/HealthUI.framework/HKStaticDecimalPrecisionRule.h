//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDecimalPrecisionRule-Protocol.h>

@class NSString;

@interface HKStaticDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule>
{
    long long _decimalPrecision;
}

@property(nonatomic) long long decimalPrecision; // @synthesize decimalPrecision=_decimalPrecision;
- (id)numberFormatter;
- (long long)decimalPrecisionForValue:(double)arg1;
- (long long)maximumDecimalPrecision;
- (long long)minimumDecimalPrecision;
- (id)initWithDecimalPrecision:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

