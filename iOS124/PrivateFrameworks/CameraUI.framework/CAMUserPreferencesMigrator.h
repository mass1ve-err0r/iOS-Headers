//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMUserPreferencesMigrator : NSObject
{
}

+ (long long)_previewViewAspectModeForLegacyAspectMode:(long long)arg1;
+ (long long)_HDRModeForLegacyHDRMode:(long long)arg1;
+ (long long)_captureModeForLegacyCameraMode:(long long)arg1;
+ (long long)_flashModeForLegacyFlashMode:(long long)arg1;
+ (void)migrateLegacyPreferences;

@end

