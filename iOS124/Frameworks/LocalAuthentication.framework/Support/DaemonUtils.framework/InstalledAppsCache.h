//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface InstalledAppsCache : NSObject
{
    NSMutableDictionary *_appCache;
    NSMutableDictionary *_nameCache;
    NSMutableDictionary *_pluginCache;
    NSMutableSet *_siriPlugins;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_currentLocaleChanged;
- (_Bool)isSiriPlugin:(id)arg1;
- (id)pluginNameForUUID:(id)arg1 bundleId:(id *)arg2;
- (void)_addApplicationToCache:(id)arg1;
- (void)_appRegistrationRemoved:(id)arg1;
- (void)_appRegistrationAdded:(id)arg1;
- (_Bool)_isPlaceholder:(id)arg1;
- (id)lsBundleIDForUUID:(id)arg1;
- (id)appNameForUUID:(id)arg1 bundleId:(id *)arg2;
- (id)_bundleIDFromUUID:(id)arg1;
- (void)_rebuildCache;
- (void)_removeApplicationFromCache:(id)arg1;
- (id)_nameForUUID:(id)arg1 fromDict:(id)arg2 bundleId:(id *)arg3;
- (void)_logStatus;
- (void)_appRegistrationChanged;
- (void)dealloc;
- (id)init;

@end

