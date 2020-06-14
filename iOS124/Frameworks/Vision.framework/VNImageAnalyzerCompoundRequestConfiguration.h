//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNRequestConfiguration.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequestConfiguration : VNRequestConfiguration
{
    NSString *_detectorType;
    NSDictionary *_detectorConfigurationOptions;
    NSArray *_originalRequestConfigurations;
}

@property(copy, nonatomic) NSArray *originalRequestConfigurations; // @synthesize originalRequestConfigurations=_originalRequestConfigurations;
@property(copy, nonatomic) NSDictionary *detectorConfigurationOptions; // @synthesize detectorConfigurationOptions=_detectorConfigurationOptions;
@property(copy, nonatomic) NSString *detectorType; // @synthesize detectorType=_detectorType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

