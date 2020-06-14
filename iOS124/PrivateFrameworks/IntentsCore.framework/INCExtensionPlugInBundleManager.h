//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface INCExtensionPlugInBundleManager : NSObject
{
    NSMutableDictionary *_intentsSupported;
    NSObject<OS_dispatch_queue> *_intentsSupportedQueue;
    NSDictionary *_pluginsPlistDictionary;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (_Bool)_registerBundle:(id)arg1 bundleIdentifier:(id)arg2;
- (_Bool)loadBundleForBundleIdentifier:(id)arg1 wasPrewarmed:(_Bool *)arg2;
- (void)_setExtensionPlugInBundle:(id)arg1 forIntent:(id)arg2 bundleIdentifier:(id)arg3;
- (id)_extensionPlugInBundleForIntent:(id)arg1 bundleIdentifier:(id)arg2;
- (id)extensionForIntent:(id)arg1;
- (id)init;

@end

