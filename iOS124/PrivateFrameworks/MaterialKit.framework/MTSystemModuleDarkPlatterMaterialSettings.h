//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MaterialKit/MTSystemModuleMaterialSettings.h>

#import <MaterialKit/_MTMaterialPerformanceConfiguring-Protocol.h>

@class NSString;

@interface MTSystemModuleDarkPlatterMaterialSettings : MTSystemModuleMaterialSettings <_MTMaterialPerformanceConfiguring>
{
}

+ (id)sharedMaterialSettings;
- (id)_blurInputQualityForOptions:(unsigned long long)arg1;
- (double)_backdropScaleForOptions:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

