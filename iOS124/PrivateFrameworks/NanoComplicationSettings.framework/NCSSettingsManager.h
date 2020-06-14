//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoComplicationSettings/NCSInternalSettingsManager.h>

@protocol NCSSettingsManagerDelegate;

@interface NCSSettingsManager : NCSInternalSettingsManager
{
    id <NCSSettingsManagerDelegate> _delegate;
}

+ (id)sharedSettingsManager;
@property(nonatomic) __weak id <NCSSettingsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleLocaleChange:(id)arg1;
- (id)_fetchSockPuppetComplications;
- (void)_updateSockPuppetComplications;
- (void)loadSettings;
- (void)dealloc;
- (id)init;

@end

