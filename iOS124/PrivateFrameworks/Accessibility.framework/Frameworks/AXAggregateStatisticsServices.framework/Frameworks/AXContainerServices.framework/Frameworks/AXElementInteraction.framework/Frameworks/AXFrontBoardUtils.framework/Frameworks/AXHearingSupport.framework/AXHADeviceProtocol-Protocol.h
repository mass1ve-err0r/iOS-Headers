//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXHearingSupport/NSObject-Protocol.h>

@class AXHearingAidMode, NSArray, NSDate, NSDictionary, NSIndexSet, NSMutableArray, NSString;

@protocol AXHADeviceProtocol <NSObject>
@property(readonly, retain, nonatomic) NSString *deviceUUID;
@property(readonly, retain, nonatomic) AXHearingAidMode *rightSelectedStreamingProgram;
@property(readonly, retain, nonatomic) AXHearingAidMode *leftSelectedStreamingProgram;
@property(readonly, retain, nonatomic) AXHearingAidMode *rightSelectedProgram;
@property(readonly, retain, nonatomic) AXHearingAidMode *leftSelectedProgram;
@property(readonly, copy, nonatomic) NSArray *leftPrograms;
@property(readonly, copy, nonatomic) NSArray *rightPrograms;
@property(readonly, nonatomic) _Bool supportsCombinedVolumes;
@property(readonly, nonatomic) _Bool supportsCombinedPresets;
@property(readonly, nonatomic) _Bool supportsBinauralStreaming;
@property(readonly, nonatomic) short rightMixedVolumeSteps;
@property(readonly, nonatomic) short leftMixedVolumeSteps;
@property(readonly, nonatomic) short rightSensitivitySteps;
@property(readonly, nonatomic) short leftSensitivitySteps;
@property(readonly, nonatomic) short rightStreamVolumeSteps;
@property(readonly, nonatomic) short leftStreamVolumeSteps;
@property(readonly, nonatomic) short rightMicrophoneVolumeSteps;
@property(readonly, nonatomic) short leftMicrophoneVolumeSteps;
@property(readonly, retain, nonatomic) NSDate *rightBatteryLowDate;
@property(readonly, retain, nonatomic) NSDate *leftBatteryLowDate;
@property(readonly, nonatomic) double leftBatteryLevel;
@property(readonly, nonatomic) double rightBatteryLevel;
@property(nonatomic) BOOL leftBass;
@property(nonatomic) BOOL rightBass;
@property(nonatomic) BOOL leftTreble;
@property(nonatomic) BOOL rightTreble;
@property(nonatomic) double leftMixedVolume;
@property(nonatomic) double rightMixedVolume;
@property(nonatomic) double leftSensitivity;
@property(nonatomic) double rightSensitivity;
@property(nonatomic) double leftStreamVolume;
@property(nonatomic) double rightStreamVolume;
@property(nonatomic) double leftMicrophoneVolume;
@property(nonatomic) double rightMicrophoneVolume;
@property(readonly, retain, nonatomic) NSString *rightPeripheralUUID;
@property(readonly, retain, nonatomic) NSString *leftPeripheralUUID;
@property(readonly, retain, nonatomic) NSString *leftUUID;
@property(readonly, retain, nonatomic) NSString *rightUUID;
@property(nonatomic) int availableEars;
@property(readonly, retain, nonatomic) NSString *rightHardwareVersion;
@property(readonly, retain, nonatomic) NSString *leftHardwareVersion;
@property(readonly, retain, nonatomic) NSString *rightFirmwareVersion;
@property(readonly, retain, nonatomic) NSString *leftFirmwareVersion;
@property(readonly, retain, nonatomic) NSMutableArray *model;
@property(readonly, retain, nonatomic) NSMutableArray *manufacturer;
@property(readonly, retain, nonatomic) NSString *name;
@property(nonatomic) _Bool keepInSync;
@property(readonly, nonatomic) _Bool isConnecting;
@property(readonly, nonatomic) _Bool isPaired;
- (id)valueForProperty:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
- (NSIndexSet *)selectedProgramIndexes;
- (NSArray *)selectedPrograms;
- (void)selectProgram:(AXHearingAidMode *)arg1 forEar:(int)arg2;
- (NSArray *)programs;
- (void)loadRequiredProperties;
- (_Bool)didLoadRequiredProperties;
- (_Bool)didLoadBasicProperties;
- (_Bool)containsPeripheralWithUUID:(NSString *)arg1;
- (_Bool)hasConnection;
- (_Bool)isConnected;
- (_Bool)rightAvailable;
- (_Bool)leftAvailable;
- (void)disconnectAndUnpair:(_Bool)arg1;
- (void)connect;
- (id)initWithPersistentRepresentation:(NSDictionary *)arg1;
@end

