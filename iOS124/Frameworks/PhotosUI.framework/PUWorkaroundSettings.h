//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUWorkaroundSettings : PXSettings
{
    _Bool _addRemoveVideoLayer;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool addRemoveVideoLayer; // @synthesize addRemoveVideoLayer=_addRemoveVideoLayer;
- (void)setDefaultValues;
- (id)parentSettings;

@end

