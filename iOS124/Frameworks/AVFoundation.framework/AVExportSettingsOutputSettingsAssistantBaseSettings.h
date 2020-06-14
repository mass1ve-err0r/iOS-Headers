//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVOutputSettingsAssistantBaseSettingsProvider-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider>
{
    NSDictionary *_exportSettings;
}

@property(readonly, nonatomic) NSDictionary *baseVideoSettings;
@property(readonly, nonatomic) NSDictionary *baseAudioSettings;
- (void)dealloc;
- (id)initWithOutputSettingsPreset:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

