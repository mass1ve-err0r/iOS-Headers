//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PFAssetAdjustmentFingerprintData : NSObject
{
    NSString *_adjustmentType;
    NSString *_adjustmentCompoundVersion;
    NSString *_adjustmentCreatorCode;
    unsigned long long _adjustmentSourceType;
    NSData *_simpleAdjustmentData;
    NSData *_baseImage;
    NSString *_baseImageFingerprint;
    NSData *_largeAdjustmentData;
    NSString *_largeAdjustmentDataFingerprint;
    NSData *_secondaryAdjustmentData;
}

@property(copy, nonatomic) NSData *secondaryAdjustmentData; // @synthesize secondaryAdjustmentData=_secondaryAdjustmentData;
@property(copy, nonatomic) NSString *largeAdjustmentDataFingerprint; // @synthesize largeAdjustmentDataFingerprint=_largeAdjustmentDataFingerprint;
@property(copy, nonatomic) NSData *largeAdjustmentData; // @synthesize largeAdjustmentData=_largeAdjustmentData;
@property(copy, nonatomic) NSString *baseImageFingerprint; // @synthesize baseImageFingerprint=_baseImageFingerprint;
@property(copy, nonatomic) NSData *baseImage; // @synthesize baseImage=_baseImage;
@property(copy, nonatomic) NSData *simpleAdjustmentData; // @synthesize simpleAdjustmentData=_simpleAdjustmentData;
@property(nonatomic) unsigned long long adjustmentSourceType; // @synthesize adjustmentSourceType=_adjustmentSourceType;
@property(copy, nonatomic) NSString *adjustmentCreatorCode; // @synthesize adjustmentCreatorCode=_adjustmentCreatorCode;
@property(copy, nonatomic) NSString *adjustmentCompoundVersion; // @synthesize adjustmentCompoundVersion=_adjustmentCompoundVersion;
@property(copy, nonatomic) NSString *adjustmentType; // @synthesize adjustmentType=_adjustmentType;
- (void).cxx_destruct;

@end

