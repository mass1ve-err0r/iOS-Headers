//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXLayoutOptions, SXUnitConverter;

@protocol SXUnitConverterFactory <NSObject>
- (SXUnitConverter *)createUnitConverterWithComponentWidth:(double)arg1 parentWidth:(double)arg2 layoutOptions:(SXLayoutOptions *)arg3;
@end

